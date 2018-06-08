#pragma once
#ifndef QUICKSORT_H
#define QUICKSORT_H



int partition(int *a, int m, int n)
{
	int i, j, pindex, pivot;
	pindex = m;
	pivot = a[n];
	for (i = m; i<n; i++)
	{
		if (a[i] <= pivot)
		{
			swap(a[pindex], a[i]);
			pindex++;
		}
	}
	swap(a[pindex], a[n]);
	return pindex;
}
void fazerQuickSort(int *a, int m, int n)
{
	int index;
	if (m >= n)
		return;
	else
	{
		index = partition(a, m, n);
		fazerQuickSort(a, m, index - 1);
		fazerQuickSort(a, index + 1, n);
	}
}


#endif 
