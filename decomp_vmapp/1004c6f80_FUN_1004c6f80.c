
void FUN_1004c6f80(long param_1)

{
  char cVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  FUN_1004c6010();
  if (*(long *)(DAT_1011c3698 + 0x110) == 0) {
    return;
  }
  CVmConfiguration::getVmSettings();
  lVar3 = CVmSettings::getVmTools();
  if (*(long *)(DAT_1011c3698 + 0x110) == 0) {
    return;
  }
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  CVmTools::getVmSharing();
  lVar4 = CVmSharing::getHostSharing();
  if (lVar3 == 0) {
    return;
  }
  if (lVar4 == 0) {
    return;
  }
  CVmTools::getVmSharing();
  cVar1 = CVmSharing::getHostSharing();
  CBaseNode::toString(SUB81(&local_40,0),(bool)((char)lVar4 + '\x10'));
  CBaseNode::toString(SUB81(&local_48,0),(bool)(cVar1 + '\x10'));
  cVar1 = operator==(&local_40,&local_48);
  if (cVar1 == '\0') {
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_31 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1004c7102;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
LAB_1004c7102:
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_31 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1004c7132;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
    goto LAB_1004c7132;
  }
  cVar1 = CVmTools::isIsolatedVm();
  cVar2 = CVmTools::isIsolatedVm();
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004c7099;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1004c7099:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004c70cc;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1004c70cc:
  if (cVar1 == cVar2) {
    return;
  }
LAB_1004c7132:
  FUN_1004c66a0(param_1 + 0x48);
  return;
}

