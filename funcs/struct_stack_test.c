#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_PILHA 20

typedef struct {
	int pilha[TAMANHO_PILHA];
	int topo;
} Jarro;

void	printPilha(Jarro *p)
{
	int	i = 0;
	i = p->topo-1;
	while(i >= 0)
	{
		printf(" %i\n", p->pilha[i]);
		i--;
	}
}

int	isFull(Jarro *p)
{
	if (p->topo == 20)
		return(1);
	else if (p->topo >= 0 && p->topo < 20)
		return(0);
	else
		return (-1);
}

int     isEmpty(Jarro *p)
{
        if (p->topo == 0)
                return(1);
        else if (p->topo >= 0 && p->topo < 20)
                return(0);
        else
                return (-1);
}


void	empilha(int valor, Jarro *p){
	
	//Garante que nao incremente alem do valor maximo da pilha
	if(p->topo < TAMANHO_PILHA)
	{
		//empilhar
	        p->pilha[p->topo] = valor;
        	p->topo++;
	}
	else
	{
		//pilha cheia
		printf("Nao ha mais espaco na pilha");
	}
}

void	desempilha(Jarro *p)
{
	if(p->topo > 0)
	{
		//Desempilhar
		p->topo--;
		printf("O valor %d foi retirado do topo\n", p->pilha[p->topo]);
	}
	else
	{
		//pilha Vazia
		printf("A pilha esta vazia");
	}
}

int	main(int argc, char **argv)
{
	//Define uma pilha
	Jarro	p;
	int	i = argc -1;	
	//seta o topo para a base da pilha
	p.topo = 0;
	//empilha um numero no topo
	while (i >= 1)
	{
		empilha(atoi(argv[i]), &p);
		i--;
	}
	
	//desempilha um numero na lista
	printPilha(&p);
	return (0);
}
