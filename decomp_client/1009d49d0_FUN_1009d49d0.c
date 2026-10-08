
undefined8 FUN_1009d49d0(long param_1)

{
  task_t task;
  void *pvVar1;
  int iVar2;
  kern_return_t kVar3;
  sigaction *psVar4;
  mach_msg_type_number_t *masksCnt;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined8 uVar5;
  bool bVar6;
  sigaction local_28;
  
  if (DAT_1023137c8 == 0) {
    if (*(long *)(param_1 + 0xf0) == 0) {
      local_28.__sigaction_u.__sa_handler = FUN_1009d4980;
      local_28.sa_mask = 0x20;
      local_28.sa_flags = 0x40;
      psVar4 = operator_new(0x10);
      iVar2 = _sigaction(6,&local_28,psVar4);
      if (iVar2 == -1) {
        operator_delete(psVar4);
        goto LAB_1009d4ade;
      }
      pvVar1 = *(void **)(param_1 + 0xe8);
      *(sigaction **)(param_1 + 0xe8) = psVar4;
      DAT_1023137c8 = param_1;
      if (pvVar1 != (void *)0x0) {
        operator_delete(pvVar1);
      }
    }
    masksCnt = operator_new(0xe4);
    *(mach_msg_type_number_t **)(param_1 + 0x90) = masksCnt;
    *masksCnt = 0xe;
    task = *(task_t *)PTR__mach_task_self__1021e1c58;
    kVar3 = _task_get_exception_ports
                      (task,DAT_10227e2f8,masksCnt + 1,masksCnt,masksCnt + 0xf,
                       (exception_behavior_array_t)(masksCnt + 0x1d),
                       (exception_flavor_array_t)(masksCnt + 0x2b));
    uVar5 = CONCAT44(extraout_var,kVar3);
    if (kVar3 == 0) {
      kVar3 = _task_set_exception_ports(task,DAT_10227e2f8,*(mach_port_t *)(param_1 + 0x88),1,0xd);
      uVar5 = CONCAT44(extraout_var_00,kVar3);
    }
    bVar6 = (int)uVar5 == 0;
    uVar5 = CONCAT71((int7)((ulong)uVar5 >> 8),bVar6);
    *(bool *)(param_1 + 0x98) = bVar6;
  }
  else {
LAB_1009d4ade:
    uVar5 = 0;
  }
  return uVar5;
}

