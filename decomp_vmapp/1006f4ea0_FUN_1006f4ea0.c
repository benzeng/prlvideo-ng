
bool FUN_1006f4ea0(QString *param_1,undefined8 param_2,undefined1 param_3)

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
  
  cVar1 = FUN_1006ef150(param_2);
  if (cVar1 != '\0') {
    return false;
  }
  QFileInfo::QFileInfo(local_38,param_1);
  cVar1 = QFileInfo::exists();
  if (cVar1 == '\0') {
    QString::toUtf8();
    FUN_1008e3970("","cmn_utils",0,"%s: file does not exists (path=%s)","setOwner",
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
          goto LAB_1006f5069;
        }
      }
      QArrayData::deallocate(local_40,1,8);
      bVar5 = false;
    }
    goto LAB_1006f5069;
  }
  FUN_1006eedc0(param_2);
  QString::toUtf8();
  lVar3 = _getpwnam(local_48 + *(long *)(local_48 + 0x10));
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006f4f3a;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_1006f4f3a:
  if (lVar3 == 0) {
    FUN_1006eedc0(param_2);
    QString::toUtf8();
    lVar3 = *(long *)(local_50 + 0x10);
    piVar4 = ___error();
    FUN_1008e3970("","cmn_utils",0,"getpwnam() failed for user \'%s\' with error code %d",
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
          goto LAB_1006f5069;
        }
      }
      QArrayData::deallocate(local_50,1,8);
      bVar5 = false;
    }
  }
  else {
    iVar2 = FUN_1006f3da0(local_38,*(undefined4 *)(lVar3 + 0x10),*(undefined4 *)(lVar3 + 0x14),
                          param_3);
    bVar5 = -1 < iVar2;
  }
LAB_1006f5069:
  QFileInfo::~QFileInfo(local_38);
  return bVar5;
}

