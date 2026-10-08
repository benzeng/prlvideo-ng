
undefined8 FUN_1009d4480(long param_1)

{
  mach_port_t mVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  mach_msg_return_t mVar4;
  kern_return_t kVar5;
  mach_port_t mVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  bool bVar10;
  mach_msg_header_t local_2b0;
  uint local_28c;
  mach_msg_header_t local_288;
  undefined4 local_26c;
  task_t local_260;
  int local_24c;
  undefined4 local_244;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  do {
    while( true ) {
      do {
        local_288.msgh_local_port = *(mach_port_name_t *)(param_1 + 0x88);
        local_288.msgh_size = 0x24c;
        mVar4 = _mach_msg(&local_288,6,0,0x24c,local_288.msgh_local_port,0,0);
      } while (mVar4 != 0);
      if (local_24c != 0) break;
      if (local_288.msgh_id == 2) {
        if (*(long *)PTR____stack_chk_guard_1021e1840 == local_38) {
          return 0;
        }
                    /* WARNING: Subroutine does not return */
        ___stack_chk_fail();
      }
      kVar5 = _task_threads(*(task_t *)PTR__mach_task_self__1021e1c58,
                            (thread_act_array_t *)&local_2b0,&local_28c);
      if ((kVar5 == 0) && (uVar8 = 0, local_28c != 0)) {
        do {
          mVar1 = *(mach_port_t *)(CONCAT44(local_2b0.msgh_size,local_2b0.msgh_bits) + uVar8 * 4);
          mVar6 = _mach_thread_self();
          if ((mVar1 != mVar6) &&
             (kVar5 = _thread_suspend(*(thread_act_t *)
                                       (CONCAT44(local_2b0.msgh_size,local_2b0.msgh_bits) +
                                       uVar8 * 4)), kVar5 != 0)) break;
          uVar8 = uVar8 + 1;
        } while (uVar8 < local_28c);
      }
      bVar10 = local_288.msgh_id == 1;
      uVar2 = local_26c;
      if (!bVar10) {
        uVar2 = 0;
      }
      uVar9 = 0;
      if (bVar10) {
        uVar9 = 6;
      }
      uVar3 = FUN_1009d4210(param_1,uVar9,bVar10 * '\x02',0,0,uVar2,0,0);
      *(undefined1 *)(param_1 + 0x9a) = uVar3;
      kVar5 = _task_threads(*(task_t *)PTR__mach_task_self__1021e1c58,
                            (thread_act_array_t *)&local_2b0,&local_28c);
      if ((kVar5 == 0) && (uVar8 = 0, local_28c != 0)) {
        do {
          mVar1 = *(mach_port_t *)(CONCAT44(local_2b0.msgh_size,local_2b0.msgh_bits) + uVar8 * 4);
          mVar6 = _mach_thread_self();
          if ((mVar1 != mVar6) &&
             (kVar5 = _thread_resume(*(thread_act_t *)
                                      (CONCAT44(local_2b0.msgh_size,local_2b0.msgh_bits) + uVar8 * 4
                                      )), kVar5 != 0)) break;
          uVar8 = uVar8 + 1;
        } while (uVar8 < local_28c);
      }
      if (*(char *)(param_1 + 0xe0) != '\0') {
        _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0xa0));
      }
    }
    if (local_260 == *(task_t *)PTR__mach_task_self__1021e1c58) {
      kVar5 = _task_threads(local_260,(thread_act_array_t *)&local_2b0,&local_28c);
      if ((kVar5 == 0) && (uVar8 = 0, local_28c != 0)) {
        do {
          mVar1 = *(mach_port_t *)(CONCAT44(local_2b0.msgh_size,local_2b0.msgh_bits) + uVar8 * 4);
          mVar6 = _mach_thread_self();
          if ((mVar1 != mVar6) &&
             (kVar5 = _thread_suspend(*(thread_act_t *)
                                       (CONCAT44(local_2b0.msgh_size,local_2b0.msgh_bits) +
                                       uVar8 * 4)), kVar5 != 0)) break;
          uVar8 = uVar8 + 1;
        } while (uVar8 < local_28c);
      }
      FUN_1009d4210(param_1,local_24c,local_244);
      FUN_1009d4890(param_1,1);
    }
    iVar7 = _exc_server(&local_288,&local_2b0);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      _exit(1);
    }
    _mach_msg(&local_2b0,1,local_2b0.msgh_size,0,0,0,0);
  } while( true );
}

