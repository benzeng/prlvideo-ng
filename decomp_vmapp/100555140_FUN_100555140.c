
undefined1
FUN_100555140(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,char param_5)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  undefined1 uVar4;
  ulong local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_48 = (ulong)*(uint *)(*(long *)(param_1 + 8) + 0x20);
  plVar2 = *(long **)(param_1 + 0x68);
  uVar4 = 1;
  local_40 = param_4;
  local_38 = lVar1;
  if (plVar2 != (long *)0x0) {
    if (param_5 == '\0') {
      iVar3 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3,&local_48);
    }
    else {
      iVar3 = (**(code **)(*plVar2 + 0x38))();
    }
    if (iVar3 < 0) {
      uVar4 = 0;
      FUN_1008e3970("","TransMem",0,"CSnapshotImpl::io_callback_impl(%p[%u], write=%d) failed (%d)",
                    param_2,param_3,param_5,iVar3);
    }
  }
  if (lVar1 == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

