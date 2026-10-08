
long _xmlXPathNewNodeSetList(int *param_1)

{
  long local_18;
  int local_c;
  
  if (param_1 == (int *)0x0) {
    local_18 = 0;
  }
  else if (*(long *)(param_1 + 2) == 0) {
    local_18 = _xmlXPathNewNodeSet(0);
  }
  else {
    local_18 = _xmlXPathNewNodeSet(**(undefined8 **)(param_1 + 2));
    for (local_c = 1; local_c < *param_1; local_c = local_c + 1) {
      _xmlXPathNodeSetAddUnique
                (*(undefined8 *)(local_18 + 8),
                 *(undefined8 *)(*(long *)(param_1 + 2) + (long)local_c * 8));
    }
  }
  return local_18;
}

