<h1>Processos</h1>
Uma abstração de um programa em execução. Elas mantêm a capacidade de operações pseudo concorrentes, mesmo quando há apenas uma CPU disponível.

<b>2.1.1 - o modelo de processo:</b><br> todos os softwares que podem ser executadoes em um computador, são organizados em vários ***processos sequencias***. Um processo é apenas um programa em executação, um apanhado dos valores atuais do contador de programa, dos registradores e das variáveis.

Por um intervalo de tempo suficientemente longo, todos os processos avançam, mas, a cada instante, apenas um único processo está realmente executando.

<b>2.1.2 Criação de processos:</b><br>Há quatro eventos principais que fazem com que processos sejam criados: 
1 - Início do sistema.<br>
2 - Execução de uma chamada de sistema de criação de processo por um processo em execução.<br>
3 - Uma requisição do usuário para criar um novo processo.<br>
4 - Início de uma tarefa em lote(batch job).<br>


<b>2.1.3 - Término de processos </b> <br>
Um processo começa a executar e faz seu trabalho. Contudo, mais cesdo ou mais tarde o novo processo termina em razão das seguintes condições:
1 - Saída normal(voluntária)<br>
2 - Saída pro erro (voluntária)<br>
3 - Erro fatal (involuntária)<br>
4 - Cancelamento por outro processo.<br>

<b>2.1.4 - Hierárquia de processos</b> <br>
Em alguns sistemas, quando um processo cria outro, o processo pai e o processo filho continuam de certa maneira associados. O próprio processo filho pode gerar mais processo, formando um hierárquia de processos.
Basicamente vamos falar dos dois principais sistemas:
Unix: um processo, todos os seus filhos e descendentes formam um grupo de processos.<br>
Windows: Não apresenta nenhum conceito de hierarquia de processos.

<b>2.1.5 - Estados de processos</b>
<br>Quanto aos estados de processos, eles podem estar:<br>
1 - Em execução (realmente usando a CPU naquele instante).<br>
2 - Pronto (executável> temporáriamente parado para dar lugar a outros processos).<br>
3 - Bloqueado (incapaz de executar enquanto não ocorrer um evento).<br>
