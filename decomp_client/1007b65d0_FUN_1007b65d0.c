
/* WARNING: Removing unreachable block (ram,0x0001007b67e4) */
/* WARNING: Removing unreachable block (ram,0x0001007b67f2) */
/* WARNING: Removing unreachable block (ram,0x0001007b67fe) */

undefined1 FUN_1007b65d0(long param_1,char param_2,long *param_3)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  uint in_stack_fffffffffffffefc;
  Data_conflict local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  int *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  Data_conflict local_88;
  undefined4 local_80;
  undefined1 local_78;
  QArrayData *local_68;
  QArrayData *local_60;
  ExternalRefCountData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  AnonymousUnion0 local_40 [2];
  
  if (((*param_3 == 0) || (*(int *)(*param_3 + 4) == 0)) || (param_3[1] == 0)) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: CDeviceWrap is null.");
    return 0;
  }
  if (*(int *)(param_3[1] + 0x20) != 5) {
    return 1;
  }
  lVar4 = FUN_100146b20();
  if (lVar4 == 0) {
    return 1;
  }
  lVar4 = ___dynamic_cast(lVar4,PTR_typeinfo_1021e1740,PTR_typeinfo_1021e16b0,0);
  if (lVar4 == 0) {
    return 1;
  }
  iVar3 = CVmClusteredDevice::getInterfaceType();
  if (iVar3 != 1) {
    return 1;
  }
  cVar2 = CVmDevice::isRemote();
  if (cVar2 != '\0') {
    return 1;
  }
  if (param_2 != '\x01') {
    return 1;
  }
  iVar3 = CMessageManager::instance();
  local_50 = (QArrayData *)QString::fromAscii_helper("%1",2);
  QString::arg(&local_48,&local_50,*(int *)(param_3[1] + 0x24) + 1,0,10,0x20);
  puVar1 = PTR_shared_null_1021e15e8;
  local_40[0].field1 = (Data *)PTR_shared_null_1021e15e8;
  FUN_1000341d0(local_40,&local_48);
  local_68 = (QArrayData *)QString::fromAscii_helper("%1",2);
  QString::arg(&local_60,&local_68,*(int *)(param_3[1] + 0x24) + 1,0,10,0x20);
  local_58 = (ExternalRefCountData *)puVar1;
  FUN_1000341d0(&local_58,&local_60);
  local_a8 = (int *)0x0;
  uStack_a0 = 0;
  local_90 = 0;
  local_98 = 0;
  local_80 = 0x80000000;
  local_88.field7 = 0;
  local_78 = 1;
  local_c0 = 0x80000000;
  local_c8.field7 = 0;
  local_b8 = 1;
  CMessageManager::showMessageBox
            (iVar3,(QString *)0x3b1a,(QStringList *)(param_1 + 0x10),
             (QStringList *)&local_40[0].field0,(CSlotInfo *)&local_58,SUB81(&local_a8,0),
             (QWidget *)((ulong)in_stack_fffffffffffffefc << 0x20),(CSlotInfo *)0x0);
  QVariant::~QVariant((QVariant *)&local_c8);
  QVariant::~QVariant((QVariant *)&local_88);
  if (local_a8 != (int *)0x0) {
    LOCK();
    *local_a8 = *local_a8 + -1;
    local_40[1]._7_1_ = *local_a8 != 0;
    UNLOCK();
    if ((!(bool)local_40[1]._7_1_) && (local_a8 != (int *)0x0)) {
      operator_delete(local_a8);
    }
  }
  FUN_100039a80(&local_58);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_40[1]._7_1_ = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_40[1]._7_1_) goto LAB_1007b686f;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1007b686f:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_40[1]._7_1_ = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_40[1]._7_1_) goto LAB_1007b689f;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1007b689f:
  FUN_100039a80(local_40);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_40[1]._7_1_ = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_40[1]._7_1_) goto LAB_1007b68d8;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1007b68d8:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return 0;
      }
      local_40[1]._7_1_ = 0;
    }
    QArrayData::deallocate(local_50,2,8);
  }
  return 0;
}

