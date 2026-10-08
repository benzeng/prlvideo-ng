
QString * FUN_1009fd340(QString *param_1)

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
  
  puVar1 = PTR_shared_null_1021e1288;
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  FUN_100d842d0(&local_38);
  QString::operator=(param_1,&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_21 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009fd39f;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_1009fd39f:
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
      if ((bool)local_21) goto LAB_1009fd406;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1009fd406:
  QString::fromUtf8_helper((char *)&local_30,0x1e3a8ea);
  QString::append(param_1);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009fd457;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1009fd457:
  pQVar4 = (QArrayData *)QString::fromAscii_helper("/",1);
  FUN_100d885b0(&local_58);
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
      if ((bool)local_21) goto LAB_1009fd4d2;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1009fd4d2:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009fd502;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1009fd502:
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_21 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009fd52d;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1009fd52d:
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
        if ((bool)local_21) goto LAB_1009fd5a5;
      }
      QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
    }
  }
  else {
    bVar3 = 0;
  }
LAB_1009fd5a5:
  QFileInfo::~QFileInfo(local_60);
  if (bVar3 != 0) {
    QString::toUtf8();
    FUN_100df99c0("","prl_problem_report_utils",0,"Cannot create user base directory \'%s\' !",
                  local_78 + *(long *)(local_78 + 0x10));
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_21 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1009fd614;
      }
      QArrayData::deallocate(local_78,1,8);
    }
  }
LAB_1009fd614:
  QDir::~QDir(local_40);
  return param_1;
}

