
undefined8 FUN_10076b500(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x20);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else if (*(int *)(lVar1 + 4) == 0) {
    uVar2 = 0;
  }
  else if (*(long *)(*(long *)(param_1 + 0x10) + 0x28) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_100769bf0();
  }
  return uVar2;
}

