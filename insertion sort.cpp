/*
    Сортировка вставками - просматриваем элементы входного массива и каждый новый элемент размещаем в "подходящее" место
    Асимптотика: O(nk) (в худшем случае O(n^2))
*/
void insertion_sort(vector<int> v, int n) {
    for (int k = 1; k < n; k++)
        for (int i = k; i > 0 && v[i - 1] < v[i]; i--)
            swap(v[i], v[i - 1]);
}
