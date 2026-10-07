
void FUN_1002a47a0(undefined8 param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  bool bVar5;
  
  if (param_2 == 1) {
    lVar3 = *(long *)(DAT_1011c3698 + 0x1938);
    uVar4 = *(uint *)(lVar3 + 0xa0bc);
    do {
      puVar1 = (uint *)(lVar3 + 0xa0bc);
      LOCK();
      uVar2 = *puVar1;
      bVar5 = uVar4 == uVar2;
      if (bVar5) {
        *puVar1 = uVar4 | 2;
        uVar2 = uVar4;
      }
      uVar4 = uVar2;
      UNLOCK();
    } while (!bVar5);
  }
  else {
    if (param_2 != 0) {
      return;
    }
    lVar3 = *(long *)(DAT_1011c3698 + 0x1938);
    uVar4 = *(uint *)(lVar3 + 0xa0bc);
    do {
      puVar1 = (uint *)(lVar3 + 0xa0bc);
      LOCK();
      uVar2 = *puVar1;
      bVar5 = uVar4 == uVar2;
      if (bVar5) {
        *puVar1 = uVar4 | 1;
        uVar2 = uVar4;
      }
      uVar4 = uVar2;
      UNLOCK();
    } while (!bVar5);
  }
  FUN_1000acd00(DAT_1011c3698,0x400000,1,1);
  return;
}

