
bool FUN_1009d3d80(long param_1,uint param_2)

{
  pthread_mutex_t *ppVar1;
  long lVar2;
  int iVar3;
  mach_msg_return_t mVar4;
  bool bVar5;
  mach_msg_header_t local_288;
  mach_port_t local_26c;
  undefined4 local_264;
  long local_38;
  
  lVar2 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar2;
  if (*(char *)(param_1 + 0xe0) == '\0') {
    *(undefined1 *)(param_1 + 0xe0) = 1;
    *(undefined1 *)(param_1 + 0x9a) = 0;
    ppVar1 = (pthread_mutex_t *)(param_1 + 0xa0);
    iVar3 = _pthread_mutex_lock(ppVar1);
    if (iVar3 == 0) {
      ___bzero(&local_288,0x24c);
      local_288.msgh_id = param_2 & 0xff;
      local_26c = _mach_thread_self();
      local_264 = 0x110000;
      local_288.msgh_size = 0x4c;
      local_288.msgh_remote_port = *(mach_port_t *)(param_1 + 0x88);
      local_288.msgh_bits = 0x1513;
      mVar4 = _mach_msg(&local_288,0x11,0x4c,0,0,0,0);
      if (mVar4 != 0) {
        _pthread_mutex_unlock(ppVar1);
        bVar5 = false;
        goto LAB_1009d3e81;
      }
      _pthread_mutex_lock(ppVar1);
    }
    *(undefined1 *)(param_1 + 0xe0) = 0;
    FUN_1009d3f60(param_1);
    bVar5 = *(char *)(param_1 + 0x9a) != '\0';
  }
  else {
    bVar5 = false;
  }
LAB_1009d3e81:
  if (lVar2 == local_38) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

