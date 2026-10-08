
void FUN_100b492c0(long *param_1,long *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  long *local_40;
  long local_38;
  
  lVar5 = *param_2;
  uVar7 = (ulong)(lVar5 - *param_1) >> 3;
  iVar6 = (int)uVar7;
  do {
    if (iVar6 < 2) {
      return;
    }
    *param_2 = lVar5 + -8;
    plVar3 = (long *)*param_1;
    if (*(int *)(*(long *)(lVar5 + -8) + 0x18) < *(int *)(*plVar3 + 0x18)) {
      FUN_100b494a0();
    }
    iVar6 = (int)uVar7;
    if (iVar6 == 2) {
      return;
    }
    iVar1 = (int)(((uint)(uVar7 >> 0x1f) & 1) + iVar6) >> 1;
    iVar2 = *(int *)(plVar3[iVar1] + 0x18);
    if (iVar2 < *(int *)(*(long *)*param_1 + 0x18)) {
      FUN_100b494a0(plVar3[iVar1],*(long *)*param_1);
      iVar2 = *(int *)(plVar3[iVar1] + 0x18);
    }
    if (*(int *)(*(long *)*param_2 + 0x18) < iVar2) {
      FUN_100b494a0();
    }
    if (iVar6 == 3) {
      return;
    }
    plVar4 = (long *)(lVar5 + -0x10);
    FUN_100b494a0(plVar3[iVar1],*(undefined8 *)*param_2);
    for (; plVar3 < plVar4; plVar3 = plVar3 + 1) {
      if (plVar3 < plVar4) {
        do {
          if (*(int *)(*(long *)*param_2 + 0x18) <= *(int *)(*plVar3 + 0x18)) break;
          plVar3 = plVar3 + 1;
        } while (plVar3 < plVar4);
      }
      if (plVar4 <= plVar3) break;
      while (*(int *)(*(long *)*param_2 + 0x18) < *(int *)(*plVar4 + 0x18)) {
        plVar4 = plVar4 + -1;
        if (plVar4 <= plVar3) goto LAB_100b49402;
      }
      FUN_100b494a0(*plVar3);
      plVar4 = plVar4 + -1;
    }
LAB_100b49402:
    lVar5 = *plVar3;
    if (*(int *)(lVar5 + 0x18) < *(int *)(*(long *)*param_2 + 0x18)) {
      lVar5 = plVar3[1];
      plVar3 = plVar3 + 1;
    }
    FUN_100b494a0(*(long *)*param_2,lVar5);
    local_38 = *param_1;
    local_40 = plVar3;
    FUN_100b492c0(&local_38,&local_40,param_3);
    *param_1 = (long)(plVar3 + 1);
    lVar5 = *param_2 + 8;
    *param_2 = lVar5;
    uVar7 = (ulong)(lVar5 - *param_1) >> 3;
    iVar6 = (int)uVar7;
  } while( true );
}

