
QString * FUN_100638110(QString *param_1)

{
  undefined *puVar1;
  char cVar2;
  byte bVar3;
  QArrayData *pQVar4;
  QArrayData *local_78;
  QString local_70;
  QString local_68;
  QFileInfo local_60 [8];
  QArrayData *local_58;
  QString local_50;
  QString local_48;
  QDir local_40 [8];
  QString local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  puVar1 = PTR_shared_null_100ba20d0;
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  FUN_1006dbe90(&local_38);
  QString::operator=(param_1,&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_21 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10063816f;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_10063816f:
  QDir::QDir(local_40,param_1);
  QDir::cdUp();
  QDir::cdUp();
  QDir::path();
  QString::operator=(param_1,&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_21 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006381d6;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1006381d6:
  QString::fromUtf8_helper((char *)&local_30,0xa532d6);
  QString::append(param_1);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100638227;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100638227:
  pQVar4 = (QArrayData *)QString::fromAscii_helper("/",1);
  FUN_1006e0170(&local_58);
  if (1 < *(int *)pQVar4 + 1U) {
    LOCK();
    *(int *)pQVar4 = *(int *)pQVar4 + 1;
    local_21 = *(int *)pQVar4 != 0;
    UNLOCK();
  }
  local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar4;
  QString::append(&local_50);
  QString::append(param_1);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_21 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006382a2;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1006382a2:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006382d2;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1006382d2:
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_21 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006382fd;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1006382fd:
  QFileInfo::QFileInfo(local_60,param_1);
  cVar2 = QFileInfo::exists();
  if (cVar2 == '\0') {
    local_70.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
    QDir::QDir((QDir *)&local_68,&local_70);
    bVar3 = QDir::mkpath(&local_68);
    QDir::~QDir((QDir *)&local_68);
    bVar3 = bVar3 ^ 1;
    if (*(int *)local_70.field0_0x0 != -1) {
      if (*(int *)local_70.field0_0x0 != 0) {
        LOCK();
        *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
        local_21 = *(int *)local_70.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100638375;
      }
      QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
    }
  }
  else {
    bVar3 = 0;
  }
LAB_100638375:
  QFileInfo::~QFileInfo(local_60);
  if (bVar3 != 0) {
    QString::toUtf8();
    FUN_1008e3970("","prl_problem_report_utils",0,"Cannot create user base directory \'%s\' !",
                  local_78 + *(long *)(local_78 + 0x10));
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_21 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1006383e4;
      }
      QArrayData::deallocate(local_78,1,8);
    }
  }
LAB_1006383e4:
  QDir::~QDir(local_40);
  return param_1;
}

