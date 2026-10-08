
void FUN_1000e6f20(undefined8 param_1,long param_2,long param_3,long param_4)

{
  void *pvVar1;
  long lVar2;
  
  if (param_2 - param_3 != 0) {
    lVar2 = 0;
    do {
      pvVar1 = operator_new(0xb0);
      FUN_1000e6ff0(pvVar1,*(undefined8 *)(param_4 + lVar2));
      *(void **)(param_2 + lVar2) = pvVar1;
      lVar2 = lVar2 + 8;
    } while ((param_2 - param_3) + lVar2 != 0);
  }
  return;
}

