
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001c2610(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  local_38 = _DAT_100e15fc0;
  uStack_34 = _UNK_100e15fc4;
  uStack_30 = _UNK_100e15fc8;
  uStack_2c = _UNK_100e15fcc;
  local_20 = lVar1;
  uVar2 = _GetApplicationEventTarget();
  _InstallEventHandler(uVar2,FUN_1001c2540,2,&local_38,param_1,param_1 + 0x10);
  if (lVar1 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

