
undefined1 FUN_100045e20(undefined8 *param_1,char param_2)

{
  long lVar1;
  char cVar2;
  undefined1 uVar3;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QString local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QString local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  local_38 = (QArrayData *)QString::fromAscii_helper("WinAppHelper",0xc);
  local_40 = (QArrayData *)QString::fromAscii_helper("",0);
  FUN_100d8cca0(&local_30,&local_38,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100045e99;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100045e99:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100045ec9;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100045ec9:
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)*param_1;
  if (1 < *(int *)local_48.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
    local_19 = *(int *)local_48.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_28,0x1db68d4);
  QString::append(&local_48);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100045f33;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_100045f33:
  if (((param_2 != '\0') && (cVar2 = QFile::exists(&local_48), cVar2 != '\0')) &&
     (cVar2 = QFile::remove(&local_48), cVar2 == '\0')) {
    QString::toUtf8();
    FUN_100df99c0("SGASMGMT","prl_client_app",0,"Error: failed to remove \"%s\"",
                  local_50 + *(long *)(local_50 + 0x10));
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_19 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100045fb5;
      }
      QArrayData::deallocate(local_50,1,8);
    }
  }
LAB_100045fb5:
  cVar2 = QFile::copy(&local_30,&local_48);
  if (cVar2 == '\0') {
    QString::toUtf8();
    lVar1 = *(long *)(local_58 + 0x10);
    QString::toUtf8();
    FUN_100df99c0("SGASMGMT","prl_client_app",0,"Error: failed to copy \"%s\" -> \"%s\"",
                  local_58 + lVar1,local_60 + *(long *)(local_60 + 0x10));
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_19 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1000460d3;
      }
      QArrayData::deallocate(local_60,1,8);
    }
LAB_1000460d3:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_19 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100046103;
      }
      QArrayData::deallocate(local_58,1,8);
    }
LAB_100046103:
    uVar3 = 0;
  }
  else {
    cVar2 = QFile::setPermissions(&local_48,0x7775);
    uVar3 = 1;
    if (cVar2 == '\0') {
      QString::toUtf8();
      FUN_100df99c0("SGASMGMT","prl_client_app",0,"Error: failed to set permissions for \"%s\"",
                    local_68 + *(long *)(local_68 + 0x10));
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_19 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_100046103;
        }
        QArrayData::deallocate(local_68,1,8);
      }
      goto LAB_100046103;
    }
  }
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_19 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100046135;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_100046135:
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_30.field0_0x0 != 0) {
        return uVar3;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
  return uVar3;
}

