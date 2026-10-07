
void FUN_1002a3830(char param_1)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  long lVar10;
  uint uVar11;
  byte bVar12;
  bool bVar13;
  
  lVar3 = *(long *)(DAT_1011c3698 + 0x1938);
  uVar11 = 0;
  bVar12 = 0;
  if (*(int *)(lVar3 + 0xa0b0) != 0) {
    lVar10 = lVar3 + 0xa000;
    bVar12 = 0;
    do {
      bVar6 = FUN_1002a3f70(lVar10);
      bVar12 = bVar6 | bVar12;
      if (((uVar11 == 0) && (((bVar12 ^ 1) & 1) == 0)) &&
         (plVar4 = *(long **)(lVar3 + 0xa000), plVar4 != (long *)0x0)) {
        lVar5 = *(long *)(DAT_1011c3698 + 0x1938);
        bVar6 = *(byte *)(lVar5 + 0xc0d8);
        iVar7 = (**(code **)(*plVar4 + 0x10))(plVar4);
        iVar8 = (**(code **)(*plVar4 + 8))(plVar4);
        if (iVar8 == 0) {
          bVar9 = iVar7 != 0 | 0x40;
        }
        else {
          bVar9 = iVar7 != 0 | 0x42;
        }
        *(byte *)(lVar5 + 0xc0d8) = (bVar6 ^ bVar9) * '\x02' & 4 | bVar9;
      }
      uVar11 = uVar11 + 1;
      lVar10 = lVar10 + 0xb0;
    } while (uVar11 < *(uint *)(lVar3 + 0xa0b0));
  }
  if (((bVar12 & 1) == 0) && (param_1 == '\0')) {
    return;
  }
  lVar3 = *(long *)(DAT_1011c3698 + 0x1938);
  uVar11 = *(uint *)(lVar3 + 0xa0bc);
  do {
    puVar1 = (uint *)(lVar3 + 0xa0bc);
    LOCK();
    uVar2 = *puVar1;
    bVar13 = uVar11 == uVar2;
    if (bVar13) {
      *puVar1 = uVar11 | 4;
      uVar2 = uVar11;
    }
    uVar11 = uVar2;
    UNLOCK();
  } while (!bVar13);
  FUN_1000acd00(DAT_1011c3698,0x400000,1,1);
  return;
}

