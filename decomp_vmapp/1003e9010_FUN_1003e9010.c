
undefined8 FUN_1003e9010(long *param_1)

{
  long lVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined8 local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_28 = lVar1;
  if (*(int *)((long)param_1 + 0x2c) != 0) {
    local_30 = 0;
    local_38 = 0x1b;
    pcVar2 = *(code **)(*param_1 + 0xb0);
    uVar3 = (**(code **)(*(long *)param_1[6] + 0xa0))((long *)param_1[6],0,0,0);
    (*pcVar2)(param_1,uVar3,&local_38,0,0,0,0,0,0);
    (**(code **)(*param_1 + 0x50))(param_1);
  }
  FUN_1003e8f80(param_1);
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)((long)param_1 + 0xc4) = 0;
  *(undefined4 *)((long)param_1 + 0x7c) = 2;
  *(undefined4 *)((long)param_1 + 0x84) = 1;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (lVar1 == local_28) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

