
undefined8 FUN_1003be980(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_1003b0a60(*(undefined8 *)(*(long *)(param_1 + 0x10) + 8));
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_1003b0a60(*(undefined8 *)(*(long *)(param_1 + 0x10) + 8));
    cVar1 = FUN_1001754c0(uVar3,0x10);
    if (cVar1 == '\0') {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_1003b0a60(*(undefined8 *)(*(long *)(param_1 + 0x10) + 8));
      uVar3 = FUN_10016f500(uVar3);
      uVar3 = FUN_10061c2b0(uVar3,0x10080);
    }
  }
  return uVar3;
}

