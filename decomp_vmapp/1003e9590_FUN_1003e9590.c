
bool FUN_1003e9590(long *param_1)

{
  long lVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined2 local_48;
  undefined8 local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_60 = 0;
  local_68 = 0;
  local_38 = 0xbd;
  local_30 = 0x800;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  pcVar2 = *(code **)(*param_1 + 0xb0);
  local_28 = lVar1;
  uVar3 = (**(code **)(*(long *)param_1[6] + 0xa0))((long *)param_1[6],0,0,0);
  (*pcVar2)(param_1,uVar3,&local_38,2,&local_60,8,&local_58,0x12,&local_68);
  if (((uint)local_58 & 0x70) == 0x70) {
    if (lVar1 == local_28) {
      return ((uint)(uStack_50._4_2_ >> 8) |
             (uStack_50._4_2_ & 0xff) << 8 | (uint)local_58 & 0xff0000) == 0x23a02;
    }
  }
  else if (lVar1 == local_28) {
    return (bool)(local_60._1_1_ >> 4 & 1);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

