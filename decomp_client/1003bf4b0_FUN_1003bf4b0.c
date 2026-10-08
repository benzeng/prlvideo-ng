
undefined8 FUN_1003bf4b0(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  cVar1 = FUN_100d80630(1);
  if (cVar1 == '\0') {
    uVar2 = FUN_1003be3a0(*(undefined8 *)(param_1 + 0x10));
    uVar3 = FUN_1003be480(*(undefined8 *)(param_1 + 0x10));
    uVar4 = FUN_100110a10(uVar2,uVar3);
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

