
void FUN_1001a95cc(int *param_1)

{
  int local_c;
  
  if (param_1 != (int *)0x0) {
    if (*(long *)(param_1 + 2) != 0) {
      for (local_c = 0; local_c < *param_1; local_c = local_c + 1) {
        if (*(long *)(*(long *)(param_1 + 2) + (long)local_c * 8) != 0) {
          if (*(int *)(*(long *)(*(long *)(param_1 + 2) + (long)local_c * 8) + 8) == 0x12) {
            _xmlXPathNodeSetFreeNs(*(undefined8 *)(*(long *)(param_1 + 2) + (long)local_c * 8));
          }
          else {
            _xmlFreeNodeList(*(xmlNodePtr *)(*(long *)(param_1 + 2) + (long)local_c * 8));
          }
        }
      }
      (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 2));
    }
    (*(code *)_xmlFree)(param_1);
  }
  return;
}

