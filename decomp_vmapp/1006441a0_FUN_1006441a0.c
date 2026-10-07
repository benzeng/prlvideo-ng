
void FUN_1006441a0(long param_1)

{
  long lVar1;
  QString QVar2;
  uint uVar3;
  CHostHardwareInfo *this;
  QArrayData *local_60;
  string local_58;
  undefined1 local_57 [15];
  undefined1 *local_48;
  undefined1 local_39;
  undefined1 local_38 [16];
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_28 = lVar1;
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x18) + 0x88))();
  }
  this = operator_new(0x1c8);
  CHostHardwareInfo::CHostHardwareInfo(this);
  *(CHostHardwareInfo **)(param_1 + 0x18) = this;
  uVar3 = CHostHardwareInfoBase::getMemorySettings();
  CHwMemorySettings::setHostRamSize(uVar3);
  FUN_100712be0(&local_58,5);
  if (((byte)local_58 & 1) == 0) {
    local_48 = local_57;
  }
  FUN_1007d6940(local_38,local_48);
  std::string::~string(&local_58);
  QVar2.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_1 + 0x18);
  FUN_1007d6a70(&local_60,local_38);
  CHostHardwareInfoBase::setHardwareUuid(QVar2);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_39 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_39) goto LAB_10064427b;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10064427b:
  FUN_100038db0(param_1 + 8);
  if (lVar1 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

