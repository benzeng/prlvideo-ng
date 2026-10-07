
void FUN_100405340(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  
  if ((*(byte *)(param_2 + 1) & 1) != 0) {
    FUN_100405200(param_1,param_2);
    return;
  }
  uVar4 = (**(code **)(*(long *)*param_1 + 0x2e0))();
  uVar13 = uVar4 * *param_2;
  uVar9 = *(uint *)(param_2 + 10);
  uVar10 = (ulong)uVar9;
  lVar5 = FUN_100404650(param_1,uVar13,uVar10);
  if ((lVar5 == 0) && (lVar5 = FUN_100404900(param_1,uVar13,uVar4,uVar9), lVar5 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001004055ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)*param_1 + 0x100))((long *)*param_1,param_2);
    return;
  }
  if ((*(ulong *)(lVar5 + 0x20) <= uVar13) &&
     (uVar10 + uVar13 <= (ulong)*(uint *)(lVar5 + 0x1c) + *(ulong *)(lVar5 + 0x20))) {
    FUN_100404e20(param_1,lVar5,param_2);
    return;
  }
  *(undefined4 *)(param_2 + 7) = 1;
  if (uVar9 == 0) {
LAB_1004055d5:
    plVar1 = param_2 + 7;
    *(int *)plVar1 = (int)*plVar1 + -1;
    if ((int)*plVar1 == 0) {
      FUN_10070aed0(param_2);
      return;
    }
    return;
  }
  do {
    iVar12 = (int)uVar13;
    lVar7 = 0;
    uVar11 = uVar10;
    if (lVar5 != 0) {
      uVar2 = *(ulong *)(lVar5 + 0x20);
      uVar11 = *(uint *)(lVar5 + 0x1c) + uVar2;
      if (uVar11 <= uVar13) {
        FUN_1008e3970("","PCache",0,"PCACHE: BUG in pcache_dio_submit: %llx, %llx:%x",uVar13,uVar2,
                      *(uint *)(lVar5 + 0x1c));
        goto LAB_1004055d5;
      }
      uVar8 = uVar10 + uVar13;
      if (uVar13 < uVar2) {
        iVar3 = (int)uVar2;
        if (uVar8 < uVar2) {
          iVar3 = (int)uVar8;
        }
        uVar11 = (ulong)(uint)(iVar3 - iVar12);
        lVar7 = 0;
      }
      else {
        iVar3 = (int)uVar11;
        if (uVar8 < uVar11) {
          iVar3 = (int)uVar8;
        }
        uVar11 = (ulong)(uint)(iVar3 - iVar12);
        lVar7 = lVar5;
      }
    }
    lVar5 = *param_2;
    puVar6 = (ulong *)FUN_10070ade0();
    if (puVar6 == (ulong *)0x0) {
      FUN_1008e3970("","PCache",0,"PCACHE: WARNING, Can\'t allocate DIO");
      goto LAB_1004055d5;
    }
    FUN_10070b420(puVar6 + 10,param_2 + 10,iVar12 - (int)lVar5 * (int)uVar4,uVar11);
    *(int *)(puVar6 + 1) = (int)param_2[1];
    puVar6[3] = param_2[3];
    puVar6[6] = param_2[6];
    puVar6[2] = (ulong)param_2;
    puVar6[9] = (ulong)FUN_10070b1d0;
    *(int *)(param_2 + 7) = (int)param_2[7] + 1;
    *puVar6 = uVar13 / uVar4;
    if ((lVar7 == 0) && (lVar7 = FUN_100404900(param_1,uVar13,uVar4,uVar11), lVar7 == 0)) {
      (**(code **)(*(long *)*param_1 + 0x100))((long *)*param_1,puVar6);
    }
    else {
      FUN_100404e20(param_1,lVar7,puVar6);
    }
    uVar9 = (int)uVar10 - (int)uVar11;
    uVar10 = (ulong)uVar9;
    if (uVar9 == 0) goto LAB_1004055d5;
    uVar13 = uVar13 + uVar11;
    lVar5 = FUN_100404650(param_1,uVar13,uVar10);
  } while( true );
}

