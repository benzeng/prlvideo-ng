
undefined8 FUN_100c2e720(long *param_1,long *param_2,undefined8 param_3)

{
  ulong uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 local_138 [256];
  long local_38;
  
  lVar7 = *(long *)PTR____stack_chk_guard_1021e1840;
  iVar4 = (int)param_2[1];
  lVar10 = (long)iVar4;
  local_38 = lVar7;
  if (lVar10 < 1) {
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    uVar11 = 1;
    goto LAB_100c2e924;
  }
  FUN_100c27c60(param_3);
  plVar5 = param_1;
  if (param_2 == param_1) {
    plVar5 = (long *)FUN_100c27e20(param_3);
  }
  plVar6 = (long *)FUN_100c27e20(param_3);
  uVar11 = 0;
  if ((plVar5 == (long *)0x0) || (plVar6 == (long *)0x0)) goto LAB_100c2e90e;
  iVar2 = iVar4 * 2;
  if (*(int *)((long)plVar5 + 0xc) < iVar2) {
    lVar7 = FUN_100c26b00(plVar5,iVar2);
    if (lVar7 == 0) goto LAB_100c2e90e;
  }
  if (iVar4 == 8) {
    FUN_100c2f7f0(*plVar5,*param_2);
LAB_100c2e8d3:
    *(undefined4 *)(plVar5 + 2) = 0;
    uVar1 = *(ulong *)(*param_2 + -8 + lVar10 * 8);
    iVar4 = -1;
    if (uVar1 != (uVar1 & 0xffffffff)) {
      iVar4 = 0;
    }
    *(int *)(plVar5 + 1) = iVar2 + iVar4;
    uVar11 = 1;
    if (plVar5 != param_1) {
      FUN_100c26b50(param_1,plVar5);
    }
  }
  else {
    if (iVar4 == 4) {
      FUN_100c2fc20(*plVar5,*param_2);
      goto LAB_100c2e8d3;
    }
    if (iVar4 < 0x10) {
      lVar7 = *plVar5;
      lVar9 = *param_2;
      puVar8 = local_138;
LAB_100c2e8cb:
      FUN_100c2e950(lVar7,lVar9,iVar4,puVar8);
      goto LAB_100c2e8d3;
    }
    cVar3 = FUN_100c26520(lVar10);
    uVar11 = 0;
    if (iVar4 != 1 << (cVar3 - 1U & 0x1f)) {
      if (*(int *)((long)plVar6 + 0xc) < iVar2) {
        lVar7 = FUN_100c26b00(plVar6,iVar2);
        if (lVar7 == 0) goto LAB_100c2e90e;
      }
      lVar7 = *plVar5;
      lVar9 = *param_2;
      puVar8 = (undefined1 *)*plVar6;
      goto LAB_100c2e8cb;
    }
    if (iVar4 * 4 <= *(int *)((long)plVar6 + 0xc)) {
LAB_100c2e87d:
      FUN_100c2ea70(*plVar5,*param_2,iVar4,*plVar6);
      goto LAB_100c2e8d3;
    }
    lVar7 = FUN_100c26b00(plVar6);
    if (lVar7 != 0) goto LAB_100c2e87d;
  }
LAB_100c2e90e:
  FUN_100c27d40(param_3);
  lVar7 = *(long *)PTR____stack_chk_guard_1021e1840;
LAB_100c2e924:
  if (lVar7 == local_38) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

