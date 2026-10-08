
void _xmlXPathNodeSetRemove(int *param_1,int param_2)

{
  int local_14;
  
  if ((param_1 != (int *)0x0) && (param_2 < *param_1)) {
    if ((*(long *)(*(long *)(param_1 + 2) + (long)param_2 * 8) != 0) &&
       (*(int *)(*(long *)(*(long *)(param_1 + 2) + (long)param_2 * 8) + 8) == 0x12)) {
      _xmlXPathNodeSetFreeNs(*(undefined8 *)(*(long *)(param_1 + 2) + (long)param_2 * 8));
    }
    *param_1 = *param_1 + -1;
    for (local_14 = param_2; local_14 < *param_1; local_14 = local_14 + 1) {
      *(undefined8 *)(*(long *)(param_1 + 2) + (long)local_14 * 8) =
           *(undefined8 *)(*(long *)(param_1 + 2) + (long)local_14 * 8 + 8);
    }
    *(undefined8 *)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = 0;
  }
  return;
}

