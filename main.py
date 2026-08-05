# Primeira expressão era: ~(~A *  C * D) + (B * ~A) + (C * B)

def product(iterable, repeat=1):
    # Repete a lista conforme o parâmetro repeat
    pools = [iterable] * repeat
    result = [[]]
    for pool in pools:
        result = [x+[y] for x in result for y in pool]
    return [tuple(prod) for prod in result]

# Função para gerar todas as combinações possíveis
def gerar_combinacoes(n_variaveis):
    return list(product([0, 1], repeat=n_variaveis))

# Função para avaliar expressão lógica
def avaliar_expressao(expressao, variaveis, valores):
    contexto = dict(zip(variaveis, valores))
    # Substitui símbolos por operadores Python
    expr_python = expressao.replace("+", " or ").replace("*", " and ").replace("~", " not ")
    return eval(expr_python, {}, contexto)

# Função principal
def tabela_verdade(n_variaveis, expressao):
    variaveis = [chr(65+i) for i in range(n_variaveis)]
    combinacoes = gerar_combinacoes(n_variaveis)

    print(" | ".join(variaveis) + " | Resultado")
    print("-" * (4 * n_variaveis + 12))

    for valores in combinacoes:
        resultado = avaliar_expressao(expressao, variaveis, valores)
        linha = " | ".join(str(v) for v in valores) + " | " + str(int(resultado))
        print(linha)

if __name__ == "__main__":
    while True:
        n = int(input("Quantas variáveis? "))
        expr = input("Digite a expressão lógica (ex: ~A + B): ")
        tabela_verdade(n, expr)