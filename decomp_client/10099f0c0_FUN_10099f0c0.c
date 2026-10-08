
void FUN_10099f0c0(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  uVar1 = FUN_1009983a0();
  cVar2 = FUN_100990a70(uVar1);
  if (cVar2 != '\0') {
    uVar1 = FUN_1009983c0(param_1);
    cVar2 = FUN_100991af0(uVar1);
    if (cVar2 != '\0') {
      FUN_1009a01a0(param_1);
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x68) = 1;
  FUN_1009a01a0(param_1);
  uVar1 = FUN_1009983c0(param_1);
  FUN_100992840(uVar1);
  return;
}

