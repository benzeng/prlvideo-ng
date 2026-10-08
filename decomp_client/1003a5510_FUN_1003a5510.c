
void * FUN_1003a5510(long param_1)

{
  long lVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  pvVar2 = *(void **)(param_1 + 0x20);
  if (pvVar2 == (void *)0x0) {
    lVar1 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x18));
    pvVar2 = (void *)0x0;
    if (lVar1 != 0) {
      pvVar2 = operator_new(0x18);
      uVar3 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x18));
      FUN_1001b6720(pvVar2,uVar3,param_1);
    }
    *(void **)(param_1 + 0x20) = pvVar2;
  }
  return pvVar2;
}

