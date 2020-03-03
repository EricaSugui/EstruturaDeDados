#define MAX 50

typedef int TIPOCHAVE;

typedef struct {
	TIPOCHAVE chave;
	REGISTRO;
}
typedef struct {
	REGISTRO A[MAX];
	int nroElem;
} LISTA;

void inicializarLista(LISTA* 1)
{
	l->nroElem = 0;
}

void exibirLista(LISTA* 1) 
{
	int i;
	prinf("Lista: \" ");
	for (i = 0; i < l->nroElem; i++)
		printf("%i ", l->A[i].chave);
	printf("\"\n");
}

int buscaSequencial(LISTA* 1, TIPOCHAVE ch)
{
	int i = 0;
	while (i< l->nroElem)
	{
		if(ch == l->A[i].chave)
			return i;
		else
			i++;
	}
	return -1;
}

bool inserirElemLista (LISTA * 1, REGISTRO reg, int i) 
{
	int j;
	if (l->nroElem == MAX) || (i < 0) || (i > l->nroElem))
		return false;
	for (j = l->nroElem; j >i; j--) l->A[j] = l->A[j-1];
	l->A[i] = reg;
	l->nroElem++;
	return true;
}

bool excluirElemLista(TIPOCHAVE ch, LISTA * 1) 
{
	int pos, j;
	pos = buscaSequencial(l, ch);
	if (pos == -1)
		return false;
	for (j = pos; j < l->nroElem-1; j++)
		l->A[j] = l->A[j+1];
	l->nroElem--;
	return true;
}

void reinicializarLista(LISTA *1)
{
	l->nroelem = 0;
}
