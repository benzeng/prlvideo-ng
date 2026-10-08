
undefined1 FUN_10004d550(long param_1,QString *param_2,char param_3)

{
  char cVar1;
  QArrayData *pQVar2;
  long lVar3;
  undefined1 uVar4;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  AnonymousUnion0 local_58;
  QArrayData *local_50;
  QString local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  local_48.field0_0x0 = param_2->field0_0x0;
  if (1 < *(int *)local_48.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
    local_31 = *(int *)local_48.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_40,0x1db68d4);
  QString::append(&local_48);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10004d5d3;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10004d5d3:
  cVar1 = QFile::exists(&local_48);
  if (cVar1 == '\0') {
    if (DAT_10230ffd0 < 2) {
      uVar4 = 0;
    }
    else {
      QString::toUtf8();
      FUN_100df99c0("SGASMGMT","prl_client_app",2,"Error: executable \"%s\" does not exists",
                    local_50 + *(long *)(local_50 + 0x10));
      if (*(int *)local_50 == -1) {
        uVar4 = 0;
      }
      else {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_31 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_31) {
            uVar4 = 0;
            goto LAB_10004d840;
          }
        }
        QArrayData::deallocate(local_50,1,8);
        uVar4 = 0;
      }
    }
    goto LAB_10004d840;
  }
  if (param_3 != '\0') {
    QMutex::lock();
    FUN_1000341d0(param_1 + 0x48,param_2);
    QTimer::start();
    uVar4 = 1;
    QMutex::unlock();
    goto LAB_10004d840;
  }
  local_58.field1 = (Data *)PTR_shared_null_1021e15e8;
  pQVar2 = (QArrayData *)QString::fromAscii_helper("--ivmid",7);
  local_60 = pQVar2;
  FUN_1000341d0(&local_58,&local_60);
  lVar3 = FUN_1000a9690(param_1 + 0x10);
  QString::number((uint)&local_68,*(int *)(lVar3 + 0x38));
  FUN_1000341d0(&local_58,&local_68);
  cVar1 = MacUtils::launchApplication(param_2,(QStringList *)&local_58.field0,0x10000);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10004d6d1;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10004d6d1:
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_31 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10004d6fe;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_10004d6fe:
  FUN_100039a80(&local_58);
  if (cVar1 == '\0') {
    if (DAT_10230ffd0 < 1) {
      uVar4 = 0;
    }
    else {
      QString::toUtf8();
      FUN_100df99c0("SGASMGMT","prl_client_app",1,"launchApplication() failed for bundle \"%s\"",
                    local_70 + *(long *)(local_70 + 0x10));
      if (*(int *)local_70 == -1) {
        uVar4 = 0;
      }
      else {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_31) {
            uVar4 = 0;
            goto LAB_10004d840;
          }
        }
        QArrayData::deallocate(local_70,1,8);
        uVar4 = 0;
      }
    }
  }
  else {
    cVar1 = QtPrivate::QStringList_contains(param_1 + 0x70,param_2,1);
    uVar4 = 1;
    if (cVar1 == '\0') {
      FUN_1000341d0(param_1 + 0x70,param_2);
    }
  }
LAB_10004d840:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_48.field0_0x0 != 0) {
        return uVar4;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
  return uVar4;
}

