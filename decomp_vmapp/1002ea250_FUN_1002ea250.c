
void FUN_1002ea250(long param_1,long param_2,undefined8 param_3)

{
  void *pvVar1;
  uint uVar2;
  
  uVar2 = (*(ushort *)(param_2 + 3) & 0xfff) - 0x10;
  if (uVar2 < 0x20) {
    pvVar1 = *(void **)(param_1 + 0x68 + (ulong)uVar2 * 8);
    if (pvVar1 != (void *)0x0) {
      FUN_1002ec910(pvVar1);
      operator_delete(pvVar1);
      *(undefined8 *)(param_1 + 0x68 + (ulong)uVar2 * 8) = 0;
    }
  }
  FUN_1002ea2d0(param_1,param_2,param_3);
  return;
}

