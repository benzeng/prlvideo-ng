
undefined8 FUN_1005bc9b0(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_100d80630(1);
  if ((((cVar1 == '\0') && (*(long *)(param_1 + 0x10) != 0)) &&
      (*(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) && (*(long *)(param_1 + 0x18) != 0)) {
    uVar2 = FUN_10015a340();
    cVar1 = FUN_10011e420(uVar2);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}

