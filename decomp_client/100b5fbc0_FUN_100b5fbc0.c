
QString * FUN_100b5fbc0(QString *param_1,QString *param_2)

{
  QTypedArrayData<unsigned_short> *pQVar1;
  undefined8 uVar2;
  ulong *puVar3;
  int *piVar4;
  QTypedArrayData<unsigned_short> *pQVar5;
  long lVar6;
  QTypedArrayData<unsigned_short> *pQVar7;
  QTypedArrayData<unsigned_short> *pQVar8;
  byte bVar9;
  QArrayData *local_38;
  undefined1 local_2d;
  undefined1 local_2c;
  undefined1 local_2a;
  
  bVar9 = 0;
  if (param_2 == param_1) {
    return param_1;
  }
  QString::operator=(param_1,param_2);
  pQVar5 = param_2[1].field0_0x0;
  if (pQVar5 == (QTypedArrayData<unsigned_short> *)0x0) {
    param_1[1].field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
  }
  else {
    pQVar1 = operator_new(0x88);
    piVar4 = *(int **)pQVar5;
    *(int **)pQVar1 = piVar4;
    if (1 < *piVar4 + 1U) {
      LOCK();
      *piVar4 = *piVar4 + 1;
      local_2d = *piVar4 != 0;
      UNLOCK();
    }
    pQVar1[8] = pQVar5[8];
    piVar4 = *(int **)(pQVar5 + 0x10);
    if (*piVar4 == 0) {
      uVar2 = QMapDataBase::createData();
      *(undefined8 *)(pQVar1 + 0x10) = uVar2;
      if (*(long *)(*(long *)(pQVar5 + 0x10) + 0x10) != 0) {
        puVar3 = (ulong *)FUN_1006f3350(*(long *)(*(long *)(pQVar5 + 0x10) + 0x10),uVar2);
        lVar6 = *(long *)(pQVar1 + 0x10);
        *(ulong **)(lVar6 + 0x10) = puVar3;
        *puVar3 = *puVar3 & 3 | lVar6 + 8U;
        QMapDataBase::recalcMostLeftNode();
      }
    }
    else {
      if (*piVar4 != -1) {
        LOCK();
        *piVar4 = *piVar4 + 1;
        local_2c = *piVar4 != 0;
        UNLOCK();
        piVar4 = *(int **)(pQVar5 + 0x10);
      }
      *(int **)(pQVar1 + 0x10) = piVar4;
    }
    pQVar7 = pQVar5 + 0x18;
    pQVar8 = pQVar1 + 0x18;
    for (lVar6 = 0x1b; lVar6 != 0; lVar6 = lVar6 + -1) {
      *(undefined4 *)pQVar8 = *(undefined4 *)pQVar7;
      pQVar7 = pQVar7 + (ulong)bVar9 * -8 + 4;
      pQVar8 = pQVar8 + (ulong)bVar9 * -8 + 4;
    }
    pQVar1[0x84] = pQVar5[0x84];
    param_1[1].field0_0x0 = pQVar1;
  }
  if (param_2[2].field0_0x0 == (QTypedArrayData<unsigned_short> *)0x0) {
    param_1[2].field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
    return param_1;
  }
  pQVar5 = operator_new(0x130);
  local_38 = (QArrayData *)QString::fromAscii_helper("",0);
  FUN_100b60f40(pQVar5,&local_38);
  param_1[2].field0_0x0 = pQVar5;
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_2a = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_2a) goto LAB_100b5fd62;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100b5fd62:
  FUN_100b73f60(param_1[2].field0_0x0,param_2[2].field0_0x0);
  return param_1;
}

