
void FUN_100622ef0(CRepCrashDump *param_1,QString param_2)

{
  char cVar1;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QString local_50;
  QString local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QString local_30;
  undefined1 local_21;
  
  CRepCrashDump::getPath();
  cVar1 = QFile::exists(&local_30);
  if (cVar1 == '\0') {
    FUN_1008e3970("","prl_problem_report_utils",0,"Cannot find file pass to append");
    goto LAB_1006231a0;
  }
  local_40 = (QArrayData *)QString::fromAscii_helper("CrashDump%1",0xb);
  QString::arg(&local_38,&local_40,
               (long)*(int *)(*(long *)(param_1 + 0xf8) + 0xc) -
               (long)*(int *)(*(long *)(param_1 + 0xf8) + 8),0,10,0x20);
  CRepCrashDump::setNameInArchive(param_2);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100622f9d;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100622f9d:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100622fcd;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100622fcd:
  local_58 = (QArrayData *)QString::fromAscii_helper("/",1);
  local_50.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_1 + 0x268);
  if (1 < *(int *)local_50.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
    local_21 = *(int *)local_50.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_50);
  CRepCrashDump::getNameInArchive();
  local_48.field0_0x0 = local_50.field0_0x0;
  if (1 < *(int *)local_50.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
    local_21 = *(int *)local_50.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_48);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_21 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10062306d;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10062306d:
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_21 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10062309d;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_10062309d:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006230cd;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1006230cd:
  cVar1 = QFile::copy(&local_30,&local_48);
  if (cVar1 == '\0') {
    FUN_1008e3970("","prl_problem_report_utils",0,"Cannot copy file to temp dir");
  }
  else {
    local_68 = (QArrayData *)PTR_shared_null_100ba20d0;
    CRepCrashDump::setDump(param_2.field0_0x0,&local_68);
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_21 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100623125;
      }
      QArrayData::deallocate(local_68,1,8);
    }
LAB_100623125:
    CProblemReport::appendCrashDump(param_1);
  }
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_21 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006231a0;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1006231a0:
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_30.field0_0x0 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
  return;
}

