
undefined8 * FUN_10063e930(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  QMapNodeBase *pQVar2;
  char cVar3;
  QString *pQVar4;
  uint *local_b0;
  QString local_a8;
  QDateTime local_a0 [8];
  QString local_98;
  QFileInfo local_90 [8];
  QString local_88;
  QDateTime local_80 [8];
  QString local_78;
  QFileInfo local_70 [8];
  QString local_68;
  QDateTime local_60 [8];
  QString local_58;
  QFileInfo local_50 [8];
  QMapNodeBase *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  local_48 = (QMapNodeBase *)PTR_shared_null_100ba20d8;
  local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)*param_2;
  if (1 < *(int *)local_58.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + 1;
    local_21 = *(int *)local_58.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_40,0xa534bd);
  QString::append(&local_58);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10063e9bb;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10063e9bb:
  QFileInfo::QFileInfo(local_50,&local_58);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_21 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10063e9ff;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_10063e9ff:
  cVar3 = QFileInfo::exists();
  if (cVar3 != '\0') {
    QFileInfo::lastModified();
    pQVar4 = (QString *)FUN_100640a60(&local_48,local_60);
    QFileInfo::absoluteFilePath();
    QString::operator=(pQVar4,&local_68);
    if (*(int *)local_68.field0_0x0 != -1) {
      if (*(int *)local_68.field0_0x0 != 0) {
        LOCK();
        *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
        local_21 = *(int *)local_68.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10063ea72;
      }
      QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
    }
LAB_10063ea72:
    QDateTime::~QDateTime(local_60);
  }
  local_78.field0_0x0 = (QTypedArrayData<unsigned_short> *)*param_2;
  if (1 < *(int *)local_78.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + 1;
    local_21 = *(int *)local_78.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_38,0xa534c8);
  QString::append(&local_78);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10063eae5;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10063eae5:
  FUN_10063e700(local_70,&local_78);
  QFileInfo::operator=(local_50,local_70);
  QFileInfo::~QFileInfo(local_70);
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_21 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10063eb38;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_10063eb38:
  cVar3 = QFileInfo::exists();
  if (cVar3 != '\0') {
    QFileInfo::lastModified();
    pQVar4 = (QString *)FUN_100640a60(&local_48,local_80);
    QFileInfo::absoluteFilePath();
    QString::operator=(pQVar4,&local_88);
    if (*(int *)local_88.field0_0x0 != -1) {
      if (*(int *)local_88.field0_0x0 != 0) {
        LOCK();
        *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
        local_21 = *(int *)local_88.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10063ebab;
      }
      QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
    }
LAB_10063ebab:
    QDateTime::~QDateTime(local_80);
  }
  local_98.field0_0x0 = (QTypedArrayData<unsigned_short> *)*param_2;
  if (1 < *(int *)local_98.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + 1;
    local_21 = *(int *)local_98.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_30,0xa534da);
  QString::append(&local_98);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10063ec24;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10063ec24:
  FUN_10063e700(local_90,&local_98);
  QFileInfo::operator=(local_50,local_90);
  QFileInfo::~QFileInfo(local_90);
  if (*(int *)local_98.field0_0x0 != -1) {
    if (*(int *)local_98.field0_0x0 != 0) {
      LOCK();
      *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
      local_21 = *(int *)local_98.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10063ec89;
    }
    QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
  }
LAB_10063ec89:
  cVar3 = QFileInfo::exists();
  if (cVar3 == '\0') goto LAB_10063ed1e;
  QFileInfo::lastModified();
  pQVar4 = (QString *)FUN_100640a60(&local_48,local_a0);
  QFileInfo::absoluteFilePath();
  QString::operator=(pQVar4,&local_a8);
  if (*(int *)local_a8.field0_0x0 != -1) {
    if (*(int *)local_a8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
      local_21 = *(int *)local_a8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10063ed12;
    }
    QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
  }
LAB_10063ed12:
  QDateTime::~QDateTime(local_a0);
LAB_10063ed1e:
  pQVar2 = local_48;
  if (*(int *)(local_48 + 4) == 0) {
    *param_1 = PTR_shared_null_100ba20d0;
  }
  else {
    FUN_100640b90(&local_b0,&local_48);
    if (1 < *local_b0) {
      FUN_100022c80(&local_b0,local_b0[1]);
    }
    piVar1 = *(int **)(local_b0 + (long)(int)local_b0[3] * 2 + 2);
    *param_1 = piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      local_21 = *piVar1 != 0;
      UNLOCK();
    }
    FUN_100013180(&local_b0);
  }
  QFileInfo::~QFileInfo(local_50);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_21 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_21) {
        return param_1;
      }
    }
    if (*(long *)(pQVar2 + 0x10) != 0) {
      FUN_100641330();
      QMapDataBase::freeTree(pQVar2,(int)*(undefined8 *)(pQVar2 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar2);
  }
  return param_1;
}

