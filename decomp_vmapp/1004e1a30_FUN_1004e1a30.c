
undefined4 FUN_1004e1a30(long param_1,QString *param_2)

{
  long lVar1;
  QString QVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  QString local_48;
  QString local_40;
  QFileInfo local_38 [15];
  undefined1 local_29;
  
  QFileInfo::QFileInfo(local_38,param_2);
  cVar3 = QFileInfo::exists();
  if (cVar3 == '\0') {
    cVar3 = QFileInfo::isSymLink();
    uVar5 = 0xf0000018;
    if (cVar3 == '\0') goto LAB_1004e1b28;
  }
  uVar5 = 0xf0000007;
  if (*(char *)(param_1 + 0x30) != '\0') goto LAB_1004e1b28;
  QString::toUtf8_helper(&local_40);
  QVar2.field0_0x0 = local_40.field0_0x0;
  lVar1 = *(long *)(local_40.field0_0x0 + 0x10);
  QString::toUtf8_helper(&local_48);
  iVar4 = _rename((char *)(QVar2.field0_0x0 + lVar1),
                  (char *)(local_48.field0_0x0 + *(long *)(local_48.field0_0x0 + 0x10)));
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_29 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1004e1aec;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,1,8);
  }
LAB_1004e1aec:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_29 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1004e1b1c;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,1,8);
  }
LAB_1004e1b1c:
  uVar5 = 0xf000001c;
  if (iVar4 == 0) {
    uVar5 = 0;
  }
LAB_1004e1b28:
  QFileInfo::~QFileInfo(local_38);
  return uVar5;
}

