
QString * FUN_100d83e90(QString *param_1)

{
  undefined4 uVar1;
  QFileInfo local_68 [8];
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QString local_30;
  undefined1 local_21;
  
  uVar1 = FUN_100d7e9e0();
  FUN_100d83950(param_1,uVar1);
  if (*(int *)(param_1->field0_0x0 + 4) != 0) {
    return param_1;
  }
  local_40 = (QArrayData *)QString::fromAscii_helper("%1/%2",5);
  FUN_100d81f90(&local_48);
  QString::arg(&local_38,&local_40,&local_48,0,0x20);
  local_50 = (QArrayData *)QString::fromAscii_helper("fake.network.xml",0x10);
  QString::arg(&local_30,&local_38,&local_50,0,0x20);
  QString::operator=(param_1,&local_30);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_21 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100d83f5f;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_100d83f5f:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100d83f8f;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100d83f8f:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100d83fbf;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100d83fbf:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100d83fef;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100d83fef:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100d8401f;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100d8401f:
  QFileInfo::QFileInfo(local_68,param_1);
  QFileInfo::fileName();
  QString::toUtf8();
  FUN_100df99c0("","cmn_utils",0,"%s:  Not supported appMode = %d. config fname = %s",
                "getNetworkConfigFilePath",uVar1,local_58 + *(long *)(local_58 + 0x10));
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100d840ac;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_100d840ac:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_21 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100d840dc;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100d840dc:
  QFileInfo::~QFileInfo(local_68);
  return param_1;
}

