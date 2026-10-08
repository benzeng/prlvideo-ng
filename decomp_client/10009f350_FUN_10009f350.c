
void FUN_10009f350(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  char cVar2;
  QArrayData *pQVar3;
  string local_a8 [24];
  QArrayData *local_90;
  QFile local_88 [16];
  QString local_78;
  QString local_70;
  QArrayData *local_68;
  QString local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QString local_48;
  QString local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  puVar1 = PTR_shared_null_1021e1288;
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  cVar2 = FUN_100d80630(1);
  if (cVar2 == '\0') {
    FUN_100d898d0(&local_68);
    local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_68;
    if (1 < *(int *)local_68 + 1U) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + 1;
      local_21 = *(int *)local_68 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_38,0x1dbb67e);
    QString::append(&local_60);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_21 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10009f4d9;
      }
      QArrayData::deallocate(local_38,2,8);
    }
LAB_10009f4d9:
    QString::operator=(&local_40,&local_60);
    if (*(int *)local_60.field0_0x0 != -1) {
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        local_21 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10009f516;
      }
      QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
    }
LAB_10009f516:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_21 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10009f546;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_10009f546:
    local_78.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
    QDir::QDir((QDir *)&local_70,&local_78);
    QDir::mkpath(&local_70);
    QDir::~QDir((QDir *)&local_70);
    if (*(int *)local_78.field0_0x0 != -1) {
      if (*(int *)local_78.field0_0x0 != 0) {
        LOCK();
        *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
        local_21 = *(int *)local_78.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10009f59d;
      }
      QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
    }
LAB_10009f59d:
    QString::fromUtf8_helper((char *)&local_30,0x1dbb691);
    QString::append(&local_40);
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        local_21 = *(int *)local_30 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10009f5ef;
      }
      QArrayData::deallocate(local_30,2,8);
    }
  }
  else {
    local_50 = (QArrayData *)QString::fromAscii_helper(".desktop_uiemu_interface",0x18);
    local_58 = (QArrayData *)QString::fromAscii_helper("",0);
    FUN_100d8b360(&local_48,&local_50,&local_58);
    QString::operator=(&local_40,&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_21 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10009f3f8;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
LAB_10009f3f8:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_21 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10009f428;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_10009f428:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_21 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10009f5ef;
      }
      QArrayData::deallocate(local_50,2,8);
    }
  }
LAB_10009f5ef:
  QFile::QFile(local_88,&local_40);
  QFile::remove();
  QFile::~QFile(local_88);
  QString::toUtf8();
  pQVar3 = local_90 + *(long *)(local_90 + 0x10);
  _strlen((char *)pQVar3);
  std::string::__init((char *)local_a8,(ulong)pQVar3);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_21 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10009f679;
    }
    QArrayData::deallocate(local_90,1,8);
  }
LAB_10009f679:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_21 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10009f6a9;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_10009f6a9:
  FUN_100a64cf0(param_1,local_a8);
  std::string::~string(local_a8);
  *param_1 = &PTR_FUN_10226c930;
  param_1[0xc] = param_2;
  cVar2 = FUN_100a65060(param_1);
  if (cVar2 == '\0') {
    FUN_100df99c0("UIEMUSRV","prl_client_app",0,"failed to start listening");
  }
  return;
}

