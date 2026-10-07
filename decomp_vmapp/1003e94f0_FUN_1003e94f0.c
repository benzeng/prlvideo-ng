
void FUN_1003e94f0(long *param_1)

{
  long lVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined8 local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_30 = 0;
  local_38 = 0x30000001b;
  pcVar2 = *(code **)(*param_1 + 0xb0);
  local_28 = lVar1;
  uVar3 = (**(code **)(*(long *)param_1[6] + 0xa0))((long *)param_1[6],0,0,0);
  (*pcVar2)(param_1,uVar3,&local_38,0,0,0,0,0,0);
  if (lVar1 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

