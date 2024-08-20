#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "lista.h"

int main(){
    Lista* nova_lista = criar_lista();
    listar(nova_lista);
    nova_lista = inserir_inicio(nova_lista, 12);
    nova_lista = inserir_inicio(nova_lista, 13);
    nova_lista = inserir_inicio(nova_lista, 22);
    listar(nova_lista);// 22, 13, 12
    nova_lista = inserir_final(nova_lista, 11);
    nova_lista = inserir_final(nova_lista, 9);
    listar(nova_lista);// 22, 13, 12, 11, 9
    nova_lista = remover_inicio(nova_lista);
    listar(nova_lista);// 13, 12, 11, 9 
    nova_lista = remover_final(nova_lista);
    listar(nova_lista);// 13, 12, 11
    nova_lista = remover_elemento(nova_lista, 12);
    listar(nova_lista); // 13, 11

    Lista* list = criar_lista();
    list = inserir_inicio(list, 1);
    list = inserir_final(list, 18);
    listar(list);
    list = buscar(list, 1);
    if(list == NULL){
        printf("\n\nValor não encontrado!");
    } else{
        printf("\n\nValor %d encontrado!", list->info);
    }
    
    printf("\n\n");
    liberar(nova_lista);
    liberar(list);
    return 0;
}