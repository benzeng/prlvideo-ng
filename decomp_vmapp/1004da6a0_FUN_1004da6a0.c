
undefined8 FUN_1004da6a0(long *param_1,undefined8 *param_2,char param_3,long *param_4)

{
  long *plVar1;
  short sVar2;
  long *plVar3;
  bool bVar4;
  long lVar5;
  char cVar6;
  char cVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  QArrayData *pQVar11;
  uint uVar12;
  QArrayData *pQVar13;
  long *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  local_48 = (QArrayData *)*param_2;
  if (1 < *(uint *)local_48 + 1) {
    LOCK();
    *(uint *)local_48 = *(uint *)local_48 + 1;
    local_31 = *(uint *)local_48 != 0;
    UNLOCK();
  }
  if ((1 < *(uint *)local_48) || (*(long *)(local_48 + 0x10) != 0x18)) {
    QString::reallocData((uint)&local_48,(bool)((char)*(uint *)(local_48 + 4) + '\x01'));
  }
  pQVar13 = local_48 + *(long *)(local_48 + 0x10);
  pQVar11 = local_48;
  while( true ) {
    if ((1 < *(uint *)pQVar11) || (*(long *)(pQVar11 + 0x10) != 0x18)) {
      QString::reallocData((uint)&local_48,(bool)((char)*(uint *)(pQVar11 + 4) + '\x01'));
      pQVar11 = local_48;
    }
    if (pQVar13 == pQVar11 + (long)(int)*(uint *)(pQVar11 + 4) * 2 + *(long *)(pQVar11 + 0x10))
    break;
    sVar2 = *(short *)pQVar13;
    if (sVar2 == 0x22) {
      *(short *)pQVar13 = 0x2e;
LAB_1004da710:
      pQVar13 = pQVar13 + 2;
    }
    else if (sVar2 == 0x3c) {
      *(short *)pQVar13 = 0x2a;
      pQVar13 = pQVar13 + 2;
    }
    else {
      if (sVar2 != 0x3e) goto LAB_1004da710;
      *(short *)pQVar13 = 0x3f;
      pQVar13 = pQVar13 + 2;
    }
  }
  local_40 = (QArrayData *)QString::fromAscii_helper("*.*",3);
  cVar6 = QString::endsWith(&local_48,&local_40,1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004da7d9;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1004da7d9:
  if (cVar6 != '\0') {
    QString::chop((int)&local_48);
  }
  if ((int)param_1[7] == 0) {
    cVar6 = FUN_1004e2f60(param_1[4]);
    *(uint *)(param_1 + 7) = (cVar6 == '\0') + 1;
  }
  cVar6 = FUN_1004c5f70();
  cVar7 = FUN_1004c5fb0();
  if (cVar7 == '\0') {
    bVar4 = false;
  }
  else {
    cVar7 = FUN_1004f1a80(param_1 + 3);
    if (cVar7 == '\0') {
      bVar4 = false;
    }
    else {
      iVar9 = QString::indexOf(param_2,0x2a,0,1);
      bVar4 = true;
      if (iVar9 != -1) {
        FUN_1004f42a0(param_1 + 3);
      }
    }
  }
  bVar8 = (**(code **)(*param_1 + 0x68))(param_1);
  uVar12 = (uint)((int)param_1[7] == 1) | (uint)bVar8 << 3;
  uVar10 = uVar12 + 4;
  if (param_3 == '\0') {
    uVar10 = uVar12;
  }
  uVar12 = uVar10 | 2;
  if (cVar6 == '\0') {
    uVar12 = uVar10;
  }
  uVar10 = uVar12 | 0x10;
  if (!bVar4) {
    uVar10 = uVar12;
  }
  FUN_1004dd580(&local_50,*(undefined8 *)(param_1[2] + 0x50),param_1[2] + 0x80,param_1 + 3,&local_48
                ,uVar10);
  if (local_50 != (long *)0x0) {
    LOCK();
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    UNLOCK();
  }
  plVar3 = (long *)*param_4;
  *param_4 = (long)local_50;
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (local_50 != (long *)0x0) {
    LOCK();
    plVar3 = local_50 + 1;
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)(*local_50 + 0x10))();
    }
  }
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return 0;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_48,2,8);
  }
  return 0;
}

