
undefined4 FUN_1003e6630(long *param_1)

{
  long lVar1;
  code *pcVar2;
  byte *pbVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  undefined8 local_40;
  undefined4 local_38;
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = 0;
  local_40 = 0;
  pcVar2 = *(code **)(*param_1 + 0xb0);
  uVar6 = 0;
  local_30 = lVar1;
  uVar4 = (**(code **)(*(long *)param_1[6] + 0xa0))((long *)param_1[6],0,0,0);
  iVar5 = (*pcVar2)(param_1,uVar4,&local_40,0,0,0,param_1[0xc],0x12,0);
  if (-1 < iVar5) {
    *(undefined4 *)(param_1 + 0x11) = 1;
    *(undefined4 *)((long)param_1 + 0x84) = 0;
    *(undefined4 *)((long)param_1 + 0x7c) = 0;
    (**(code **)(*param_1 + 0x260))(param_1);
    goto LAB_1003e6799;
  }
  pbVar3 = (byte *)param_1[0xc];
  if ((*pbVar3 & 0x70) != 0x70) {
    uVar6 = (**(code **)(*param_1 + 0x268))(param_1,0x52400);
    goto LAB_1003e6799;
  }
  uVar8 = (uint)pbVar3[0xc] << 8 | (uint)pbVar3[2] << 0x10;
  uVar9 = pbVar3[0xd] | uVar8;
  if (uVar8 == 0x23a00) {
    *(undefined4 *)(param_1 + 0x11) = 0;
    *(undefined4 *)((long)param_1 + 0x84) = 1;
    *(undefined4 *)((long)param_1 + 0x7c) = 2;
LAB_1003e678a:
    lVar7 = *param_1;
  }
  else {
    if (uVar9 == 0) {
      uVar6 = (**(code **)(*param_1 + 0x260))(param_1);
      goto LAB_1003e6799;
    }
    if (uVar9 != 0x20401) goto LAB_1003e678a;
    _usleep(500);
    *(undefined4 *)(param_1 + 0x11) = 0;
    *(undefined4 *)((long)param_1 + 0x84) = 1;
    *(undefined4 *)((long)param_1 + 0x7c) = 2;
    lVar7 = *param_1;
    uVar9 = 0x20401;
  }
  uVar6 = (**(code **)(lVar7 + 0x270))(param_1,uVar9);
LAB_1003e6799:
  if (lVar1 == local_30) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

