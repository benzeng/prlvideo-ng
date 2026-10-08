
void FUN_1009421ee(long param_1)

{
  void *pvVar1;
  undefined4 local_14;
  
  if (*(int *)(param_1 + 0x118) != 0) {
    for (local_14 = 0; local_14 < *(int *)(param_1 + 0x118); local_14 = local_14 + 1) {
      pvVar1 = *(void **)(*(long *)(param_1 + 0x110) + (long)local_14 * 8);
      if ((*(uint *)((long)pvVar1 + 0x40) & 1) != 0) {
        if (*(long *)((long)pvVar1 + 0x18) != 0) {
          (*(code *)_xmlFree)(*(undefined8 *)((long)pvVar1 + 0x18));
        }
        if (*(long *)((long)pvVar1 + 0x20) != 0) {
          (*(code *)_xmlFree)(*(undefined8 *)((long)pvVar1 + 0x20));
        }
      }
      if (((*(uint *)((long)pvVar1 + 0x40) >> 1 & 1) != 0) && (*(long *)((long)pvVar1 + 0x28) != 0))
      {
        (*(code *)_xmlFree)(*(undefined8 *)((long)pvVar1 + 0x28));
      }
      if (*(long *)((long)pvVar1 + 0x30) != 0) {
        _xmlSchemaFreeValue(*(undefined8 *)((long)pvVar1 + 0x30));
        *(undefined8 *)((long)pvVar1 + 0x30) = 0;
      }
      _memset(pvVar1,0,0x70);
    }
    *(undefined4 *)(param_1 + 0x118) = 0;
  }
  return;
}

