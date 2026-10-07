
undefined4 FUN_100370530(long param_1,uint param_2,long *param_3)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  long *plVar5;
  undefined4 uVar6;
  long lVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined4 local_1bc;
  undefined1 local_1b8 [192];
  undefined1 local_f8 [192];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar7 = param_3[5];
  FUN_100374270(local_1b8,param_1 + 0x1070 + (ulong)param_2 * 0xc0);
  FUN_100374270(local_f8,lVar7);
  local_1bc = 0;
  puVar4 = *(undefined1 **)(param_1 + 0x518);
  if (puVar4 == (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_1 + 0x528);
  }
  *puVar4 = 0;
  *(undefined4 *)(param_1 + 0x510) = 0;
  cVar2 = FUN_100370e30(param_1,local_1b8,param_3,param_2,&local_1bc);
  uVar6 = local_1bc;
  if (cVar2 != '\0') goto LAB_1003708d0;
  lVar7 = param_1 + 0x510;
  if ((param_2 == 1) && (plVar10 = (long *)*param_3, plVar10 != (long *)0x0)) {
    plVar5 = operator_new(0x70);
    FUN_100393240(plVar5,plVar10,*(undefined8 *)(*(long *)(param_1 + 0x540) + 0x20),
                  *(undefined8 *)(param_1 + 0x538),*(undefined8 *)(param_1 + 0x14f0),
                  *(int *)((long)param_3 + 0xbc) != 0,*(int *)((long)param_3 + 0x8c) != 0,
                  (int)param_3[0x12] != 0,(int)param_3[0x18],*(undefined4 *)((long)param_3 + 0x9c),
                  param_3[4],lVar7);
LAB_100370790:
    uVar8 = 0;
    if (plVar10 == (long *)0x0) {
      uVar9 = 0;
      goto LAB_100370886;
    }
    iVar3 = FUN_10039f080(*plVar10,(ulong)(plVar10[1] - *plVar10) >> 2,plVar5);
    (**(code **)(*plVar5 + 8))(plVar5);
    uVar9 = 0;
    if (iVar3 == 0) goto LAB_100370886;
    uVar8 = 0;
    uVar9 = 0;
  }
  else {
    lVar1 = param_3[3] + 0x8270;
    if ((param_2 == 0) && (plVar10 = (long *)param_3[1], plVar10 != (long *)0x0)) {
      plVar5 = operator_new(0xa0);
      FUN_100353590(plVar5,plVar10,*(undefined8 *)(param_1 + 0x538),lVar1,
                    *(undefined8 *)(param_1 + 0x14f0),*(undefined4 *)((long)param_3 + 0xbc),
                    *(undefined4 *)((long)param_3 + 0xc4),param_3[4],
                    *(int *)((long)param_3 + 0xd4) != 0,*(int *)((long)param_3 + 0x8c) != 0,
                    (int)param_3[0x1c],*(undefined4 *)((long)param_3 + 0xe4),(int)param_3[0x12] != 0
                    ,lVar7);
      goto LAB_100370790;
    }
    if (param_2 == 1) {
      FUN_100394bb0(param_1 + 8,lVar1,param_3 + 6,param_3[4],param_3[3] + 0x1f8,
                    *(undefined8 *)(*(long *)(param_1 + 0x540) + 0x20),lVar7,param_3[0x1e]);
      uVar9 = 9;
      uVar8 = 0;
    }
    else {
      FUN_100357140(param_1 + 0xc0,lVar1,param_3 + 6,param_3[4],
                    (*(uint *)(*(long *)(param_1 + 0x540) + 0x110) & 0x10) >> 4,lVar7,param_3[0x1e])
      ;
      uVar9 = 0x10;
      uVar8 = 9;
    }
LAB_100370886:
    lVar7 = *(long *)(param_1 + 0x518);
    if (lVar7 == 0) {
      lVar7 = *(long *)(param_1 + 0x528);
    }
    local_1bc = FUN_10036d620(param_2,lVar7,0);
  }
  uVar6 = local_1bc;
  FUN_100370f20(param_1,local_1bc,local_1b8,param_3[0x1e],uVar8,uVar9);
LAB_1003708d0:
  FUN_100373b80(local_1b8);
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar6;
}

