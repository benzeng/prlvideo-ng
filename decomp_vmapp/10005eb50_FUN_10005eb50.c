
undefined1 FUN_10005eb50(long param_1,uint param_2,char param_3,QString *param_4)

{
  QTypedArrayData<unsigned_short> *pQVar1;
  QString *pQVar2;
  uint uVar3;
  uint uVar4;
  QString *pQVar5;
  QTypedArrayData<unsigned_short> *pQVar6;
  int iVar7;
  Data *pDVar8;
  long lVar9;
  undefined1 uVar10;
  long lVar11;
  QTypedArrayData<unsigned_short> *pQVar12;
  uint *puVar13;
  uint *puVar14;
  undefined8 *puVar15;
  uint local_38;
  undefined1 local_31;
  
  puVar13 = *(uint **)(param_1 + 0x48);
  puVar15 = (undefined8 *)(param_1 + 0x48);
  local_38 = param_2;
  if (1 < *puVar13) {
    FUN_10005fb00(puVar15,puVar13[1]);
    puVar13 = (uint *)*puVar15;
  }
  puVar14 = puVar13 + (long)(int)puVar13[2] * 2 + 4;
  do {
    if (1 < *puVar13) {
      FUN_10005fb00(puVar15,puVar13[1]);
      puVar13 = (uint *)*puVar15;
    }
    if (puVar14 == puVar13 + (long)(int)puVar13[3] * 2 + 4) {
      return 0;
    }
    pQVar5 = *(QString **)puVar14;
    pQVar6 = pQVar5[2].field0_0x0;
    lVar11 = (long)*(int *)(pQVar6 + 8);
    if (*(int *)(pQVar6 + 8) < *(int *)(pQVar6 + 0xc)) {
      pQVar2 = pQVar5 + 2;
      pQVar12 = pQVar6 + lVar11 * 8 + 8;
      lVar9 = (long)*(int *)(pQVar6 + 0xc) * 8 + lVar11 * -8;
      do {
        if (lVar9 == 0) goto LAB_10005ebb0;
        lVar9 = lVar9 + -8;
        pQVar1 = pQVar12 + 8;
        pQVar12 = pQVar12 + 8;
      } while (*(uint *)pQVar1 != param_2);
      if ((int)((ulong)((long)pQVar12 - (long)(pQVar6 + lVar11 * 8 + 0x10)) >> 3) != -1) break;
    }
LAB_10005ebb0:
    puVar14 = puVar14 + 2;
  } while( true );
  QString::operator=(param_4,pQVar5);
  param_4[1].field0_0x0 = pQVar5[1].field0_0x0;
  FUN_10005f7c0(param_4 + 2,pQVar2);
  if (param_3 != '\0') {
    FUN_10005f680(pQVar2,&local_38);
    goto LAB_10005ed5f;
  }
  pQVar6 = pQVar2->field0_0x0;
  uVar3 = *(uint *)(pQVar6 + 0xc);
  uVar4 = *(uint *)(pQVar6 + 8);
  lVar11 = (long)(int)uVar4;
  if ((int)uVar3 <= (int)uVar4) goto LAB_10005ed5f;
  pQVar12 = pQVar6 + lVar11 * 8 + 8;
  lVar9 = (long)(int)uVar3 * 8 + lVar11 * -8;
  do {
    if (lVar9 == 0) goto LAB_10005ed5f;
    lVar9 = lVar9 + -8;
    pQVar1 = pQVar12 + 8;
    pQVar12 = pQVar12 + 8;
  } while (*(uint *)pQVar1 != param_2);
  pQVar1 = pQVar6 + lVar11 * 8 + 0x10;
  iVar7 = (int)((ulong)((long)pQVar12 - (long)pQVar1) >> 3);
  if (((iVar7 == -1) || (iVar7 < 0)) || ((int)(uVar3 - uVar4) <= iVar7)) goto LAB_10005ed5f;
  if (1 < *(uint *)pQVar6) {
    pDVar8 = (Data *)QListData::detach((int)pQVar2);
    pQVar6 = pQVar2->field0_0x0;
    lVar11 = (long)*(int *)(pQVar6 + 8);
    if ((pQVar1 != pQVar6 + lVar11 * 8 + 0x10) &&
       (lVar9 = *(int *)(pQVar6 + 0xc) - lVar11, lVar9 != 0 && lVar11 <= *(int *)(pQVar6 + 0xc))) {
      _memcpy(pQVar6 + lVar11 * 8 + 0x10,pQVar1,lVar9 * 8);
    }
    if (*(int *)pDVar8 != -1) {
      if (*(int *)pDVar8 != 0) {
        LOCK();
        *(int *)pDVar8 = *(int *)pDVar8 + -1;
        local_31 = *(int *)pDVar8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10005ed54;
      }
      QListData::dispose(pDVar8);
    }
  }
LAB_10005ed54:
  QListData::remove((int)pQVar2);
LAB_10005ed5f:
  if (*(int *)(pQVar2->field0_0x0 + 0xc) == *(int *)(pQVar2->field0_0x0 + 8)) {
    iVar7 = FUN_100060020(puVar15,pQVar5,0);
    uVar10 = 1;
    if (iVar7 != -1) {
      FUN_100060330(puVar15,iVar7);
    }
  }
  else {
    uVar10 = 0;
  }
  return uVar10;
}

