
kern_return_t
FUN_100426890(mach_port_t param_1,mach_port_t param_2,exception_type_t param_3,
             exception_data_t param_4,mach_msg_type_number_t param_5)

{
  kern_return_t kVar1;
  ulong uVar2;
  mach_msg_type_number_t local_118;
  exception_mask_t local_114 [14];
  exception_handler_t local_dc [14];
  exception_behavior_t local_a4 [14];
  thread_state_flavor_t local_6c [15];
  
  local_118 = 0xe;
  _task_get_exception_ports
            (*(task_t *)PTR__mach_task_self__100ba25d0,DAT_10111c488,local_114,&local_118,local_dc,
             local_a4,local_6c);
  uVar2 = 0;
  if (local_118 != 0) {
    uVar2 = 0;
    do {
      if ((local_114[uVar2] & 1 << ((byte)param_3 & 0x1f)) != 0) break;
      uVar2 = uVar2 + 1;
    } while ((uint)uVar2 < local_118);
  }
  if ((uint)uVar2 != local_118) {
    if (local_a4[uVar2 & 0xffffffff] == 1) {
      kVar1 = _exception_raise(local_dc[uVar2 & 0xffffffff],param_2,param_1,param_3,param_4,param_5)
      ;
    }
    else {
      _fprintf(*(FILE **)PTR____stderrp_100ba2328,"** Unknown exception behavior: %d\n");
      kVar1 = 5;
    }
    return kVar1;
  }
  _fwrite("** No previous ports for forwarding!! \n",0x27,1,*(FILE **)PTR____stderrp_100ba2328);
                    /* WARNING: Subroutine does not return */
  _exit(5);
}

