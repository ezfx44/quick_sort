#pragma once
template <typename Iterator>
void quick_sort(Iterator start, Iterator end)
{
	Iterator sub_start = start, sub_end = end - 1;
	auto pivot = *sub_end;
	while (sub_start <= sub_end)
	{
		while (sub_start < end && *sub_start < pivot)
			sub_start++;
		while (sub_end > start && pivot < *sub_end)
			sub_end--;
		if (sub_start <= sub_end)
		{
			std::swap(*sub_start, *sub_end);
			++sub_start;
			--sub_end;
		}
	}
	if (sub_end > start)
		quick_sort(start, sub_end + 1);
	if (end > sub_start)
		quick_sort(sub_start, end);
}