
undefined8 FUN_1002cc460(long param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  bool bVar8;
  
  uVar5 = 0;
  if ((param_2 & 0x10) != 0) {
    plVar7 = (long *)(*(long *)(param_1 + 0x24d0) + 0xf0);
    *plVar7 = *plVar7 + 1;
    uVar5 = 4;
  }
  if ((param_2 & 2) != 0) {
    uVar5 = uVar5 | 1;
    plVar7 = (long *)(*(long *)(param_1 + 0x24d8) + 0xf0);
    *plVar7 = *plVar7 + 1;
  }
  if ((param_2 & 8) != 0) {
    uVar5 = uVar5 | 2;
    plVar7 = (long *)(*(long *)(param_1 + 0x24e0) + 0xf0);
    *plVar7 = *plVar7 + 1;
  }
  if ((param_2 & 0x20) != 0) {
    uVar5 = uVar5 | 8;
    plVar7 = (long *)(*(long *)(param_1 + 0x24f0) + 0xf0);
    *plVar7 = *plVar7 + 1;
  }
  if (((param_2 & 1) != 0) &&
     (lVar6 = *(long *)(param_1 + 0x40), (*(byte *)(lVar6 + 0x1020) & 0x40) != 0)) {
    uVar4 = *(uint *)(lVar6 + 0x1020);
    do {
      LOCK();
      uVar2 = *(uint *)(lVar6 + 0x1020);
      bVar8 = uVar4 == uVar2;
      if (bVar8) {
        *(uint *)(lVar6 + 0x1020) = uVar4 & 0xffffffbf;
        uVar2 = uVar4;
      }
      uVar4 = uVar2;
      UNLOCK();
    } while (!bVar8);
    if ((uVar4 & 0x40) != 0) {
      uVar5 = uVar5 | 0x20;
      plVar7 = (long *)(*(long *)(param_1 + 0x24e8) + 0xf0);
      *plVar7 = *plVar7 + 1;
      goto LAB_1002cc51e;
    }
  }
  if (uVar5 == 0) {
    return 1;
  }
LAB_1002cc51e:
  plVar7 = (long *)(param_1 + 0x40);
  lVar6 = *plVar7;
  uVar4 = *(uint *)(lVar6 + 0x1024);
  do {
    puVar1 = (uint *)(lVar6 + 0x1024);
    LOCK();
    uVar2 = *puVar1;
    bVar8 = uVar4 == uVar2;
    if (bVar8) {
      *puVar1 = uVar5 | uVar4;
      uVar2 = uVar4;
    }
    uVar4 = uVar2;
    UNLOCK();
  } while (!bVar8);
  lVar6 = *plVar7;
  if ((*(uint *)(lVar6 + 0x1024) & *(uint *)(lVar6 + 0x1028)) != 0) {
    if (2 < DAT_1011c568c) {
      FUN_1008e3970("","USB",0,"[EHC] SetInterrupt(0x%X) INTR %04X, STS %04X",param_2,
                    *(uint *)(lVar6 + 0x1028),*(uint *)(lVar6 + 0x1024));
      lVar6 = *plVar7;
    }
    LOCK();
    iVar3 = *(int *)(lVar6 + 0x2024);
    *(int *)(lVar6 + 0x2024) = 1;
    UNLOCK();
    if (iVar3 == 0) {
      plVar7 = (long *)(*(long *)(param_1 + 0x14b0) + 0xf0);
      *plVar7 = *plVar7 + 1;
      FUN_1002effe0(*(undefined8 *)(param_1 + 0x1498));
    }
  }
  return 1;
}

