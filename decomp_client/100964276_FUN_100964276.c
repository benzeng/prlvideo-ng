
void FUN_100964276(long param_1,int param_2)

{
  long lVar1;
  undefined4 local_14;
  
  for (local_14 = param_2; local_14 < *(int *)(param_1 + 0x50); local_14 = local_14 + 1) {
    lVar1 = *(long *)(param_1 + 0x58) + (long)local_14 * 0x28;
    if ((*(uint *)(lVar1 + 4) & 1) != 0) {
      if (*(long *)(lVar1 + 0x18) != 0) {
        (*(code *)_xmlFree)(*(undefined8 *)(lVar1 + 0x18));
      }
      *(undefined8 *)(lVar1 + 0x18) = 0;
      if (*(long *)(lVar1 + 0x20) != 0) {
        (*(code *)_xmlFree)(*(undefined8 *)(lVar1 + 0x20));
      }
      *(undefined8 *)(lVar1 + 0x20) = 0;
      *(undefined4 *)(lVar1 + 4) = 0;
    }
  }
  *(int *)(param_1 + 0x50) = param_2;
  if (*(int *)(param_1 + 0x50) < 1) {
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  return;
}

