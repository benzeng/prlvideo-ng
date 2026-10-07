
void FUN_1002a4820(undefined4 param_1)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  bool bVar5;
  
  *(undefined4 *)(*(long *)(DAT_1011c3698 + 0x1938) + 0xa0b4) = param_1;
  lVar3 = *(long *)(DAT_1011c3698 + 0x1938);
  uVar4 = *(uint *)(lVar3 + 0xa0bc);
  do {
    puVar1 = (uint *)(lVar3 + 0xa0bc);
    LOCK();
    uVar2 = *puVar1;
    bVar5 = uVar4 == uVar2;
    if (bVar5) {
      *puVar1 = uVar4 | 8;
      uVar2 = uVar4;
    }
    uVar4 = uVar2;
    UNLOCK();
  } while (!bVar5);
  FUN_1000acd00(DAT_1011c3698,0x400000,1,1);
  return;
}

