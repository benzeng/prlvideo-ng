
void FUN_100da7bb0(long param_1)

{
  char cVar1;
  QArrayData *local_48;
  QArrayData *local_40;
  QFileInfo local_38 [8];
  QFileInfo local_30 [15];
  undefined1 local_21;
  
  QFileInfo::QFileInfo(local_30,(QString *)(param_1 + 0x18));
  QFileInfo::QFileInfo(local_38,(QString *)(param_1 + 0x20));
  cVar1 = QFileInfo::isDir();
  if (((cVar1 != '\0') || (cVar1 = QFileInfo::isFile(), cVar1 != '\0')) &&
     (cVar1 = QFileInfo::isRelative(), cVar1 == '\0')) {
    cVar1 = QFileInfo::isDir();
    if ((cVar1 != '\0') && (cVar1 = QFileInfo::isRelative(), cVar1 == '\0')) {
      cVar1 = QFileInfo::isDir();
      if (cVar1 == '\0') {
        FUN_100da67b0(param_1);
      }
      else {
        FUN_100da53f0(param_1);
      }
      goto LAB_100da7cfe;
    }
    QString::toUtf8();
    FUN_100df99c0("","cmn_utils",0,"Error: target path [%s] is not absolute or is not dir.",
                  local_48 + *(long *)(local_48 + 0x10));
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_21 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100da7cf6;
      }
      QArrayData::deallocate(local_48,1,8);
    }
LAB_100da7cf6:
    *(undefined4 *)(param_1 + 0x3c) = 0x80000003;
    goto LAB_100da7cfe;
  }
  QString::toUtf8();
  FUN_100df99c0("","cmn_utils",0,"Error: source path [%s] is not absolute or is not dir.",
                local_40 + *(long *)(local_40 + 0x10));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100da7c69;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_100da7c69:
  *(undefined4 *)(param_1 + 0x3c) = 0x80000003;
LAB_100da7cfe:
  QFileInfo::~QFileInfo(local_38);
  QFileInfo::~QFileInfo(local_30);
  return;
}

