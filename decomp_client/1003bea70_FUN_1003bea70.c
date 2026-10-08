
ulong FUN_1003bea70(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  lVar2 = FUN_1003b0a60(*(undefined8 *)(*(long *)(param_1 + 0x10) + 8));
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = FUN_1003b0a60(*(undefined8 *)(*(long *)(param_1 + 0x10) + 8));
    cVar1 = FUN_1001754c0(uVar3,0x16);
    if (cVar1 == '\0') {
      uVar4 = 0;
    }
    else {
      lVar2 = FUN_1003b0a30(*(undefined8 *)(*(long *)(param_1 + 0x10) + 8));
      if (lVar2 == 0) {
        uVar4 = 0;
      }
      else {
        uVar3 = FUN_1003b0a30(*(undefined8 *)(*(long *)(param_1 + 0x10) + 8));
        uVar3 = FUN_10018c2b0(uVar3);
        uVar4 = FUN_100112cc0(uVar3);
        uVar4 = uVar4 ^ 1;
      }
    }
  }
  return uVar4;
}

