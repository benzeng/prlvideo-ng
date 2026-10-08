
undefined1 FUN_1009d6fa0(long param_1,undefined4 *param_2)

{
  thread_act_t target_act;
  long lVar1;
  char cVar2;
  mach_port_t mVar3;
  kern_return_t kVar4;
  size_t sVar5;
  undefined1 uVar6;
  uint uVar7;
  thread_state_flavor_t flavor;
  uint uVar8;
  mach_msg_type_number_t local_484;
  long local_480;
  undefined4 local_478;
  undefined4 local_470 [2];
  thread_act_t local_468 [2];
  undefined4 local_460;
  undefined4 local_45c;
  ulong local_450;
  undefined1 local_3c8 [8];
  int local_3c0;
  natural_t local_3b8 [10];
  uint local_390;
  ulong local_338;
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_480 = param_1 + 8;
  local_478 = *(undefined4 *)(param_1 + 0x10);
  local_38 = lVar1;
  ___bzero(local_470,0xb0);
  local_3c0 = 1;
  cVar2 = FUN_1009cf2f0(&local_480,0xa8);
  if (cVar2 == '\0') {
    uVar6 = 0;
  }
  else {
    *param_2 = 6;
    *(ulong *)(param_2 + 1) = CONCAT44(local_478,local_470[0]);
    target_act = *(thread_act_t *)(param_1 + 0x2c);
    local_460 = *(undefined4 *)(param_1 + 0x20);
    local_45c = *(undefined4 *)(param_1 + 0x24);
    local_484 = 0x380;
    local_468[0] = target_act;
    if (((*(long *)(param_1 + 0x40) == 0) || (mVar3 = _mach_thread_self(), mVar3 != target_act)) ||
       (uVar8 = *(uint *)(param_1 + 0x38), (uVar8 | 0x1000000) != 0x1000007)) {
      flavor = 1;
      if (*(int *)(param_1 + 0x38) != 7) {
        if (*(int *)(param_1 + 0x38) != 0x1000007) {
          uVar6 = 0;
          goto LAB_1009d7195;
        }
        flavor = 4;
      }
      kVar4 = _thread_get_state(target_act,flavor,local_3b8,&local_484);
      if (kVar4 != 0) {
        uVar6 = 0;
        goto LAB_1009d7195;
      }
      uVar8 = *(uint *)(param_1 + 0x38);
    }
    else {
      sVar5 = 0xa8;
      if (uVar8 == 7) {
        sVar5 = 0x40;
      }
      uVar7 = 0xa8;
      if (uVar8 == 7) {
        uVar7 = 0x40;
      }
      if (local_484 <= sVar5) {
        uVar7 = local_484;
        sVar5 = (ulong)local_484;
      }
      _memcpy(local_3b8,(void *)(*(long *)(*(long *)(param_1 + 0x40) + 0x30) + 0x10),sVar5);
      local_484 = uVar7;
    }
    if (uVar8 == 0x1000007) {
      cVar2 = FUN_1009d6ad0(param_1,local_3b8);
    }
    else {
      if (uVar8 != 7) {
        uVar6 = 0;
        goto LAB_1009d7195;
      }
      cVar2 = FUN_1009d6930(param_1,local_3b8,local_3c8);
    }
    if (cVar2 == '\0') {
      uVar6 = 0;
    }
    else {
      if (*(int *)(param_1 + 0x20) == 1) {
        local_338 = (long)*(int *)(param_1 + 0x28);
      }
      else if ((*(int *)(param_1 + 0x38) != 0x1000007) &&
              (local_338 = 0, *(int *)(param_1 + 0x38) == 7)) {
        local_338 = (ulong)local_390;
      }
      uVar6 = 1;
      local_450 = local_338;
    }
  }
LAB_1009d7195:
  if (local_3c0 != 2) {
    FUN_1009cf3f0(local_480,local_478,local_468,0xa8);
  }
  if (lVar1 == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

