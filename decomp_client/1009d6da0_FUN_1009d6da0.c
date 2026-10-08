
undefined8 FUN_1009d6da0(long param_1,thread_act_t param_2,thread_act_t *param_3)

{
  thread_act_t *ptVar1;
  undefined8 *puVar2;
  char cVar3;
  mach_port_t mVar4;
  kern_return_t kVar5;
  undefined8 uVar6;
  size_t sVar7;
  long lVar8;
  thread_state_flavor_t flavor;
  mach_msg_type_number_t mVar9;
  uint uVar10;
  int *local_3c8;
  mach_msg_type_number_t local_3bc;
  natural_t local_3b8 [7];
  uint local_39c;
  ulong local_380;
  long local_38;
  
  lVar8 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_3bc = 0x380;
  local_38 = lVar8;
  if (((*(long *)(param_1 + 0x40) == 0) || (mVar4 = _mach_thread_self(), mVar4 != param_2)) ||
     (uVar10 = *(uint *)(param_1 + 0x38), (uVar10 | 0x1000000) != 0x1000007)) {
    flavor = 1;
    if (*(int *)(param_1 + 0x38) != 7) {
      if (*(int *)(param_1 + 0x38) != 0x1000007) {
        uVar6 = 0;
        goto LAB_1009d6f74;
      }
      flavor = 4;
    }
    kVar5 = _thread_get_state(param_2,flavor,local_3b8,&local_3bc);
    if (kVar5 != 0) {
      uVar6 = 0;
      goto LAB_1009d6f74;
    }
    uVar10 = *(uint *)(param_1 + 0x38);
  }
  else {
    sVar7 = 0xa8;
    if (uVar10 == 7) {
      sVar7 = 0x40;
    }
    mVar9 = 0xa8;
    if (uVar10 == 7) {
      mVar9 = 0x40;
    }
    _memcpy(local_3b8,(void *)(*(long *)(*(long *)(param_1 + 0x40) + 0x30) + 0x10),sVar7);
    local_3bc = mVar9;
  }
  local_3c8 = (int *)(param_1 + 0x38);
  ptVar1 = param_3 + 6;
  if (uVar10 == 7) {
    local_380 = (ulong)local_39c;
LAB_1009d6ebe:
    cVar3 = FUN_1009d6720(param_1,local_380,ptVar1);
    if (cVar3 != '\0') {
      puVar2 = *(undefined8 **)(param_1 + 0x80);
      if (puVar2 == *(undefined8 **)(param_1 + 0x88)) {
        FUN_1009d7ab0(param_1 + 0x78,ptVar1);
      }
      else {
        uVar6 = *(undefined8 *)ptVar1;
        puVar2[1] = *(undefined8 *)(param_3 + 8);
        *puVar2 = uVar6;
        *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x80) + 0x10;
      }
      lVar8 = *(long *)PTR____stack_chk_guard_1021e1840;
      if (*local_3c8 == 7) {
        cVar3 = FUN_1009d6930(param_1,local_3b8);
        if (cVar3 == '\0') {
          uVar6 = 0;
          goto LAB_1009d6f74;
        }
      }
      else {
        if (*local_3c8 != 0x1000007) {
          uVar6 = 0;
          goto LAB_1009d6f74;
        }
        cVar3 = FUN_1009d6ad0(param_1,local_3b8,param_3 + 10);
        if (cVar3 == '\0') {
          uVar6 = 0;
          goto LAB_1009d6f74;
        }
      }
      *param_3 = param_2;
      uVar6 = 1;
      goto LAB_1009d6f74;
    }
  }
  else if (uVar10 == 0x1000007) goto LAB_1009d6ebe;
  uVar6 = 0;
  lVar8 = *(long *)PTR____stack_chk_guard_1021e1840;
LAB_1009d6f74:
  if (lVar8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar6;
}

