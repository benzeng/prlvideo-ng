
void FUN_1000583d0(long param_1)

{
  QString *pQVar1;
  long lVar2;
  QArrayData *pQVar3;
  char cVar4;
  int iVar5;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  QMutex::lock();
  local_40 = (QArrayData *)PTR_shared_null_1021e1288;
  pQVar1 = (QString *)(param_1 + 8);
  cVar4 = FUN_1000588e0(pQVar1,param_1 + 0x4f,&local_40);
  if (cVar4 == '\0') {
    if (1 < DAT_10230ffd0) {
      QString::toUtf8();
      FUN_100df99c0("SGAC","prl_client_app",2,"Failed to check path=\"%s\" in Dock",
                    local_48 + *(long *)(local_48 + 0x10));
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_31 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10005870f;
        }
        QArrayData::deallocate(local_48,1,8);
      }
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x52) = 0;
    if (*(char *)(param_1 + 0x4f) != '\0') {
      iVar5 = QString::compare(param_1 + 0x10,&local_40,1);
      *(bool *)(param_1 + 0x52) = iVar5 != 0;
    }
    cVar4 = FUN_1000588e0(param_1 + 0x18,(undefined1 *)(param_1 + 0x50),0);
    if (cVar4 == '\0') {
      *(undefined1 *)(param_1 + 0x50) = 0;
    }
    cVar4 = FUN_1000588e0(param_1 + 0x20,(undefined1 *)(param_1 + 0x51),0);
    if (cVar4 == '\0') {
      *(undefined1 *)(param_1 + 0x51) = 0;
    }
    if (*(char *)(param_1 + 0x4c) == '\0') {
      FUN_100057a30(param_1);
    }
    else {
      cVar4 = QFile::exists(pQVar1);
      if (((cVar4 == '\0') || (cVar4 = FUN_100058370(), cVar4 == '\0')) &&
         (cVar4 = FUN_100057cd0(param_1), cVar4 == '\0')) {
        if (DAT_10230ffd0 < 2) goto LAB_10005870f;
        QString::toUtf8();
        pQVar3 = local_50;
        lVar2 = *(long *)(local_50 + 0x10);
        QString::toUtf8();
        FUN_100df99c0("SGAC","prl_client_app",2,
                      "Applications Menu folder \"%s\" for vmUuid=\"%s\" not exists or empty, no Dock icon will be placed"
                      ,pQVar3 + lVar2,local_58 + *(long *)(local_58 + 0x10));
        if (*(int *)local_58 != -1) {
          if (*(int *)local_58 != 0) {
            LOCK();
            *(int *)local_58 = *(int *)local_58 + -1;
            local_31 = *(int *)local_58 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000586df;
          }
          QArrayData::deallocate(local_58,1,8);
        }
LAB_1000586df:
        if (*(int *)local_50 != -1) {
          if (*(int *)local_50 != 0) {
            LOCK();
            *(int *)local_50 = *(int *)local_50 + -1;
            local_31 = *(int *)local_50 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10005870f;
          }
          QArrayData::deallocate(local_50,1,8);
        }
        goto LAB_10005870f;
      }
      local_60 = (QArrayData *)QString::fromAscii_helper("en",2);
      cVar4 = FUN_10004db40(pQVar1,param_1 + 0x10,&local_60);
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000584fc;
        }
        QArrayData::deallocate(local_60,2,8);
      }
LAB_1000584fc:
      if (cVar4 == '\0' && 0 < DAT_10230ffd0) {
        QString::toUtf8();
        FUN_100df99c0("SGAC","prl_client_app",1,"Warning: failed to localize folder \"%s\"",
                      local_68 + *(long *)(local_68 + 0x10));
        if (*(int *)local_68 != -1) {
          if (*(int *)local_68 != 0) {
            LOCK();
            *(int *)local_68 = *(int *)local_68 + -1;
            local_31 = *(int *)local_68 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100058573;
          }
          QArrayData::deallocate(local_68,1,8);
        }
      }
LAB_100058573:
      FUN_1000f6ad0(param_1 + 0x28,pQVar1);
      FUN_100056930(param_1);
    }
    if (1 < DAT_10230ffd0) {
      FUN_100df99c0("SGAC","prl_client_app",2,"AppsMenuDockIcon applied");
    }
  }
LAB_10005870f:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10005873f;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10005873f:
  QMutex::unlock();
  return;
}

