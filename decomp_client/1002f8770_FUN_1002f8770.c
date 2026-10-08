
undefined8 FUN_1002f8770(QObject *param_1)

{
  undefined *puVar1;
  QArrayData *pQVar2;
  CTaskShowEULA *this;
  CEULAStorage *this_00;
  long local_120;
  undefined8 local_118;
  undefined1 local_110;
  QString local_108;
  QPixmap local_100 [32];
  undefined1 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined1 local_b8;
  QString local_b0 [4];
  QString local_90;
  QString local_88;
  QArrayData *local_80;
  QString local_78;
  QArrayData *local_70;
  QPixmap local_68 [32];
  QArrayData *local_48;
  QString local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  pQVar2 = *(QArrayData **)(param_1 + 0x18);
  if (*(int *)(pQVar2 + 4) == 0) {
    MacUtils::getBundlePath();
  }
  else {
    local_88.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar2;
    if (1 < *(int *)pQVar2 + 1U) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + 1;
      local_29 = *(int *)pQVar2 != 0;
      UNLOCK();
    }
  }
  pQVar2 = (QArrayData *)QString::fromAscii_helper("/",1);
  if (1 < *(int *)pQVar2 + 1U) {
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + 1;
    local_29 = *(int *)pQVar2 != 0;
    UNLOCK();
  }
  local_90.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar2;
  QString::fromUtf8_helper((char *)&local_80,0x1de6f1d);
  QString::append(&local_90);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_29 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002f8831;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1002f8831:
  QString::append(&local_88);
  if (*(int *)local_90.field0_0x0 != -1) {
    if (*(int *)local_90.field0_0x0 != 0) {
      LOCK();
      *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
      local_29 = *(int *)local_90.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002f8877;
    }
    QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
  }
LAB_1002f8877:
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_29 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002f88a2;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1002f88a2:
  this = operator_new(0xb8);
  this_00 = operator_new(0x10);
  CEULAStorage::CEULAStorage(this_00,param_1);
  FUN_1002ffd50(&local_118);
  puVar1 = PTR_s_QWidget___color__rgba__255__255__102271080;
  local_118 = CONCAT44(*(undefined4 *)PTR_PD10_Height_1021e14d8,
                       *(undefined4 *)PTR_PD10_Width_1021e14d0);
  local_110 = 0;
  FUN_10019bb00(&local_48);
  if (puVar1 != (undefined *)0x0) {
    _strlen(puVar1);
  }
  QString::fromUtf8_helper((char *)&local_40,(int)puVar1);
  QString::append(&local_40);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002f896b;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1002f896b:
  QString::fromUtf8_helper((char *)&local_38,0x1de7470);
  QString::append(&local_40);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002f89bd;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1002f89bd:
  QString::operator=(&local_108,&local_40);
  local_70 = (QArrayData *)QString::fromAscii_helper(":/pixmaps/PD10_Theme/pattern.png",0x20);
  QPixmap::QPixmap(local_68,&local_70,0,0);
  QPixmap::operator=(local_100,local_68);
  QPixmap::~QPixmap(local_68);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002f8a3c;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1002f8a3c:
  local_e0 = 1;
  local_d4 = 0x10;
  local_d0 = 4;
  local_cc = 0x10;
  local_c8 = 0;
  local_c4 = 0x10;
  local_dc = 0x56;
  local_d8 = 0x41;
  local_bc = 5;
  local_c0 = 0x18;
  local_b8 = 1;
  FUN_1001c72e0(&local_78);
  QString::operator=(local_b0,&local_78);
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_29 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002f8aed;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_1002f8aed:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_29 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002f8b1d;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1002f8b1d:
  CTaskShowEULA::CTaskShowEULA
            (this,&local_88,(CAbstractEULAStorage *)this_00,(CEULADialogStyleOptions *)&local_118);
  FUN_1002ffe20(&local_118);
  QObject::connect(&local_120,this,"2taskFinished(PRL_RESULT)",param_1,
                   "1subTaskCompleted(PRL_RESULT)",0);
  if (local_120 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_120);
  CAbstractTask::setWaitForSubTaskCompletion();
  CAbstractTask::setOption(this,4,1);
  CAbstractTask::execute();
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_88.field0_0x0 != 0) {
        return 0;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
  return 0;
}

