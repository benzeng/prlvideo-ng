
undefined1 FUN_100ac7220(long param_1,long *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  undefined8 uVar3;
  QArrayData *pQVar4;
  QArrayData *pQVar5;
  ulong uVar6;
  uint *puVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  int iVar15;
  QArrayData *local_40;
  undefined1 local_31;
  
  uVar3 = FUN_1000a9690(param_1 + 0x988);
  lVar14 = *param_2;
  iVar15 = *(int *)(lVar14 + 8);
  iVar8 = *(int *)(lVar14 + 0xc);
  uVar2 = iVar8 - iVar15;
  if (uVar2 == 0 || iVar8 < iVar15) {
    local_40 = (QArrayData *)PTR_shared_null_1021e1288;
    pQVar4 = (QArrayData *)PTR_shared_null_1021e1288;
  }
  else {
    pQVar4 = (QArrayData *)QArrayData::allocate(8,8,(long)(int)uVar2,0);
    local_40 = pQVar4;
    if (pQVar4 == (QArrayData *)0x0) {
      qBadAlloc();
    }
    *(uint *)(pQVar4 + 4) = uVar2;
    ___bzero(pQVar4 + *(long *)(pQVar4 + 0x10),(long)(int)uVar2 << 3);
    lVar14 = *param_2;
    iVar15 = *(int *)(lVar14 + 8);
    iVar8 = *(int *)(lVar14 + 0xc);
  }
  if (1 < *(uint *)pQVar4) {
    if ((*(uint *)(pQVar4 + 8) & 0x7fffffff) == 0) {
      pQVar4 = (QArrayData *)QArrayData::allocate(8,8,0,2);
      local_40 = pQVar4;
    }
    else {
      FUN_1000bed40(&local_40,*(uint *)(pQVar4 + 4),*(uint *)(pQVar4 + 8) & 0x7fffffff,0);
      pQVar4 = local_40;
    }
  }
  if (iVar15 != iVar8) {
    lVar10 = (long)iVar15;
    pQVar5 = pQVar4 + *(long *)(pQVar4 + 0x10);
    uVar13 = ((ulong)((long)iVar8 * 8 + -8 + lVar10 * -8) >> 3) + 1;
    uVar12 = uVar13 & 0x3ffffffffffffffe;
    uVar9 = 0;
    lVar11 = lVar10;
    if (uVar12 != 0) {
      lVar11 = (uVar13 & 0x3ffffffffffffffe) + lVar10;
      pQVar5 = pQVar5 + uVar12 * 8;
      pQVar4 = pQVar4 + *(long *)(pQVar4 + 0x10) + 8;
      puVar7 = (uint *)(lVar14 + 0x18 + lVar10 * 8);
      uVar6 = uVar13 & 0xfffffffffffffffe;
      do {
        uVar2 = *puVar7;
        *(ulong *)(pQVar4 + -8) = (ulong)puVar7[-2];
        *(ulong *)pQVar4 = (ulong)uVar2;
        pQVar4 = pQVar4 + 0x10;
        puVar7 = puVar7 + 4;
        uVar6 = uVar6 - 2;
        uVar9 = uVar12;
      } while (uVar6 != 0);
    }
    if (uVar13 != uVar9) {
      puVar7 = (uint *)(lVar14 + 0x10 + lVar11 * 8);
      lVar14 = (long)iVar8 * 8 + lVar11 * -8;
      do {
        uVar2 = *puVar7;
        puVar7 = puVar7 + 2;
        *(ulong *)pQVar5 = (ulong)uVar2;
        pQVar5 = pQVar5 + 8;
        lVar14 = lVar14 + -8;
      } while (lVar14 != 0);
    }
  }
  uVar1 = FUN_1000b7aa0(uVar3,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return uVar1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,8,8);
  }
  return uVar1;
}

