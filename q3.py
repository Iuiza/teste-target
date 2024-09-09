import json

dados = {}

faturamento_diario = json.loads(dados)
valores = [d['faturamento'] for d in faturamento_diario if d['faturamento'] > 0]

menor_valor = min(valores)
maior_valor = max(valores)
media_mensal = sum(valores) / len(valores)

dias_acima_da_media = sum(1 for valor in valores if valor > media_mensal)

print(f"Menor valor: {menor_valor}")
print(f"Maior valor: {maior_valor}")
print(f"Dias com faturamento acima da média: {dias_acima_da_media}")