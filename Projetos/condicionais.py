 # Tipos de condicionais; Simples, Composto, Encadeado

nota1 = nota2 = 0.0
media = 0.0

nota1 = float(input('Digite a primeira nota: '))
nota2 = float(input('Digite a segunda nota: '))

# Calcular a média artimética das notas
media = (nota1 + nota2) / 2

# Condicional Simples
if (media >= 7):
    print('Resultado Aprovado!\nParabéns!')
    print(f'Sua média foi {media}!')

# Condicional Encadeado
elif (media >= 5):
    print('Você ficou de Recuperação!')
    print(f'Sua m[edia foi {media}!')

# Condicional Composta
else:
    print('Você Reprovou!')
    print(f'Sua média foi {media}')




