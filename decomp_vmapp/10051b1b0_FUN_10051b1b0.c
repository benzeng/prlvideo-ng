
ulong FUN_10051b1b0(long *param_1,QString *param_2)

{
  long lVar1;
  QString *pQVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  long lVar6;
  long lVar7;
  QString *pQVar8;
  QArrayData *pQVar9;
  QTypedArrayData<unsigned_short> *pQVar10;
  uint *puVar11;
  ulong uVar12;
  uint *puVar13;
  ulong uVar14;
  QString local_40;
  undefined1 local_35;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  
  lVar7 = *param_1;
  iVar3 = *(int *)(lVar7 + 8);
  uVar14 = 0;
  if (*(int *)(lVar7 + 0xc) <= iVar3) goto LAB_10051b37d;
  lVar6 = (long)*(int *)(lVar7 + 0xc) * 8 + (long)iVar3 * -8;
  lVar7 = lVar7 + 8 + (long)iVar3 * 8;
  do {
    if (lVar6 == 0) goto LAB_10051b37d;
    lVar1 = lVar7 + 8;
    cVar5 = operator==((QString *)(lVar7 + 8),param_2);
    lVar6 = lVar6 + -8;
    lVar7 = lVar1;
  } while (cVar5 == '\0');
  puVar11 = (uint *)*param_1;
  uVar12 = lVar1 - (long)(puVar11 + (long)(int)puVar11[2] * 2 + 4);
  if ((uVar12 & 0x7fffffff8) == 0x7fffffff8) goto LAB_10051b37d;
  local_40.field0_0x0 = param_2->field0_0x0;
  if (1 < *(int *)local_40.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
    local_35 = *(int *)local_40.field0_0x0 != 0;
    UNLOCK();
    puVar11 = (uint *)*param_1;
  }
  if (1 < *puVar11) {
    FUN_100022c80(param_1,puVar11[1]);
    puVar11 = (uint *)*param_1;
  }
  lVar7 = (long)(int)(uVar12 >> 3) + (long)(int)puVar11[2];
  puVar13 = puVar11 + lVar7 * 2 + 4;
  uVar4 = puVar11[3];
  pQVar9 = *(QArrayData **)(puVar11 + lVar7 * 2 + 4);
  if (*(int *)pQVar9 != -1) {
    if (*(int *)pQVar9 != 0) {
      LOCK();
      *(int *)pQVar9 = *(int *)pQVar9 + -1;
      local_33 = *(int *)pQVar9 != 0;
      UNLOCK();
      if ((bool)local_33) goto LAB_10051b2c7;
      pQVar9 = *(QArrayData **)puVar13;
    }
    QArrayData::deallocate(pQVar9,2,8);
  }
LAB_10051b2c7:
  pQVar2 = (QString *)(puVar11 + (long)(int)uVar4 * 2 + 4);
  if (lVar7 + 1 != (long)(int)uVar4) {
    pQVar8 = (QString *)(puVar11 + (lVar7 + 1) * 2 + 4);
    do {
      while (cVar5 = operator==(pQVar8,&local_40), cVar5 != '\0') {
        pQVar10 = pQVar8->field0_0x0;
        if (*(int *)pQVar10 != -1) {
          if (*(int *)pQVar10 != 0) {
            LOCK();
            *(int *)pQVar10 = *(int *)pQVar10 + -1;
            local_32 = *(int *)pQVar10 != 0;
            UNLOCK();
            if ((bool)local_32) goto LAB_10051b31d;
            pQVar10 = pQVar8->field0_0x0;
          }
          QArrayData::deallocate((QArrayData *)pQVar10,2,8);
        }
LAB_10051b31d:
        pQVar8 = pQVar8 + 1;
        if (pQVar2 == pQVar8) goto LAB_10051b33b;
      }
      *(QTypedArrayData<unsigned_short> **)puVar13 = pQVar8->field0_0x0;
      puVar13 = puVar13 + 2;
      pQVar8 = pQVar8 + 1;
    } while (pQVar8 != pQVar2);
  }
LAB_10051b33b:
  uVar14 = (ulong)((long)pQVar2 - (long)puVar13) >> 3;
  *(int *)(*param_1 + 0xc) = *(int *)(*param_1 + 0xc) - (int)uVar14;
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) goto LAB_10051b37d;
      local_34 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_10051b37d:
  return uVar14 & 0xffffffff;
}

