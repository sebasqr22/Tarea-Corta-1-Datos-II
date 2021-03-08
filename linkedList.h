class lista{
    private:
        typedef struct nodo{
            int num;
            nodo* siguiente;
        }* ptrNode;

        ptrNode primero;
        ptrNode actual;
        ptrNode temp;

    public:
        lista();
        void Insertar(int nuevoNum);
        void Eliminar(int delNum);
        void ImprimirLista();
};