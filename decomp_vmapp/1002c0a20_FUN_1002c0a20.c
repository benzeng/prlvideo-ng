
void FUN_1002c0a20(void)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  bool bVar5;
  
  if (DAT_1011c5678 == 0) {
    FUN_1008e3970("","USB",0,"USB disk is ready to boot");
    DAT_1011c5678 = 1;
    lVar3 = *(long *)(DAT_1011c3698 + 0x1938);
    uVar4 = *(uint *)(lVar3 + 0x202c);
    do {
      puVar1 = (uint *)(lVar3 + 0x202c);
      LOCK();
      uVar2 = *puVar1;
      bVar5 = uVar4 == uVar2;
      if (bVar5) {
        *puVar1 = uVar4 | 0x80;
        uVar2 = uVar4;
      }
      uVar4 = uVar2;
      UNLOCK();
    } while (!bVar5);
  }
  return;
}

