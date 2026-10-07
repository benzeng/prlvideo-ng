
undefined8 FUN_1002df010(long param_1,long param_2,uint *param_3)

{
  int *piVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  void *pvVar6;
  void *pvVar7;
  uint uVar8;
  uint uVar9;
  undefined1 local_978 [2368];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar2 = *(long *)(*(long *)(param_1 + 8) + 0x40 + (ulong)(*param_3 & 0xff) * 8);
  uVar9 = param_3[3];
  uVar3 = param_3[2] - uVar9;
  if (*(uint *)(param_2 + 0x43c) < param_3[2] - uVar9) {
    uVar3 = *(uint *)(param_2 + 0x43c);
  }
  if ((*param_3 & 0x80) == 0) {
    pvVar6 = (void *)(*(long *)(param_3 + 4) + (ulong)uVar9);
    pvVar7 = (void *)(param_2 + 0x4d8);
  }
  else {
    pvVar6 = (void *)(param_2 + 0x4d8);
    pvVar7 = (void *)(*(long *)(param_3 + 4) + (ulong)uVar9);
  }
  _memcpy(pvVar6,pvVar7,(ulong)uVar3);
  if (2 < DAT_1011c568c) {
    uVar9 = param_3[2];
    uVar8 = uVar3;
    FUN_1008e3970("","USB",0,"[%s] io-data size (%d + %d)/%d",lVar2 + 0xcf,param_3[3],uVar3,uVar9);
    if (2 < DAT_1011c568c) {
      FUN_1002da020(local_978,0x940,(ulong)param_3[3] + *(long *)(param_3 + 4),(ulong)uVar3);
      FUN_1008e3970("","USB",0,"[%s] io-data:%s",lVar2 + 0xcf,local_978,uVar8,uVar9);
    }
  }
  *(uint *)(param_2 + 0x454) = uVar3;
  *(undefined4 *)(param_2 + 0x468) = 0;
  lVar5 = 0;
  if ((*(uint *)(param_2 + 0x470) & 4) == 0) {
    lVar5 = *(long *)(*(long *)(param_1 + 8) + 0x28);
  }
  if ((1 < DAT_1011c568c) && (*(int *)(param_2 + 0x450) == 0x69)) {
    FUN_1002da980(2,param_2);
  }
  uVar9 = *(uint *)(param_2 + 0x470);
  *(undefined4 *)(param_2 + 0x464) = 1;
  LOCK();
  piVar1 = (int *)(*(long *)(lVar2 + 0xc0) + 8);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  LOCK();
  *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + -1;
  UNLOCK();
  if ((uVar9 & 4) != 0) {
    FUN_1002c9070(param_2);
  }
  if (lVar5 != 0) {
    FUN_1002c8a90(lVar5,*(undefined4 *)(*(long *)(param_1 + 8) + 0x1c),*param_3);
  }
  uVar9 = param_3[3];
  param_3[3] = uVar3 + uVar9;
  if (((*param_3 & 0x80) == 0) || (uVar4 = 0, param_3[2] <= uVar3 + uVar9)) {
    param_3[1] = 0;
    uVar4 = 1;
    if (*(code **)(param_3 + 6) != (code *)0x0) {
      uVar4 = (**(code **)(param_3 + 6))(param_3);
    }
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

