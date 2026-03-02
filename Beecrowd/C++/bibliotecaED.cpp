stack <int> aula

< stack >
aula.push(x)    //insere o elemento x no topo da pilha.
aula.pop()      //remove o elemento do topo.
aula.top()		//retorna o elemento do topo.
aula.empty() 	//retorna 1 se a pilha estiver vazia.
aula.size()		//retorna a quantidade de elementos.
aula.emplace(x) //constroi o objeto direto na memoria.


queue <int> aula

< queue >
aula.push(x)	//insere o elemento x no final da fila.
aula.pop() 		//remove o elemento do inicio da fila.
aula.front()	//retorna o elemento da frente(primeiro) da fila.
aula.back()		//retorna o ultimo elemento da fila.
aula.empty() 	//retorna 1 se a fila estiver vazia.
aula.size()		//retorna a quantidade de elementos.


list <int> aula

< list >
aula.push_front(x)	//adiciona x no inicio da lista.
aula.push_back(x)	//adiciona x no final da lista.
aula.pop_front()	//remove o primeiro elemento.
aula.pop_back()		//remove o ultimo elemento.
aula.insert(it, x)  //insere x na posicao do iterador x.
aula.erase(it)		//remove o elemento na posicao do iterador it.
aula.clear()		//remove todos os elementos da lista.


//o it eh como se fosse um ponteiro em C
//assim eh a declaracao
list<int>::iterator it;

//ou seja, ao inves de fazer No *atual = lista->inicio voce faz
it = aula.begin();


