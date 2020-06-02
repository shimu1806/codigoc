#include <stdio.h>
#include <string.h>
//#include <locale.h>

 class animal
 {
   public:
        int id_animal;
        char nome_animal;
        char cor_animal;
        char tipo_animal;
        int quantidade_patas;
    
        void setId(int id_animal){
            this->id_animal = id_animal;   
        }
   	    void getId(){
   	        printf("%d", id_animal);
   	    }
    
   	    void setNome(char nome[100]){
   	        strcpy(nome_animal, nome);
   	    }
   	    void getNome(){
   	        printf("%s", nome_animal);
   	    }
   	  
   	    
   	    void setCorAnimal(char cor_animal){
   	        strcpy(cor_animal, cor_animal);
   	    }
   	    void getCorAnimal(){
   	        printf("%s", cor_animal);
   	    }
   	    
   	    void setTipoAnimal(char tipo_animal){
   	        strcpy(tipo_animal, tipo_animal);
   	    }
   	    void getTipoAnimal(){
   	        printf("%s", tipo_animal);
   	    }
   	    
   	    void setQuantidadePatas(int quantidade_patas){
   	        this->quantidade_patas = quantidade_patas;
   	    }
   	    void getQuantidadePatas(){
   	        printf("%d", quantidade_patas)
   	    }
   	  
        void comer();
        
        void mover();
        
        void dormir();
};
  
  
class ave : public animal {
   public:
   void comer(){ 
        printf("Bicando..." );
    }
    void mover(){
        printf("Voando..." ); 
        
    }
    
    void dormir(){
        printf("A Ave esta dormindo..." );
    }
      
 };
 
class peixe : public animal{
   public:
      void comer(){
          printf("Mordendo...");
          
      }
      void mover(){
          printf("Nadando..." );
          
      }
      void dormir(){
        printf("O peixe esta dormindo..." );
          
      }
 };

int main()
{
    
    ave passarinho;
    peixe sardinha;
   
    passarinho.setId(1);
    printf("\n***\n");
    passarinho.setNome("João de Barro");
    printf("\n***\n");
    passarinho.setCorAnimal("Marrom");
    printf("\n***\n");
    passarinho.setTipoAnimal("Ave");
    printf("\n***\n");
    passarinho.getQuantidadePatas(2);
    printf("\n\n***\n\n");
    
    pasarinho.getId();
    printf("\n***\n");
    passarinho.getNome();
    printf("\n***\n");
    passarinho.getCorAnimal();
    printf("\n***\n");
    passarinho.getTipoAnimal();
    printf("\n***\n");
    passarinho.getQuantidadePatas();
    printf("\n\n***\n\n");
    
    sardinha.setId(1);
    printf("\n***\n");
    sardinha.setNome("Tilápia");
    printf("\n***\n");
    sardinha.setCorAnimal("Vermelho");
    printf("\n***\n");
    sardinha.setTipoAnimal("Peixe");
    printf("\n***\n");
    sardinha.getQuantidadePatas(0);
    printf("\n\n***\n\n");
    
    sardinha.getId();
    printf("\n***\n");
    sardinha.getNome();
    printf("\n***\n");
    sardinha.getCorAnimal();
    printf("\n***\n");
    sardinha.getTipoAnimal();
    printf("\n***\n");
    sardinha.getQuantidadePatas();
    printf("\n\n***\n\n");
    
    return 0;
    
}