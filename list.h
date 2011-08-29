typedef struct lista Lista;

/*
 * Aloca dinamicamente a estrutura lista, inicializando seus
 * campos e retorna seu ponteiro. A lista depois de criada
 * terá tamanho igual a zero.
 */
Lista* criar(void);

/*
 * Insere o elemento e no final da lista l, desde que,
 * a lista não esteja cheia.
 */
void inserir(Lista* l, int e);

/*
 * Remove o elemento e da lista l,
 * desde que a lista não esteja vazia e o elemento
 * e esteja na lista. A função retorna 0 se o elemento 
 * não for encontrado na lista ou 1 caso contrário.
 */
 int remover(Lista* l, int e);

/**
 * Pesquisa na lista l o elemento e. A função retorna 
 * o endereço(índice) do elemento se ele pertencer a lista
 * ou -1 caso contrário.
 */
int pesquisar(Lista* l, int e);

/* 
 * Apresenta os elementos da lista l. 
 */
void imprimir(Lista* l);

/*
 * Informa se a lista l está ou não vazia.
 */
int empty(Lista* l);

/*
 * Destrói a lista l, e assim libera toda a memória
 * usada pela estrutura.
 */
void destroy(Lista* l);
