
undefined1 FUN_1009d3c60(long param_1)

{
  long lVar1;
  char cVar2;
  mach_msg_return_t mVar3;
  kern_return_t kVar4;
  undefined1 uVar5;
  mach_msg_header_t local_280 [24];
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  *(undefined1 *)(param_1 + 0x99) = 1;
  uVar5 = 0;
  local_30 = lVar1;
  cVar2 = FUN_1009d4890(param_1,0);
  if (cVar2 != '\0') {
    ___bzero(local_280,0x24c);
    local_280[0].msgh_id = 2;
    local_280[0].msgh_size = 0x4c;
    local_280[0].msgh_remote_port = *(mach_port_t *)(param_1 + 0x88);
    local_280[0].msgh_bits = 0x1513;
    uVar5 = 0;
    mVar3 = _mach_msg(local_280,0x11,0x4c,0,0,0,0);
    if (mVar3 == 0) {
      kVar4 = _mach_port_deallocate
                        (*(ipc_space_t *)PTR__mach_task_self__1021e1c58,
                         *(mach_port_name_t *)(param_1 + 0x88));
      if (kVar4 == 0) {
        *(undefined8 *)(param_1 + 0x80) = 0;
        *(undefined4 *)(param_1 + 0x88) = 0;
        _pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0xa0));
        uVar5 = 1;
      }
      else {
        uVar5 = 0;
      }
    }
  }
  if (lVar1 == local_30) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

