
bool FUN_100d9be20(QString *param_1,QString *param_2,undefined8 param_3,undefined1 param_4)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  QArrayData *local_f0;
  QArrayData *local_e8;
  undefined1 local_e0 [16];
  ulong local_d0;
  QArrayData *local_50;
  QFileInfo local_48 [8];
  QArrayData *local_40;
  QFileInfo local_38 [15];
  undefined1 local_29;
  
  QFileInfo::QFileInfo(local_38,param_1);
  cVar1 = QFileInfo::exists();
  if (cVar1 == '\0') {
    QString::toUtf8();
    FUN_100df99c0("","cmn_utils",0,"%s: file does not exists (path=%s)","setOwnerByTemplate",
                  local_40 + *(long *)(local_40 + 0x10));
    if (*(int *)local_40 == -1) {
      bVar4 = false;
    }
    else {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_29 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_29) {
          bVar4 = false;
          goto LAB_100d9c09b;
        }
      }
      QArrayData::deallocate(local_40,1,8);
      bVar4 = false;
    }
    goto LAB_100d9c09b;
  }
  QFileInfo::QFileInfo(local_48,param_2);
  cVar1 = QFileInfo::exists();
  if (cVar1 == '\0') {
    QString::toUtf8();
    FUN_100df99c0("","cmn_utils",0,"%s: template file does not exists (path=%s)",
                  "setOwnerByTemplate",local_50 + *(long *)(local_50 + 0x10));
    if (*(int *)local_50 == -1) {
      bVar4 = false;
    }
    else {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_29 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_29) {
          bVar4 = false;
          goto LAB_100d9c092;
        }
      }
      QArrayData::deallocate(local_50,1,8);
      bVar4 = false;
    }
  }
  else {
    QString::toUtf8();
    iVar2 = _stat_INODE64(local_e8 + *(long *)(local_e8 + 0x10),local_e0);
    if (*(int *)local_e8 != -1) {
      if (*(int *)local_e8 != 0) {
        LOCK();
        *(int *)local_e8 = *(int *)local_e8 + -1;
        local_29 = *(int *)local_e8 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100d9bed6;
      }
      QArrayData::deallocate(local_e8,1,8);
    }
LAB_100d9bed6:
    if (iVar2 == 0) {
      iVar2 = FUN_100d9c1e0(local_38,local_d0,local_d0 >> 0x20,param_4);
      bVar4 = -1 < iVar2;
    }
    else {
      piVar3 = ___error();
      iVar2 = *piVar3;
      QString::toUtf8();
      FUN_100df99c0("","cmn_utils",0,"%s: stat() failed with errno = %d for template file (path=%s)"
                    ,"setOwnerByTemplate",iVar2,local_f0 + *(long *)(local_f0 + 0x10));
      if (*(int *)local_f0 == -1) {
        bVar4 = false;
      }
      else {
        if (*(int *)local_f0 != 0) {
          LOCK();
          *(int *)local_f0 = *(int *)local_f0 + -1;
          local_29 = *(int *)local_f0 != 0;
          UNLOCK();
          if ((bool)local_29) {
            bVar4 = false;
            goto LAB_100d9c092;
          }
        }
        QArrayData::deallocate(local_f0,1,8);
        bVar4 = false;
      }
    }
  }
LAB_100d9c092:
  QFileInfo::~QFileInfo(local_48);
LAB_100d9c09b:
  QFileInfo::~QFileInfo(local_38);
  return bVar4;
}

