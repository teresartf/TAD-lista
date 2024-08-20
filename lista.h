#ifndef LISTA_H
#define LISTA_H

struct lista {
    int info;
    struct lista* prox;
};

typedef struct lista Lista;

Lista* criar_lista();
Lista* inserir_inicio(Lista* lista, int i);
void listar(Lista* lista);
int lista_vazia(Lista* lista);
Lista* buscar(Lista* lista, int i);
Lista* remover_elemento(Lista* lista, int i);
Lista* liberar(Lista* lista);
Lista* remover_inicio(Lista* lista);
Lista* inserir_final(Lista* lista, int i);
Lista* remover_final(Lista* lista);

#endif 