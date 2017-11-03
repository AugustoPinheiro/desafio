#include <bits/stdc++.h>
using namespace std;

// Uma pilha definida pelo usuário que suporta getMin()
// adição para push() e pop ()
struct Pilhas
{
 stack<int> voxus;
	int minEle;

// Imprime elemento mínimo da Pilha
	void getMin()
	{
		if (voxus.empty())
			cout << "Pila atual vazia\n";

	// minEle variável armazena o elemento mínimo
// na pilha.
		else
			cout <<"Elemento mínimo na pilha é: "
				<< minEle << "\n";
	}

// Imprime o elemento "top" na Pilha	
void peek()
	{
		if (voxus.empty())
		{
			cout << "Pilha Vazia ";
			return;
		}

		int t = voxus.top(); // Elemento "TOP"

		cout << "Elemento do Top é: ";

	// Se t <minEle significa que minEle armazena 
    // valor de t.
		(t < minEle)? cout << minEle: cout << t;
	}

// Remova o elemento superior (top) da pilha
void pop()
	{
		if (voxus.empty())
		{
			cout << "Pilha vazia\n";
			return;
		}

		cout << "Top elemento removido: ";
		int t = voxus.top();
		voxus.pop();


		if (t < minEle)
		{
			cout << minEle << "\n";
			minEle = 2*minEle - t;
		}

		else
			cout << t << "\n";
	}

	// Remover elemento "top" da pilha
	void push(int x)
	{
		// inserindo um novo numero na pilha
		if (voxus.empty())
		{
			minEle = x;
			voxus.push(x);
			cout << "Numero inserido: " << x << "\n";
			return;
		}

		// Se o novo número for menor que minEle
		if (x < minEle)
		{
			voxus.push(2*x - minEle);
			minEle = x;
		}

		else
		voxus.push(x);

		cout << "Numero inserido: " << x << "\n";
	}
};

int main()
{
	Pilhas voxus;
	voxus.push(3);
	voxus.push(5);
	voxus.getMin();
	voxus.push(2);
	voxus.push(1);
	voxus.getMin();
	voxus.pop();
	voxus.getMin();
	voxus.pop();
	voxus.peek();

	return 0;
}
