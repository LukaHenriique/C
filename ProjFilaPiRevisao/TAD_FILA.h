#ifndef TAD_FILA_H_INCLUDED
#define TAD_FILA_H_INCLUDED

// Cria estrutura de dados para novo
 typedef struct novo
{
      int valor_numero;
	  struct novo *proximo; // PONTEIRO APONTA PARA OUTRA ESTRUTURA NOVO_STRUCT QUE TEM UM OUTRO VALOR DO ELEMENTO
} NOVO_STRUCT  ; // AQUI CRIO UM APELIDO PARA STRUCT, ASSIM POSSO USSAR ESSE NOME PARA APONTAR PARA AS ESTRUTURAS

    NOVO_STRUCT *insere(NOVO_STRUCT **PONTEIRO2_INICIO, NOVO_STRUCT **PONTEIRO2_FIM, int ELEMENTO);

	/* AQUI CRIO UM SEGUNDO ** PONTEIRO QUE APONTA PARA ESSAS MESMAS VARIAVEIS QUE FORAM CRIADAS NA MAIN
	   AQUI ELE RECEBE DA MAN OS PARAMETROS NOMES DAS VARIAVEIS QUE FORAM CRIADO INICIO E FIM DA RAND E VER_ELEMENTO QUE PARAMENTRO QUE VOI INSEREIR NESSA FUNCAO COMO O PRIMEIRO NUMERO DA PILHA 41*/
	NOVO_STRUCT *insere(NOVO_STRUCT **PONTEIRO2_INICIO, NOVO_STRUCT **PONTEIRO2_FIM, int ELEMENTO)
	{
	    /* COMO ESSE ESPA�O NAO EXISTI NA MEMORIA PARA ALOCAR ESSE 41 CRIAREI A VARIAVEL *PONTEIRONOVO NOVO PARA ALOCAR ESSA VARIAVEL 41 EM UM ENDERE�O DA MEMORIA*/
	   /* AQUI *PONTEIRONOVO VAI CRIAR UM ESPACO PARA NOVO_STRUCT novo PARA ARMAZENAS TODOS DOS NUMERO GERADO PELO RAND*/

        NOVO_STRUCT *PONTEIRONOVO; // CRIACAO DO *PONTEIRONOVO PARA ARMAZENAMETO DE DADOS;

        /* AQUI E A PARTE QUE ELE CRIA OS QUANDRADINHOS DE ESPACO NA MEMORIA*/
        PONTEIRONOVO = (NOVO_STRUCT *)  malloc (sizeof(NOVO_STRUCT ));
        PONTEIRONOVO->valor_numero = ELEMENTO; // AQUI O "PONTEIRONOVO" RECEBE O VALOR DOS NUMERO QUE AS VARIAVEIS TEM AS  VARIAVEIS VER_ELEMENTO VALOR_NUMERO */


        /* AGORA AS VARIAVEIS  INICIO " FIM  E INICIO " VAI PASSA POR UMA VERIFICA�AO SE E NULO OU DEFINIR EM QUAL POSICAO ELA ESTA. */
        if((*PONTEIRO2FIM) = NULL) // VERIFICA SE VARIAVEI  *PONTEIRO2_FIM ESTA NULO SEM UM VALOR NUMERICO.
        {
             /* SO PASSARA POR ESSE PROCESSO SE A LISTA ESTIVER VAZIA*/
            /* ENTAO NESSE CASO SE O FIM E NULO O FIM VAI RECEBER OS VALORES QUE ESTAO NA VARIAVEL PONTEIRONOVO PONTEIRO2_INICIO E COLOCA O FIM DELA COMO A PRIMEIRO NUMERO DA FILA*/
            (*PONTEIRO2_FIM) = (*PONTEIRO2_INICIO) = PONTEIRONOVO;// AQUI A VARIAVEIS INICIO E FIM ESTA RECEBENDO VALOR DA STRUCT QUE GEROU UM NUMERO E PONTEIRONOVO FOI CRIADA NA MEMORIA PARA ARMAZENAR ESSE VALOR.
            (*PONTEIRO2_FIM) -> proximo = NULL; // AQUI ELE DIZ QUE OS PROXIMO *PONTEIROS2_FIM SAO NULOS NAO TEM VALOR AINDA E SOM TEM 1 VALOR E ESSE VALOR VAI SER O PRIMEIRO
        }

                    /*AQUI NO ELSE ELE IRA PASSAR SO QUANDO A LISTA ESTIVER ELEMETOS JA INCLUIDOS  NUMEROS*/


                    else
                    {
                        /* AQUI ELE (*PONTEIRO2_FIM) ESSE PONTEIRO JA COM O VALOR E ESTA APONTANDO PARA A PROXIMO NUMERO QUE QUE A STRUCT NOVO_STRUCT CRIOU E ARMAZOU ESSE VALOR NO PONTEIRONOVO ENTAO O PROXIMO VAI RECEBER ESSE VALOR DA VARIAVEL PONTEIRONOVO*/
                        (*PONTEIRO2_FIM) -> proximo = PONTEIRONOVO; // PONTEIRO2_FIM ESTA APONTANTADO PARA UM PROXIMO STRUCT PARA UM NOVO NUMERO GERADO PELA UMA NOVA STRUCT  E ESSE PROXIMO REBEBE ESSE VALOR QUE A STRICT ARMAZENOU NO VARIAVEL PONTEIRONOVO
                        (*PONTEIRO2_FIM) = PONTEIRONOVO;// ENTAO AQUI ELE DIZ QUE ESSE (*PONTEIRO2_FIM) VAI RECEBER CONTEUDO QUE FOI GERADO PELA STRUCT QUE ARMAZENOU ESSE VALOR NO PONTEIRONOVO ENTAO ESSE VALOR VAI FICAR NO FINAL DA PINLHA NA SEQUENCIA
                        (*PONTEIRO2_FIM) -> proximo = NULL; // AQUI ELE ESTA ATRIBUINDO NULO PARA A PROXIMA STRUCT ENTAO ISSO QUE DIZER QUE TENHO DOIS VALORES NA PILHA EO PROXIMO DA PILHA E NULA, DEPOIS QUE EU RODAR A A RAND DA STRUCT ENTRA MAIS OUTRO NUMERO NA SEGUENCIA.
                    }
    printf("ENDERECO DA NOVA STRUCT NOVO GERADA = %d\n",PONTEIRONOVO);
    printf("NOVO NUMERO GERADO DA NOVA STRUCT NOVO = %d\n",PONTEIRONOVO->valor_numero);
    printf("ENDERECO DO PONTEIRO --> *PONTEIRO_INICIO = %d\n",*PONTEIRO2_INICIO);
    printf("VALOR DO SO NUMERO DA STRUCT NOVO (APONTADO PELO *PONTEIRO_INICIO) = %d\n",(*PONTEIRO2_INICIO)->valor_numero);
    printf("ENDERECO DO STRUCT NOVO (DO *PONTEIRO_FIM) = %d\n",(*PONTEIRO2_FIM)->proximo);
    printf("VALOR DO SO NUMERO DA STRUCT NOVO (APONTADO PELO *PONTEIRO_FIM) = %d\n",(*PONTEIRO2_FIM)->valor_numero);
    system("pause>NULL");
    system(cls);

	}

    /*AQUI ELE VAI COMECAR A VERIFICAO PELA PRIMEIRA VARIAVEL *PONTEIRO2_INICIO PORQUE FOI A UNICA VARIAVEL QUE COMECOU COM PRIMEIRO NUMERO DA STRUCT */
	void lista_listapilha_consulta(NOVO_STRUCT novo *PONTEIRO2_INICIO)
	{
	    if(vazia(PONTEIRO2_INICIO))
        {
            printf("LISTA ESTA FAZIA!");
        }
            else
            {
                printf("FILA ATUAL!!\n");
                do
                {
                     printf("\nO ENDERECO: %d - VALOR DO ITEM = %d - ENDERECO DO PROXIMO = %d",PONTEIRO2_INICIO,PONTEIRO2_INICIO->valor_numero,PONTEIRO2_INICIO->proximo);
                     PONTEIRO2_INICIO = PONTEIRO2_INICIO ->proximo;// AQUI FEITO UM LUPI, ONDE PONTEIRO2_INICIO APONTA PARA A PROXIMA STRUCT NOVO A PROCURA DA PROXIMA STRUCT COM NUMERO E ENDERE�O -> ESSA SENTA INDICA QUE ELA ESTA APONTANDO PARA ELA
                     while (PONTEIRO2_INICIO!=NULL); // ESSA E SEQUENCIA, ELA SO VAI PARAR ESSE LUPO QUANDO O PROXIMO NUMERO FOR ZERO NULO DA LISTA
                }
            }
    printf("\n\nTECLE ALGO PARA CONTINUAR\n\n");
    system("pause>NULL");
    system(cls);

}


    void retira (NOVO_STRUCT novo **PONTEIRO2_INICIO, **PONTEIRO2_FIM)
    {
        int VER_VALOR_paraAPAGAR;// VARIAVEL CRIADA PARA VER O VALOR PARA SER APAGADA ONDE ELE VAI ARMAZENA ESSE VALOR
        NOVO_STRUCT novo *PONTEITO_NOVO_EXCLUIDO; // AQUI EU CRIO UM PONTEIRO PARA --> NOVO_STRUCT novo VALOR_NUMERO QUE VOU EXCLUIR DA MEMORIA

        if((*PONTEIRO2_INICIO) = NULL) // CHECA SE A LISTA ESTA FAZIA SE ESTIVER ELE AVISA E SAI
        {
            printf(""fila vazia!)//  AVISA E SAI
            return 0;
        }
            else// SE A FILA NAO ESTIVER FAZIA ELE VAI PROCESSAR ESSAS BASES AQUI PARA FAZER A EXCLUSAO DA VARIAVEL VALR
            {
                printf("O ENDERECO DA (NOVO_STRUCT novo) VALOR_NUMERO A SER RETIRADO = %d\n", *PONTEIRO2_INICIO);// AQUI ELE VAI PEGAR O PROMEIRO ENDERECO DO PRIMEIRO VALOR DA (NOVO_STRUCT novo)
                printf("O VALOR DO (NOVO_STRUCT novo) VALOR_NUMERO A SER RETIRADO = %d\n", (*PONTEIRO2_INICIO)->valor_numero);// E TAMABEM VAI PEGAR QUAL QUE EO VALOR_NUMERO QUE ELE TEM LA PARA APAGAR
                PONTEITO_NOVO_EXCLUIDO =(*PONTEIRO2_INICIO);// CHEGANDO AQUI ELE FAZ UMA COPIA DA  (NOVO_STRUCT novo) ONDE A RECEBE ESSE VALOR DESSE NUMERO PARA APAGAR
                VER_VALOR_paraAPAGAR(*PONTEIRO2_INICIO)->valor_numero;// VER_VALOR_paraAPAGAR VAI RECEBER O VALOR DO NUMERO INICIO NESSE CASO ELE VAI RECEBER O PROXIMO NUMERO DE INICIO QUE INICIO ESTA APONTANDO PARA O PROXIMO
                (*PONTEIRO2_INICIO) = (*PONTEIRO2_INICIO) -> proximo; // AQUI ELES DOIS ESTA APONTANDO PARA O PROXIMO NUMERO DA STRUCT

                    if((PONTEIRO2_INICIO)!= NULL) // AQUI ELE FAZ A CHEGAGEM SE O NUMERO DO PONTEIRO2_INICIO E NULO
                    {
                        (*PONTEIRO2_INICIO) =NULL);// CASO SE FOR NULO ELE ADICIONA O PRIMEIRO PONTEIRO COMO NULO
                    }
                        if
                        {
                            printf("O NOVO ENDERECO DO PONTEIRO (NOVO_STRUCT novo) APONTADO PELO PONTEIRO--> *PONTEIRO2_INICIO = %d\n",*PONTEIRO2_INICIO);
                            printf("O NOVO VALOR (NOVO_STRUCT novo) APONTADO PELO PONTEIRO--> *PONTEIRO2_INICIO = %d\n",(*PONTEIRO2_INICIO)->valor_numero)
                            printf("O NOVO VALOR --> PR�XIMO <-- (NOVO_STRUCT novo) APONTADO PELO PONTEIRO--> *PONTEIRO2_INICIO = %d\n",(*PONTEIRO2_INICIO)->proximo);
                        }
                free(PONTEITO_NOVO_EXCLUIDO);// AQUI ELE VAI APAGAR ESSE VALOR_NUMERIO QUE ELE TINHA NO INICIO DA PILHA (*PONTEIRO2_INICIO) DA MINHA STRUCT
             }
             return0;
    }


#endif // TAD_FILA_H_INCLUDED