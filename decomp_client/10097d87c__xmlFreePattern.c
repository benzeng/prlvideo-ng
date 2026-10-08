
void _xmlFreePattern(void *param_1)

{
  long lVar1;
  undefined4 local_c;
  
  if (param_1 != (void *)0x0) {
    if (*(long *)((long)param_1 + 0x10) != 0) {
      _xmlFreePattern(*(undefined8 *)((long)param_1 + 0x10));
    }
    if (*(long *)((long)param_1 + 0x38) != 0) {
      FUN_100980028(*(undefined8 *)((long)param_1 + 0x38));
    }
    if (*(long *)((long)param_1 + 0x18) != 0) {
      (*(code *)_xmlFree)(*(undefined8 *)((long)param_1 + 0x18));
    }
    if (*(long *)((long)param_1 + 0x30) != 0) {
      if (*(long *)((long)param_1 + 8) == 0) {
        for (local_c = 0; local_c < *(int *)((long)param_1 + 0x24); local_c = local_c + 1) {
          lVar1 = *(long *)((long)param_1 + 0x30) + (long)local_c * 0x18;
          if (*(long *)(lVar1 + 8) != 0) {
            (*(code *)_xmlFree)(*(undefined8 *)(lVar1 + 8));
          }
          if (*(long *)(lVar1 + 0x10) != 0) {
            (*(code *)_xmlFree)(*(undefined8 *)(lVar1 + 0x10));
          }
        }
      }
      (*(code *)_xmlFree)(*(undefined8 *)((long)param_1 + 0x30));
    }
    if (*(long *)((long)param_1 + 8) != 0) {
      _xmlDictFree(*(xmlDictPtr *)((long)param_1 + 8));
    }
    _memset(param_1,-1,0x40);
    (*(code *)_xmlFree)(param_1);
  }
  return;
}

