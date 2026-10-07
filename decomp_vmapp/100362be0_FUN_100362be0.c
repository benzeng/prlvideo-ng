
void FUN_100362be0(long param_1,long param_2)

{
  void *pvVar1;
  long lVar2;
  
  FUN_10039e680(param_2,*(undefined8 *)(param_1 + 0xa8));
  if ((*(ushort *)(param_2 + 0xb0) & 0x20) != 0) {
    pvVar1 = *(void **)(param_2 + 0x60);
    if (pvVar1 != (void *)0x0) {
      lVar2 = *(long *)((long)pvVar1 + 0x10);
      *(undefined8 *)(lVar2 + 8) = *(undefined8 *)((long)pvVar1 + 8);
      *(long *)(*(long *)((long)pvVar1 + 8) + 0x10) = lVar2;
      *(void **)((long)pvVar1 + 8) = pvVar1;
      *(void **)((long)pvVar1 + 0x10) = pvVar1;
      FUN_100365cd0(pvVar1,0);
      operator_delete(pvVar1);
    }
    *(undefined8 *)(param_2 + 0x60) = 0;
  }
  return;
}

