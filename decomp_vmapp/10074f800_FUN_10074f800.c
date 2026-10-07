
void FUN_10074f800(long param_1)

{
  kern_return_t kVar1;
  int iVar2;
  long *plVar3;
  int *piVar4;
  char *pcVar5;
  sigaction local_28;
  
  *(undefined1 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0x20;
  *(undefined2 *)(param_1 + 0x2b0) = 0;
  plVar3 = (long *)(*(code *)PTR___tlv_bootstrap_1011b61b8)();
  if (*plVar3 != 0) {
    FUN_1008e3970("","Compression",0,"signalWrap() failed, object alreay has");
    return;
  }
  kVar1 = _task_swap_exception_ports
                    (*(task_t *)PTR__mach_task_self__100ba25d0,2,0,1,0xd,
                     (exception_mask_array_t)(param_1 + 0xb0),
                     (mach_msg_type_number_t *)(param_1 + 0xac),
                     (exception_handler_array_t)(param_1 + 0x130),
                     (exception_behavior_array_t)(param_1 + 0x1b0),
                     (exception_flavor_array_t)(param_1 + 0x230));
  if (kVar1 != 0) {
    FUN_1008e3970("","Compression",0,"task_swap_exception_ports() failed: %d");
    return;
  }
  *(undefined1 *)(param_1 + 0xa8) = 1;
  local_28.__sigaction_u.__sa_handler = FUN_10074f970;
  local_28.sa_mask = 0;
  local_28.sa_flags = 0x40;
  iVar2 = _sigaction(10,&local_28,(sigaction *)(param_1 + 0x98));
  if (iVar2 == 0) {
    *(undefined1 *)(param_1 + 0x2b0) = 1;
    plVar3 = (long *)(*(code *)PTR___tlv_bootstrap_1011b61b8)();
    *plVar3 = param_1;
  }
  else {
    piVar4 = ___error();
    pcVar5 = _strerror(*piVar4);
    FUN_1008e3970("","Compression",0,"sigaction() failed: %s",pcVar5);
  }
  return;
}

