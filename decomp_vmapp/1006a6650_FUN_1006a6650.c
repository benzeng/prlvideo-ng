
void FUN_1006a6650(undefined8 param_1,long param_2,long param_3,long param_4)

{
  void *pvVar1;
  long lVar2;
  
  if (param_2 - param_3 != 0) {
    lVar2 = 0;
    do {
      pvVar1 = operator_new(0x40);
      FUN_1006a6720(pvVar1,*(undefined8 *)(param_4 + lVar2));
      *(void **)(param_2 + lVar2) = pvVar1;
      lVar2 = lVar2 + 8;
    } while ((param_2 - param_3) + lVar2 != 0);
  }
  return;
}

