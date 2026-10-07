
void FUN_1003e90f0(long *param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 local_30;
  undefined4 local_28;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  *param_1 = (long)&PTR_FUN_100bbec90;
  local_20 = lVar1;
  if (*(int *)((long)param_1 + 0x2c) != 0) {
    local_28 = 0;
    local_30 = 0x1b;
    uVar2 = (**(code **)(*(long *)param_1[6] + 0xa0))((long *)param_1[6],0,0,0);
    FUN_1003f16c0(param_1,uVar2,&local_30,0,0,0,0,0,0);
    (**(code **)(*param_1 + 0x50))(param_1);
  }
  FUN_1003e8f80(param_1);
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)((long)param_1 + 0xc4) = 0;
  *(undefined4 *)((long)param_1 + 0x7c) = 2;
  *(undefined4 *)((long)param_1 + 0x84) = 1;
  *(undefined4 *)(param_1 + 0x11) = 0;
  FUN_1003e07d0(param_1);
  if (lVar1 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

