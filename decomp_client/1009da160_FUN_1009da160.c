
mach_port_t
FUN_1009da160(mach_port_t *param_1,mach_msg_header_t *param_2,mach_msg_timeout_t param_3)

{
  mach_port_t mVar1;
  
  mVar1 = 0x12;
  if ((param_2->msgh_size != 0) && (mVar1 = param_1[1], mVar1 == 0)) {
    param_2->msgh_remote_port = *param_1;
    mVar1 = _mach_msg(param_2,0x11,param_2->msgh_size,0,0,param_3,0);
  }
  return mVar1;
}

