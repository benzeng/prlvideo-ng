
undefined8 FUN_1003be8d0(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar2 = FUN_1003be480(*(undefined8 *)(param_1 + 0x10));
  cVar1 = FUN_1001248a0(uVar2);
  if (cVar1 == '\0') {
    uVar4 = 0;
  }
  else {
    lVar3 = FUN_1003b0a60(*(undefined8 *)(*(long *)(param_1 + 0x10) + 8));
    if (lVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_1003b0a60(*(undefined8 *)(*(long *)(param_1 + 0x10) + 8));
      uVar4 = FUN_1001754c0(uVar4,0x18);
    }
  }
  return uVar4;
}

