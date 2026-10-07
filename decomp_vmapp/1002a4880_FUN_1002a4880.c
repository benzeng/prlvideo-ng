
void FUN_1002a4880(undefined4 param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  bool bVar4;
  
  lVar2 = *(long *)(DAT_1011c3698 + 0x1938);
  *(undefined4 *)(lVar2 + 0xa0b8) = param_1;
  uVar3 = *(uint *)(lVar2 + 0xa0bc);
  do {
    LOCK();
    uVar1 = *(uint *)(lVar2 + 0xa0bc);
    bVar4 = uVar3 == uVar1;
    if (bVar4) {
      *(uint *)(lVar2 + 0xa0bc) = uVar3 | 0x10;
      uVar1 = uVar3;
    }
    uVar3 = uVar1;
    UNLOCK();
  } while (!bVar4);
  FUN_1000acd00(DAT_1011c3698,0x400000,1,1);
  return;
}

