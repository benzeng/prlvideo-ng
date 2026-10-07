
void FUN_1004bf490(undefined8 *param_1,ulong param_2,long param_3,int param_4,int param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  double adStack_50 [2];
  undefined *puStack_40;
  double dStack_38;
  long local_30;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  *param_1 = 0;
  local_30 = lVar2;
  if (((int)param_2 != 0) && (param_3 != 0)) {
    uVar5 = param_2 & 0xffffffff;
    lVar3 = uVar5 * -0x20;
    lVar6 = 0xc;
    uVar8 = param_2 & 0xffffffff;
    do {
      iVar4 = *(int *)(param_3 + -0xc + lVar6);
      *(double *)((long)adStack_50 + lVar6 * 2 + lVar3) = (double)(iVar4 + param_4);
      iVar1 = *(int *)(param_3 + -8 + lVar6);
      *(double *)((long)adStack_50 + lVar6 * 2 + lVar3 + 8) = (double)(iVar1 + param_5);
      *(double *)((long)&puStack_40 + lVar6 * 2 + lVar3) =
           (double)(*(int *)(param_3 + -4 + lVar6) - iVar4);
      *(double *)((long)(&dStack_38 + uVar5 * -4) + lVar6 * 2) =
           (double)(*(int *)(param_3 + lVar6) - iVar1);
      lVar6 = lVar6 + 0x10;
      uVar7 = (int)uVar8 - 1;
      uVar8 = (ulong)uVar7;
    } while (uVar7 != 0);
    (&puStack_40)[uVar5 * -4] = (undefined *)0x1004bf557;
    iVar4 = (*DAT_1011ccc58)(&dStack_38 + uVar5 * -4,param_2,param_1);
    if ((iVar4 != 0) && (*param_1 = 0, 0 < DAT_1011b55f8)) {
      (&puStack_40)[uVar5 * -4] = (undefined *)0x1004bf594;
      FUN_1008e3970("CHRSERVER","ChrToolSrv",1,"Failed to create CGSRegion object. err = %d");
    }
  }
  if (lVar2 != local_30) {
                    /* WARNING: Subroutine does not return */
    puStack_40 = &UNK_1004bf5af;
    ___stack_chk_fail();
  }
  return;
}

