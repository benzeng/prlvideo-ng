
bool FUN_100429ef0(long param_1,thread_act_t param_2,thread_state_t param_3,
                  mach_msg_type_number_t *param_4)

{
  uint uVar1;
  uint uVar2;
  mach_port_t mVar3;
  kern_return_t kVar4;
  size_t sVar5;
  thread_state_flavor_t flavor;
  uint uVar6;
  bool bVar7;
  
  if (((*(long *)(param_1 + 0x40) == 0) || (mVar3 = _mach_thread_self(), mVar3 != param_2)) ||
     (uVar1 = *(uint *)(param_1 + 0x38), (uVar1 | 0x1000000) != 0x1000007)) {
    flavor = 1;
    if (*(int *)(param_1 + 0x38) != 7) {
      if (*(int *)(param_1 + 0x38) != 0x1000007) {
        return false;
      }
      flavor = 4;
    }
    kVar4 = _thread_get_state(param_2,flavor,param_3,param_4);
    bVar7 = kVar4 == 0;
  }
  else {
    sVar5 = 0xa8;
    if (uVar1 == 7) {
      sVar5 = 0x40;
    }
    uVar2 = *param_4;
    uVar6 = 0xa8;
    if (uVar1 == 7) {
      uVar6 = 0x40;
    }
    if (uVar2 <= sVar5) {
      uVar6 = uVar2;
      sVar5 = (ulong)uVar2;
    }
    _memcpy(param_3,(void *)(*(long *)(*(long *)(param_1 + 0x40) + 0x30) + 0x10),sVar5);
    *param_4 = uVar6;
    bVar7 = true;
  }
  return bVar7;
}

