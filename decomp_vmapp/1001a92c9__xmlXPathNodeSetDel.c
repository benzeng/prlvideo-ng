
void _xmlXPathNodeSetDel(int *param_1,long param_2)

{
  int local_c;
  
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    local_c = 0;
    while ((local_c < *param_1 && (*(long *)(*(long *)(param_1 + 2) + (long)local_c * 8) != param_2)
           )) {
      local_c = local_c + 1;
    }
    if (local_c < *param_1) {
      if ((*(long *)(*(long *)(param_1 + 2) + (long)local_c * 8) != 0) &&
         (*(int *)(*(long *)(*(long *)(param_1 + 2) + (long)local_c * 8) + 8) == 0x12)) {
        _xmlXPathNodeSetFreeNs(*(undefined8 *)(*(long *)(param_1 + 2) + (long)local_c * 8));
      }
      *param_1 = *param_1 + -1;
      for (; local_c < *param_1; local_c = local_c + 1) {
        *(undefined8 *)(*(long *)(param_1 + 2) + (long)local_c * 8) =
             *(undefined8 *)(*(long *)(param_1 + 2) + (long)local_c * 8 + 8);
      }
      *(undefined8 *)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = 0;
    }
  }
  return;
}

