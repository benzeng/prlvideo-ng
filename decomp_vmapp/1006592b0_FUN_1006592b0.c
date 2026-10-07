
void FUN_1006592b0(void)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  kern_return_t kVar4;
  long lVar5;
  AdvancedMemoryInfo *pAVar6;
  AdvancedMemoryInfo *this;
  mach_msg_type_number_t local_107c;
  undefined1 local_1078 [64];
  integer_t local_1038 [1026];
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_30 = lVar1;
  CHostHardwareInfoBase::getMemorySettings();
  lVar5 = CHwMemorySettings::getAdvancedMemoryInfo();
  if (lVar5 == 0) {
    pAVar6 = (AdvancedMemoryInfo *)CHostHardwareInfoBase::getMemorySettings();
    this = operator_new(0xb0);
    AdvancedMemoryInfo::AdvancedMemoryInfo(this);
    CHwMemorySettings::setAdvancedMemoryInfo(pAVar6);
  }
  CHostHardwareInfoBase::getMemorySettings();
  uVar2 = CHwMemorySettings::getAdvancedMemoryInfo();
  iVar3 = FUN_100779e40(local_1078);
  if (iVar3 == 0) {
    AdvancedMemoryInfo::setFreeMemSize(uVar2);
    AdvancedMemoryInfo::setWireMemSize(uVar2);
    AdvancedMemoryInfo::setInactiveMemSize(uVar2);
    AdvancedMemoryInfo::setActiveMemSize(uVar2);
  }
  else {
    FUN_1008e3970("","pvsHostInfo",0,"cannot setup memory from host_statistics");
  }
  local_107c = 10;
  kVar4 = _task_info(*(task_name_t *)PTR__mach_task_self__100ba25d0,5,local_1038,&local_107c);
  if (kVar4 == 0) {
    AdvancedMemoryInfo::setVirtualMemSize(uVar2);
    AdvancedMemoryInfo::setResidentMemSize(uVar2);
  }
  else {
    FUN_1008e3970("","pvsHostInfo",0,"task_info failed. Error code = [%d]",kVar4);
  }
  if (lVar1 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

