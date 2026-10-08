
void _xmlXPtrFreeLocationSet(int *param_1)

{
  int local_c;
  
  if (param_1 != (int *)0x0) {
    if (*(long *)(param_1 + 2) != 0) {
      for (local_c = 0; local_c < *param_1; local_c = local_c + 1) {
        _xmlXPathFreeObject(*(xmlXPathObjectPtr *)(*(long *)(param_1 + 2) + (long)local_c * 8));
      }
      (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 2));
    }
    (*(code *)_xmlFree)(param_1);
  }
  return;
}

