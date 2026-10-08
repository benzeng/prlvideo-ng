
undefined8 FUN_1002cdca0(long param_1)

{
  char cVar1;
  QArrayData *pQVar2;
  QArrayData *pQVar3;
  undefined8 uVar4;
  QArrayData *local_80;
  QString local_70;
  QString local_68;
  QString local_60;
  QFileInfo local_58 [8];
  QString local_50;
  QString local_48;
  QArrayData *local_40;
  QString local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  FUN_100d898d0(&local_40);
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_40;
  if (1 < *(int *)local_40 + 1U) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + 1;
    local_21 = *(int *)local_40 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_30,0x1ddb434);
  QString::append(&local_38);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002cdd24;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1002cdd24:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002cdd54;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1002cdd54:
  local_48.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("[VMPTPDFD]",10);
  local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  cVar1 = SandboxFileAccessHelpers::checkAvailability(&local_38,&local_48,true,&local_50);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_21 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002cddbd;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1002cddbd:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_21 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002cdded;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1002cdded:
  uVar4 = 0x80000275;
  if (cVar1 == '\0') goto LAB_1002cdfec;
  QFileInfo::QFileInfo(local_58,(QString *)(param_1 + 0x30));
  pQVar2 = (QArrayData *)QString::fromAscii_helper("/",1);
  local_70.field0_0x0 = local_38.field0_0x0;
  if (1 < *(int *)local_38.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + 1;
    local_21 = *(int *)local_38.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_70);
  QFileInfo::baseName();
  local_68.field0_0x0 = local_70.field0_0x0;
  if (1 < *(int *)local_70.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + 1;
    local_21 = *(int *)local_70.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_68);
  pQVar3 = (QArrayData *)QString::fromAscii_helper(".pdf",4);
  local_60.field0_0x0 = local_68.field0_0x0;
  if (1 < *(int *)local_68.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + 1;
    local_21 = *(int *)local_68.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_60);
  QString::operator=((QString *)(param_1 + 0x48),&local_60);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_21 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002cdef1;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1002cdef1:
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_21 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002cdf21;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1002cdf21:
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_21 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002cdf51;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_1002cdf51:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_21 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002cdf81;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1002cdf81:
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_21 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002cdfb1;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_1002cdfb1:
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_21 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002cdfe1;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1002cdfe1:
  uVar4 = 0;
  QFileInfo::~QFileInfo(local_58);
LAB_1002cdfec:
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return uVar4;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
  return uVar4;
}

