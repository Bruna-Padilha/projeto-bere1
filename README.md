Descritivo do Produto – Projeto Mensal 1:

<b>Gerenciamento Automatizado de Mercearia – GAM, Versão 1</b>
Introdução. 
As informações aqui contidas fazem parte do processo de desenvolvimento do projeto mensal intitulado Desenvolvimento de Algoritmo e Implementação de Menu para um Sistema em Linguagem C. Portanto, devem ser analisadas e utilizadas como fonte de dados para planejamento e implementação do mesmo.

Problema. 
Dona Berê é dona de uma mercearia (um pequeno comércio para vender produtos e alimentos que possuem maior índice de compra no Bairro XPTO de Foz do Iguaçu/PR). Ela também possui uma máquina de processar pão e implantou como anexo uma pequena padaria. Atualmente, todos os controles são manuais, gerando filas nos horários de pico. A pressão dos vizinhos tem levado a Berê e sua ajudante a cometer erros de cálculo nas cobranças. Ou seja, mesmo trabalhando muito, Dona Berê amarga prejuízo.

Eis o problema:
É possível implementar um Sistema em Linguagem C para dar suporte à mercearia, resolvendo os problemas de Dona Berê?

Necessidades PM01.

Necessidade 1.
O sistema será implementado na linguagem C.
Necessidade 2.
O sistema deve exibir 3 categorias de vendas de produtos:
1. Venda de Material de Limpeza
2. Venda de Alimentos
3.Padaria

Exemplo a seguir:
Menu Principal
1. Material de Limpeza
2. Venda de Alimentos
3. Padaria
4. Pagamento
5.Sair

1. Material de Limpeza
Item (código) - Nome do Item - Valor (Unidade)
11 Detergente R$1.99
12 Sabão em Pó (1kg) R$8.99
13 Esponja R$1.50
14 Amaciante(1Lt) R$15.00
15. Voltar ao Menu Principal

2. Venda de Alimentos
Item (código) - Nome do Item - Valor (Unidade)
21 Café R$19.99
22 Leite (cx) R$5.90
23 Arroz (1kg) R$4.50
24 Feijão Preto (1kg) R$8.00
25 Açucar (1kg) R$5.00
26. Voltar ao Menu Principal

3. Padaria
Item (código) - Nome do Item - Valor (Unidade)
31 Pão de Forma R$ 9,50
32 Pão de Integral R$ 12,50
33 Pão Francês (Unid) R$ 1,90
34 Sonho R$ 8,50
35 Voltar ao Menu Principal

Necessidade 3.
Cálculo do total por categoria.
Ao indicar o produto, a dona Berê precisa informar a quantidade que o cliente está comprando. A quantidade deve ser multiplicada pelo valor do item adquirido.
Após a multiplicação, o total deve ser acumulado no totalizador por categoria.

Necessidade 4.
Pagamento. 
Ao escolher o Pagamento, um consolidado deve ser exibido.
Lembrete. O sistema deve permitir a compra nas categorias compra.
Assim, o sistema precisa ter um acumulador de gasto em cada categoria.
Exemplo:
Padaria – Total R$13.50; 
Material de Limpeza – R$1.50. 
O total geral é de R$15.00.

Há duas formas de pagamento:
I. Dinheiro (com % de Desconto)
II. Cartão

Regras para o desconto quanto pagamento for feito em dinheiro:
-Até (incluindo)R$ 50,00, 5% de desconto,
-Acima de R$ 50,00 e abaixo de R$100,00, 10% desconto;
-Acima (incluindo) de R$ 100,00, 18% de desconto

Auxílio ao troco. 
Na compra com dinheiro, a Dona Berê indicará o valor recebido, e o sistema deve retornar valor do troco a ser devolvido para o cliente.
No pagamento por cartão, a Dona Berê deve informar (1) – Pagamento na máquina Ok; (0) – Pagamento no cartão não Ok. no segundo caso, o sistema deve permitir escolher novamente a forma de pagamento.

Necessidade 5.
Modelagem
I. Funções podem ser usadas para deixar o código mais organizado (não obrigatório);
II. É preciso representar o sistema em um fluxograma.
III. É preciso deixar o sistema Berê sempre em funcionamento, ao encerrar o sistema é importante informar a quantidade de vendas e o faturamento.
IV. É preciso criar uma padronização para as variáveis

Atividade
I. Documentação da solução (fluxograma)
II. Bere.C.
Ao final o líder da equipe deverá pastar esses 2 itens na Blackboard no local indicado pelo professor.
O grupo deve ficar atento as informações adicionais que poderão ser passadas em sala de aula.
