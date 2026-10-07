
undefined8 FUN_100573920(long *param_1,long param_2,int *param_3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar7 = (ulong)*(uint *)(param_1 + 0x22b) + param_2;
  uVar1 = *(uint *)(param_1 + 0x224);
  lVar4 = (**(code **)(*param_1 + 0x2e0))();
  if ((ulong)param_1[0x22a] < uVar7) {
    *param_3 = -0x7ffdefd8;
    uVar6 = 0;
  }
  else {
    local_50 = 0xffffffffffffffff;
    local_58 = -1;
    local_40 = 0;
    local_48 = 0;
    iVar3 = (**(code **)(*param_1 + 0x358))(param_1,0xffffffff,uVar7,&local_58);
    lVar2 = local_58;
    *param_3 = iVar3;
    if (iVar3 < 0) {
      uVar6 = 0;
      FUN_1008e3970("","vdisk",0,"Error getting group element pointer at GetAdjustedHanlde 0x%x",
                    iVar3);
    }
    else if (local_50._4_4_ == -1) {
      *param_3 = -0x7ffddffd;
      uVar6 = 0;
    }
    else {
      lVar5 = (**(code **)(*param_1 + 0x2e0))(param_1);
      uVar6 = FUN_100594e40(*(undefined8 *)(param_1[0x225] + (local_50 >> 0x20) * 8),
                            local_50 & 0xffffffff,
                            (lVar4 * (uVar7 % (ulong)uVar1) & 0xffffffff) + lVar2 * lVar5,param_3);
    }
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

