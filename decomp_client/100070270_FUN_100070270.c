
void FUN_100070270(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = 0x6d656e75;
  local_34 = 1;
  local_30 = 0x6d656e75;
  local_2c = 2;
  *(undefined8 *)(param_1 + 0x38) = 0;
  local_20 = lVar1;
  uVar2 = _GetApplicationEventTarget();
  _InstallEventHandler(uVar2,FUN_1000701f0,2,&local_38,param_1,param_1 + 0x38);
  if (lVar1 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

