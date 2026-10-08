
undefined8 FUN_1005c3030(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = 0xffffffff;
  if (*(int *)(*(long *)(param_1 + 0x18) + 0x50) != 0) {
    cVar1 = FUN_1005b99e0();
    uVar2 = 6;
    if (cVar1 != '\0') {
      uVar2 = 0x13;
    }
  }
  return uVar2;
}

