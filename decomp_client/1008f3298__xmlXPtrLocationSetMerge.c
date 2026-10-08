
long _xmlXPtrLocationSetMerge(long param_1,int *param_2)

{
  long local_30;
  int local_c;
  
  if (param_1 == 0) {
    local_30 = 0;
  }
  else {
    local_30 = param_1;
    if (param_2 != (int *)0x0) {
      for (local_c = 0; local_c < *param_2; local_c = local_c + 1) {
        _xmlXPtrLocationSetAdd(param_1,*(undefined8 *)(*(long *)(param_2 + 2) + (long)local_c * 8));
      }
    }
  }
  return local_30;
}

