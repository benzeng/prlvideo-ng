
void FUN_100365b90(long param_1,long param_2,undefined4 param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = 0;
  uStack_30 = 0;
  plVar2 = *(long **)(param_1 + 0x20);
  local_20 = lVar1;
  if ((*(ushort *)(param_2 + 0xb0) & 0x40) == 0) {
    (**(code **)(*plVar2 + 0x18))(plVar2,param_2,0,param_3,1,0,&local_38);
  }
  else {
    (**(code **)(*plVar2 + 0x20))(0,plVar2,param_2,0,param_3,1,0,1,1,0);
  }
  if (lVar1 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

