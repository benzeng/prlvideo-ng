
undefined8 FUN_1004270b0(long param_1,uint param_2)

{
  long lVar1;
  mach_msg_return_t mVar2;
  undefined4 extraout_var;
  mach_msg_header_t local_278;
  mach_port_t local_25c;
  undefined4 local_254;
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_28 = lVar1;
  ___bzero(&local_278,0x24c);
  local_278.msgh_id = param_2;
  if (param_2 < 2) {
    local_25c = _mach_thread_self();
    local_254 = 0x110000;
  }
  local_278.msgh_size = 0x4c;
  local_278.msgh_remote_port = *(mach_port_t *)(param_1 + 0x88);
  local_278.msgh_bits = 0x1513;
  mVar2 = _mach_msg(&local_278,0x11,0x4c,0,0,0,0);
  if (lVar1 == local_28) {
    return CONCAT71((int7)(CONCAT44(extraout_var,mVar2) >> 8),mVar2 == 0);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

