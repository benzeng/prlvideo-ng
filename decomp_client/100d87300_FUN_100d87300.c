
QString * FUN_100d87300(QString *param_1)

{
  int iVar1;
  QArrayData *pQVar2;
  QString local_50;
  QString local_48;
  bool local_40;
  undefined7 uStack_3f;
  undefined1 local_31;
  QArrayData *local_30;
  QArrayData *local_28;
  
  FUN_100d806d0(&local_40);
  pQVar2 = (QArrayData *)CONCAT71(uStack_3f,local_40);
  iVar1 = *(int *)(pQVar2 + 4);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_31 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d87348;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100d87348:
  if (iVar1 == 0) {
    FUN_100d8c5e0(&local_50);
    param_1->field0_0x0 = local_50.field0_0x0;
    if (1 < *(int *)local_50.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
      local_40 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_28,0x1efe7a9);
    QString::append(param_1);
    if (*(int *)local_28 != -1) {
      if (*(int *)local_28 != 0) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + -1;
        local_40 = *(int *)local_28 != 0;
        UNLOCK();
        if (local_40) goto LAB_100d87454;
      }
      QArrayData::deallocate(local_28,2,8);
    }
LAB_100d87454:
    if (*(int *)local_50.field0_0x0 == -1) {
      return param_1;
    }
    local_48.field0_0x0 = local_50.field0_0x0;
    if (*(int *)local_50.field0_0x0 == 0) goto LAB_100d8746d;
    LOCK();
    *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
    iVar1 = *(int *)local_50.field0_0x0;
    UNLOCK();
  }
  else {
    FUN_100d806d0(&local_48);
    param_1->field0_0x0 = local_48.field0_0x0;
    if (1 < *(int *)local_48.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
      local_40 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_30,0x1efe78d);
    QString::append(param_1);
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        local_40 = *(int *)local_30 != 0;
        UNLOCK();
        if (local_40) goto LAB_100d873c2;
      }
      QArrayData::deallocate(local_30,2,8);
    }
LAB_100d873c2:
    if (*(int *)local_48.field0_0x0 == -1) {
      return param_1;
    }
    if (*(int *)local_48.field0_0x0 == 0) goto LAB_100d8746d;
    LOCK();
    *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
    iVar1 = *(int *)local_48.field0_0x0;
    UNLOCK();
  }
  local_40 = iVar1 != 0;
  if (local_40) {
    return param_1;
  }
LAB_100d8746d:
  QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  return param_1;
}

