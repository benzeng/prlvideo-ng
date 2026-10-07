
undefined8 FUN_1005f67d0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x58);
  lVar3 = *(long *)(lVar1 + 0x1128);
  if (lVar3 != *(long *)(lVar1 + 0x1130)) {
    do {
      uVar2 = FUN_1005faa70(param_1,lVar3);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      lVar3 = lVar3 + 8;
    } while (lVar3 != *(long *)(lVar1 + 0x1130));
  }
  return 0;
}

