
int * _xmlXPathDistinct(int *param_1)

{
  int *local_18;
  
  local_18 = param_1;
  if (((param_1 != (int *)0x0) && (*param_1 != 0)) && (*(long *)(param_1 + 2) != 0)) {
    _xmlXPathNodeSetSort(param_1);
    local_18 = (int *)_xmlXPathDistinctSorted(param_1);
  }
  return local_18;
}

