
undefined1
FUN_100555240(long param_1,undefined8 param_2,undefined4 param_3,char param_4,undefined8 param_5)

{
  long *plVar1;
  int iVar2;
  undefined1 uVar3;
  
  plVar1 = *(long **)(param_1 + 0x68);
  uVar3 = 1;
  if (plVar1 != (long *)0x0) {
    if (param_4 == '\0') {
      iVar2 = (**(code **)(*plVar1 + 0x40))(plVar1,param_2,param_3,param_5);
    }
    else {
      iVar2 = (**(code **)(*plVar1 + 0x38))();
    }
    if (iVar2 < 0) {
      uVar3 = 0;
      FUN_1008e3970("","TransMem",0,"CSnapshotImpl::io_callback_impl(%p[%u], write=%d) failed (%d)",
                    param_2,param_3,param_4,iVar2);
    }
  }
  return uVar3;
}

