/*
    Пирамидальная сортировка - метод сортировки сравнением, основанный на такой структуре данных как двоичная куча, она похожа на сортировку выбором,
                               где мы сначала ищем максимальный элемент и помещаем его в конец
    Асимптотика: O(nlogn)
*/
void heapify(vector<int> v, int n, int i){
    int largest = i;   
    int l = 2 * i + 1;
    int r = 2 * i + 2;
  
    if (l < n && v[l] > v[largest])
        largest = l;
    if (r < n && v[r] > v[largest])
        largest = r;
    if (largest != i){
        swap(v[i], v[largest]);
        heapify(v, n, largest);
    }
}

void heapsort(vector<int> v, int n){
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(v, n, i);
    for (int i = n - 1; i >= 0; i--){
        swap(v[0], v[i]);
        heapify(v, i, 0);
    }
}
