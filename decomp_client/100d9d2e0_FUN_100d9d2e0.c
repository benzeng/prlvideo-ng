
bool FUN_100d9d2e0(QString *param_1,undefined8 param_2,undefined1 param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  bool bVar5;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QFileInfo local_38 [15];
  undefined1 local_29;
  
  cVar1 = FUN_100d97590(param_2);
  if (cVar1 != '\0') {
    return false;
  }
  QFileInfo::QFileInfo(local_38,param_1);
  cVar1 = QFileInfo::exists();
  if (cVar1 == '\0') {
    QString::toUtf8();
    FUN_100df99c0("","cmn_utils",0,"%s: file does not exists (path=%s)","setOwner",
                  local_40 + *(long *)(local_40 + 0x10));
    if (*(int *)local_40 == -1) {
      bVar5 = false;
    }
    else {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_29 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_29) {
          bVar5 = false;
          goto LAB_100d9d4a9;
        }
      }
      QArrayData::deallocate(local_40,1,8);
      bVar5 = false;
    }
    goto LAB_100d9d4a9;
  }
  FUN_100d97200(param_2);
  QString::toUtf8();
  lVar3 = _getpwnam(local_48 + *(long *)(local_48 + 0x10));
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d9d37a;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_100d9d37a:
  if (lVar3 == 0) {
    FUN_100d97200(param_2);
    QString::toUtf8();
    lVar3 = *(long *)(local_50 + 0x10);
    piVar4 = ___error();
    FUN_100df99c0("","cmn_utils",0,"getpwnam() failed for user \'%s\' with error code %d",
                  local_50 + lVar3,*piVar4);
    if (*(int *)local_50 == -1) {
      bVar5 = false;
    }
    else {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_29 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_29) {
          bVar5 = false;
          goto LAB_100d9d4a9;
        }
      }
      QArrayData::deallocate(local_50,1,8);
      bVar5 = false;
    }
  }
  else {
    iVar2 = FUN_100d9c1e0(local_38,*(undefined4 *)(lVar3 + 0x10),*(undefined4 *)(lVar3 + 0x14),
                          param_3);
    bVar5 = -1 < iVar2;
  }
LAB_100d9d4a9:
  QFileInfo::~QFileInfo(local_38);
  return bVar5;
}

