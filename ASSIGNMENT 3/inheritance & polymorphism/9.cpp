// q.9Write a Program of Two 1D Matrix Addition using Operator Overloading

#include <iostream>
using namespace std;

class Matrix
{
private:
    int size;
    int *data;

public:
    Matrix(int s)
    {
        size = s;
        data = new int[size];
    }

    ~Matrix()
    {
        delete[] data;
    }

    void input()
    {
        cout << "Enter " << size << " elements: ";
        for (int i = 0; i < size; i++)
        {
            cin >> data[i];
        }
    }

    void display()
    {
        for (int i = 0; i < size; i++)
        {
            cout << data[i] << " ";
        }
        cout << endl;
    }

    Matrix operator+(const Matrix &other)
    {
        Matrix result(size);
        for (int i = 0; i < size; i++)
        {
            result.data[i] = this->data[i] + other.data[i];
        }
        return result;
    }
};

int main()
{
    int size;
    cout << "Enter the size of the matrices: ";
    cin >> size;

    Matrix matrix1(size);
    Matrix matrix2(size);

    cout << "Input for Matrix 1:" << endl;
    matrix1.input();
    cout << "Input for Matrix 2:" << endl;
    matrix2.input();

    Matrix result = matrix1 + matrix2;

    cout << "Result of Matrix Addition: ";
    result.display();

    return 0;
}
