
QString * FUN_100788ef0(QString *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                       QArrayData *param_5)

{
  bool bVar1;
  char cVar2;
  QArrayData *pQVar3;
  int iVar4;
  QString local_60;
  QString local_58;
  QString local_50;
  QString local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  pQVar3 = (QArrayData *)*param_3;
  if (*(int *)(pQVar3 + 4) == 0) {
    pQVar3 = (QArrayData *)QString::fromAscii_helper("tmpfile",7);
  }
  else if (1 < *(int *)pQVar3 + 1U) {
    LOCK();
    *(int *)pQVar3 = *(int *)pQVar3 + 1;
    local_31 = *(int *)pQVar3 != 0;
    UNLOCK();
  }
  if (1 < *(int *)pQVar3 + 1U) {
    LOCK();
    *(int *)pQVar3 = *(int *)pQVar3 + 1;
    local_31 = *(int *)pQVar3 != 0;
    UNLOCK();
  }
  local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar3;
  QString::append(&local_58);
  local_50.field0_0x0 = local_58.field0_0x0;
  if (1 < *(int *)local_58.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + 1;
    local_31 = *(int *)local_58.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_40,0x9e120d);
  QString::append(&local_50);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100788fd9;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100788fd9:
  local_48.field0_0x0 = local_50.field0_0x0;
  if (1 < *(int *)local_50.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
    local_31 = *(int *)local_50.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_48);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10078902f;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_10078902f:
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_31 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10078905f;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_10078905f:
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_31 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10078908e;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_10078908e:
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  iVar4 = 0;
  do {
    if (iVar4 == 0) {
      param_5 = (QArrayData *)*param_3;
      if (*(int *)(param_5 + 4) == 0) {
        param_5 = (QArrayData *)QString::fromAscii_helper("tmpfile",7);
      }
      else if (1 < *(int *)param_5 + 1U) {
        LOCK();
        *(int *)param_5 = *(int *)param_5 + 1;
        local_31 = *(int *)param_5 != 0;
        UNLOCK();
      }
      if (1 < *(int *)param_5 + 1U) {
        LOCK();
        *(int *)param_5 = *(int *)param_5 + 1;
        local_31 = *(int *)param_5 != 0;
        UNLOCK();
      }
      bVar1 = true;
      local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)param_5;
      QString::append(&local_60);
    }
    else {
      bVar1 = false;
      QString::arg(&local_60,&local_48,iVar4,0,10,0x20);
    }
    QString::operator=(param_1,&local_60);
    if (*(int *)local_60.field0_0x0 != -1) {
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        local_31 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100789163;
      }
      QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
    }
LAB_100789163:
    if ((bVar1) && (*(int *)param_5 != -1)) {
      if (*(int *)param_5 != 0) {
        LOCK();
        *(int *)param_5 = *(int *)param_5 + -1;
        local_31 = *(int *)param_5 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007891a0;
      }
      QArrayData::deallocate(param_5,2,8);
    }
LAB_1007891a0:
    cVar2 = QtPrivate::QStringList_contains(param_2,param_1,0);
    iVar4 = iVar4 + 1;
    if (cVar2 == '\0') {
      if (*(int *)local_48.field0_0x0 != -1) {
        if (*(int *)local_48.field0_0x0 != 0) {
          LOCK();
          *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
          UNLOCK();
          if (*(int *)local_48.field0_0x0 != 0) {
            return param_1;
          }
          local_31 = 0;
        }
        QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
      }
      return param_1;
    }
  } while( true );
}

