
undefined1 FUN_100da40a0(QString *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  QArrayData *local_58;
  QArrayData *local_50;
  QFileInfo local_48 [8];
  QDateTime local_40;
  utimbuf local_38;
  undefined1 local_21;
  
  QFileInfo::QFileInfo(local_48,param_1);
  QFileInfo::lastRead();
  uVar1 = QDateTime::toTime_t();
  local_38.actime = (time_t)uVar1;
  uVar1 = QDateTime::toTime_t();
  local_38.modtime = (time_t)uVar1;
  QDateTime::~QDateTime(&local_40);
  QFileInfo::~QFileInfo(local_48);
  QString::toUtf8();
  iVar2 = _utime((char *)(local_50 + *(long *)(local_50 + 0x10)),&local_38);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100da414c;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_100da414c:
  if (iVar2 == 0) {
    return 1;
  }
  piVar3 = ___error();
  iVar2 = *piVar3;
  QString::toUtf8();
  FUN_100df99c0("","cmn_utils",0,"Failed to change modification time of file \'%s\' with error: %d",
                local_58 + *(long *)(local_58 + 0x10),iVar2);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return 0;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_58,1,8);
  }
  return 0;
}

