
ushort FUN_1002cc020(long param_1,uint param_2)

{
  int *piVar1;
  long *plVar2;
  byte bVar3;
  int iVar4;
  byte bVar5;
  long lVar6;
  ushort uVar7;
  byte bVar8;
  bool bVar9;
  
  uVar7 = 0;
  bVar8 = (param_2 & 1) != 0;
  if ((bool)bVar8) {
    uVar7 = *(ushort *)(*(long *)(param_1 + 0x40) + 0x2004) & 1;
  }
  if (((param_2 & 0x10) != 0) &&
     (bVar8 = bVar8 | 2, (*(byte *)(*(long *)(param_1 + 0x40) + 0x2004) & 1) != 0)) {
    uVar7 = 1;
  }
  if (((param_2 & 2) != 0) &&
     (bVar8 = bVar8 | 4, (*(byte *)(*(long *)(param_1 + 0x40) + 0x2004) & 2) != 0)) {
    uVar7 = 1;
  }
  if (((param_2 & 4) != 0) &&
     (bVar8 = bVar8 | 1, (*(byte *)(*(long *)(param_1 + 0x40) + 0x2004) & 4) != 0)) {
    uVar7 = 1;
  }
  if ((param_2 & 8) == 0) {
    lVar6 = *(long *)(param_1 + 0x40);
  }
  else {
    bVar8 = bVar8 | 1;
    lVar6 = *(long *)(param_1 + 0x40);
    if ((*(byte *)(lVar6 + 0x2004) & 8) != 0) {
      bVar5 = *(byte *)(lVar6 + 0x2002);
      do {
        LOCK();
        bVar3 = *(byte *)(lVar6 + 0x2002);
        bVar9 = bVar5 == bVar3;
        if (bVar9) {
          *(byte *)(lVar6 + 0x2002) = bVar8 | bVar5;
          bVar3 = bVar5;
        }
        bVar5 = bVar3;
        UNLOCK();
      } while (!bVar9);
      uVar7 = 1;
      goto LAB_1002cc0ff;
    }
  }
  bVar5 = *(byte *)(lVar6 + 0x2002);
  do {
    LOCK();
    bVar3 = *(byte *)(lVar6 + 0x2002);
    bVar9 = bVar5 == bVar3;
    if (bVar9) {
      *(byte *)(lVar6 + 0x2002) = bVar8 | bVar5;
      bVar3 = bVar5;
    }
    bVar5 = bVar3;
    UNLOCK();
  } while (!bVar9);
  if (uVar7 == 0) {
    return 0;
  }
LAB_1002cc0ff:
  if (*(int *)(*(long *)(param_1 + 0x40) + 0x2028) == 0) {
    LOCK();
    piVar1 = (int *)(*(long *)(param_1 + 0x40) + 0x2028);
    iVar4 = *piVar1;
    *piVar1 = 1;
    UNLOCK();
    if (iVar4 == 0) {
      if (2 < DAT_1011c568c) {
        FUN_1008e3970("","USB",0,"[UHC] Set Interrupt 0x%X");
      }
      plVar2 = (long *)(*(long *)(param_1 + 0x14b0) + 0xf0);
      *plVar2 = *plVar2 + 1;
      FUN_1002effe0(*(undefined8 *)(param_1 + 0x1498));
    }
  }
  return uVar7;
}

