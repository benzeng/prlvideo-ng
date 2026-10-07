
void FUN_100623440(CRepMemoryDump *param_1,QString param_2)

{
  long lVar1;
  QArrayData *pQVar2;
  char cVar3;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QString local_60;
  QString local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QString local_30;
  undefined1 local_21;
  
  CRepMemoryDump::getPath();
  cVar3 = QFile::exists(&local_30);
  if (cVar3 == '\0') {
    CRepMemoryDump::getPath();
    QString::toUtf8();
    FUN_1008e3970("","prl_problem_report_utils",0,"Cannot find memory dump \'%s\' to append",
                  local_38 + *(long *)(local_38 + 0x10));
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_21 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1006236f8;
      }
      QArrayData::deallocate(local_38,1,8);
    }
LAB_1006236f8:
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_21 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100623816;
      }
      QArrayData::deallocate(local_40,2,8);
    }
    goto LAB_100623816;
  }
  local_50 = (QArrayData *)QString::fromAscii_helper("MemoryDump%1",0xc);
  QString::arg(&local_48,&local_50,
               (long)*(int *)(*(long *)(param_1 + 0x100) + 0xc) -
               (long)*(int *)(*(long *)(param_1 + 0x100) + 8),0,10,0x20);
  CRepMemoryDump::setNameInArchive(param_2);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006234ed;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1006234ed:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10062351d;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10062351d:
  local_68 = (QArrayData *)QString::fromAscii_helper("/",1);
  local_60.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_1 + 0x268);
  if (1 < *(int *)local_60.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + 1;
    local_21 = *(int *)local_60.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_60);
  CRepMemoryDump::getNameInArchive();
  local_58.field0_0x0 = local_60.field0_0x0;
  if (1 < *(int *)local_60.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + 1;
    local_21 = *(int *)local_60.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_58);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_21 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006235bd;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1006235bd:
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_21 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006235ed;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1006235ed:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_21 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10062361d;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10062361d:
  cVar3 = QFile::copy(&local_30,&local_58);
  if (cVar3 == '\0') {
    QString::toUtf8();
    pQVar2 = local_78;
    lVar1 = *(long *)(local_78 + 0x10);
    QString::toUtf8();
    FUN_1008e3970("","prl_problem_report_utils",0,"Cannot copy file \'%s\' to temp dir \'%s\'",
                  pQVar2 + lVar1,local_80 + *(long *)(local_80 + 0x10));
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_21 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1006237b6;
      }
      QArrayData::deallocate(local_80,1,8);
    }
LAB_1006237b6:
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_21 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1006237e6;
      }
      QArrayData::deallocate(local_78,1,8);
    }
  }
  else {
    local_88 = (QArrayData *)PTR_shared_null_100ba20d0;
    CRepMemoryDump::setDump(param_2.field0_0x0,&local_88);
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_21 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100623679;
      }
      QArrayData::deallocate(local_88,1,8);
    }
LAB_100623679:
    CProblemReport::appendMemoryDump(param_1);
  }
LAB_1006237e6:
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_21 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100623816;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_100623816:
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

