
undefined8 FUN_100284110(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar2 = FUN_10015a340(uVar2);
  cVar1 = FUN_10011e420(uVar2);
  uVar2 = 0x80000009;
  if (cVar1 != '\0') {
    uVar2 = 0;
  }
  return uVar2;
}

