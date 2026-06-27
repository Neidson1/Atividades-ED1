#ifndef PERSONAGEM_H
#define PERSONAGEM_H

typedef struct personagem Personagem;

/* Cria a equipe com quantidade definida de membros */
Personagem* cria_party(int num_membros);

/* Lê os dados dos personagens */
void registra_membros(Personagem* party, int num_membros);

/* Exibe os dados da equipe */
void exibe_relatorio(const Personagem* party, int num_membros);

/* Libera a memória da equipe */
void libera_party(Personagem* party);

#endif
