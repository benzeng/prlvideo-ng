
undefined1 FUN_1000956f0(long param_1)

{
  undefined1 uVar1;
  void *pvVar2;
  
  if (*(int *)(param_1 + 0x584) - 1U < 2) {
    uVar1 = FUN_1002893b0();
  }
  else {
    uVar1 = 1;
    if (*(int *)(param_1 + 0x584) == 0) {
      pvVar2 = operator_new(0x80);
      FUN_10027f320(pvVar2);
      *(void **)(param_1 + 0x1988) = pvVar2;
    }
  }
  return uVar1;
}

