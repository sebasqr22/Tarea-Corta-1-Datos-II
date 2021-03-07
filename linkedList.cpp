class LinkedList{
    private:
        typedef struct nodo{
            int num;
            nodo* next;
        }* ptrNode;

        ptrNode primero;
        ptrNode actual;
        ptrNode temp;

    public:
        LinkedList();
        void Insertar(int nuevoNum);
        void Eliminar(int delNum);
        void ImprimirLista();
};