
/* WARNING: Removing unreachable block (ram,0x00010021f218) */
/* WARNING: Removing unreachable block (ram,0x00010021f226) */
/* WARNING: Removing unreachable block (ram,0x00010021f232) */

undefined8 FUN_10021ef30(long param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint in_stack_fffffffffffffefc;
  Data_conflict local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  QVariant local_a8;
  QArrayData *local_98;
  int *local_90 [4];
  QVariant local_70 [2];
  QArrayData *local_58;
  ExternalRefCountData *local_50;
  AnonymousUnion0 local_48;
  AnonymousUnion0 local_40;
  QArrayData *local_38 [2];
  
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
  }
  iVar2 = FUN_10018a9d0(uVar6);
  if (iVar2 != 0x30000001) {
    return 0;
  }
  uVar5 = FUN_100152280();
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100188480(local_38,uVar6);
  uVar6 = FUN_1001547d0(uVar5,local_38);
  if (*(int *)local_38[0] != -1) {
    if (*(int *)local_38[0] != 0) {
      LOCK();
      *(int *)local_38[0] = *(int *)local_38[0] + -1;
      local_38[1]._7_1_ = *(int *)local_38[0] != 0;
      UNLOCK();
      if ((bool)local_38[1]._7_1_) goto LAB_10021efd9;
    }
    QArrayData::deallocate(local_38[0],2,8);
  }
LAB_10021efd9:
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
  }
  iVar2 = FUN_10018f860(uVar5);
  if (iVar2 != 8) {
    return 0;
  }
  cVar1 = FUN_10015a680(uVar6);
  if (cVar1 != '\0') {
    return 0;
  }
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar5 = FUN_10018c2b0(uVar5);
  uVar3 = FUN_100177620(uVar6,uVar5);
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_10018c2b0(uVar5);
  CVmConfiguration::getVmHardwareList();
  CVmHardware::getVideo();
  iVar2 = CVmVideo::getEnable3DAcceleration();
  if (iVar2 == 0) {
    return 0;
  }
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_10018c2b0(uVar5);
  CVmConfiguration::getVmHardwareList();
  CVmHardware::getVideo();
  uVar4 = CVmVideo::getMemorySize();
  if (uVar3 <= uVar4) {
    return 0;
  }
  FUN_10015a340(uVar6);
  CHostHardwareInfoBase::getMemorySettings();
  uVar3 = CHwMemorySettings::getHostRamSize();
  if (uVar3 < 0x401) {
    return 0;
  }
  CAbstractTask::setWaitForSubTaskCompletion();
  iVar2 = CMessageManager::instance();
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100188480(&local_40,uVar6);
  local_48.field1 = (Data *)PTR_shared_null_1021e15e8;
  local_50 = (ExternalRefCountData *)PTR_shared_null_1021e15e8;
  QString::number((int)&local_58,0x100);
  FUN_1000341d0(&local_50,&local_58);
  local_98 = (QArrayData *)
             QString::fromAscii_helper
                       ("1onWarningVideoMemoryIsTooLowClosed( PRL_RESULT, Messaging::ButtonID )",
                        0x46);
  QVariant::QVariant(&local_a8,0x100);
  FUN_100a1c600(local_90,param_1,&local_98,&local_a8);
  local_c0 = 0x80000000;
  local_c8.field7 = 0;
  local_b8 = 1;
  CMessageManager::showMessageBox
            (iVar2,(QString *)0x3ae2,(QStringList *)&local_40.field0,(QStringList *)&local_48.field0
             ,(CSlotInfo *)&local_50,SUB81(local_90,0),
             (QWidget *)((ulong)in_stack_fffffffffffffefc << 0x20),(CSlotInfo *)0x0);
  QVariant::~QVariant((QVariant *)&local_c8);
  QVariant::~QVariant(local_70);
  if (local_90[0] != (int *)0x0) {
    LOCK();
    *local_90[0] = *local_90[0] + -1;
    local_38[1]._7_1_ = *local_90[0] != 0;
    UNLOCK();
    if ((!(bool)local_38[1]._7_1_) && (local_90[0] != (int *)0x0)) {
      operator_delete(local_90[0]);
    }
  }
  QVariant::~QVariant(&local_a8);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_38[1]._7_1_ = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_38[1]._7_1_) goto LAB_10021f2ad;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_10021f2ad:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_38[1]._7_1_ = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_38[1]._7_1_) goto LAB_10021f2dd;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10021f2dd:
  FUN_100039a80(&local_50);
  FUN_100039a80(&local_48);
  if (*(int *)local_40.field1 != -1) {
    if (*(int *)local_40.field1 != 0) {
      LOCK();
      *(int *)local_40.field1 = *(int *)local_40.field1 + -1;
      UNLOCK();
      if (*(int *)local_40.field1 != 0) {
        return 0;
      }
      local_38[1]._7_1_ = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field1,2,8);
  }
  return 0;
}

