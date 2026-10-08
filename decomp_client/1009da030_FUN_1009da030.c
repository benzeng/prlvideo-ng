
mach_port_name_t
FUN_1009da030(mach_port_name_t *param_1,mach_msg_header_t *param_2,mach_msg_timeout_t param_3)

{
  mach_msg_option_t option;
  mach_port_name_t mVar1;
  
  mVar1 = 4;
  if ((param_2 != (mach_msg_header_t *)0x0) && (mVar1 = param_1[1], mVar1 == 0)) {
    param_2->msgh_bits = 0;
    mVar1 = *param_1;
    param_2->msgh_local_port = mVar1;
    param_2->msgh_remote_port = 0;
    param_2->msgh_reserved = 0;
    param_2->msgh_id = 0;
    option = 0x102;
    if (param_3 == 0) {
      option = 2;
    }
    mVar1 = _mach_msg(param_2,option,0,0x41c,mVar1,param_3,0);
  }
  return mVar1;
}

