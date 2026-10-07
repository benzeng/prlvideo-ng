
void FUN_10022ddf2(int *param_1)

{
  long lVar1;
  int local_c;
  
  if (param_1 != (int *)0x0) {
    if (*(long *)(param_1 + 6) != 0) {
      for (local_c = 0; local_c < *param_1; local_c = local_c + 1) {
        lVar1 = *(long *)(*(long *)(param_1 + 6) + (long)local_c * 8);
        if (lVar1 != 0) {
          if (*(long *)(lVar1 + 8) != 0) {
            (*(code *)_xmlFree)(*(undefined8 *)(lVar1 + 8));
          }
          if (*(long *)(lVar1 + 0x10) != 0) {
            (*(code *)_xmlFree)(*(undefined8 *)(lVar1 + 0x10));
          }
          (*(code *)_xmlFree)(lVar1);
        }
      }
      (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 6));
    }
    if (*(long *)(param_1 + 2) != 0) {
      _xmlHashFree(*(xmlHashTablePtr *)(param_1 + 2),(xmlHashDeallocator)0x0);
    }
    (*(code *)_xmlFree)(param_1);
  }
  return;
}

