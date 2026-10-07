
bool FUN_1003e73a0(long *param_1)

{
  long lVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined2 local_48;
  undefined8 local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_30 = 0;
  local_38 = 0x10000001e;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  pcVar2 = *(code **)(*param_1 + 0xb0);
  local_28 = lVar1;
  uVar3 = (**(code **)(*(long *)param_1[6] + 0xa0))((long *)param_1[6],0,0,0);
  iVar4 = (*pcVar2)(param_1,uVar3,&local_38,0,0,0,&local_58,0x12,0);
  if ((iVar4 == 0) && (((byte)local_58 & 0x70) != 0x70)) {
    *(undefined4 *)((long)param_1 + 0x8c) = 1;
    bVar5 = true;
  }
  else {
    bVar5 = *(int *)((long)param_1 + 0x8c) != 0;
  }
  if (lVar1 == local_28) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

