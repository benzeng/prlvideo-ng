
void FUN_10056c780(long *param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  
  iVar5 = (int)param_1[6];
  if (iVar5 != 0) {
    plVar2 = (long *)0x0;
LAB_10056c7b0:
    do {
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)FUN_10070ade0();
        if (plVar2 == (long *)0x0) {
          *(undefined4 *)(param_1 + 5) = 0x80000002;
          break;
        }
        *(uint *)(plVar2 + 1) = (uint)*(byte *)((long)param_1 + 0x34);
        *plVar2 = *param_1;
        plVar2[2] = (long)param_1;
        plVar2[3] = (long)param_1;
        plVar2[9] = (long)FUN_10057db70;
        lVar3 = (**(code **)(*(long *)param_1[2] + 0x250))();
        plVar2[6] = lVar3;
        iVar5 = (int)param_1[6];
      }
      uVar1 = FUN_10070ba60(param_1[2],plVar2,param_1[1],iVar5);
      if (uVar1 != 0) {
        *(uint *)(param_1 + 6) = (int)param_1[6] - uVar1;
        param_1[1] = param_1[1] + (ulong)uVar1;
        uVar4 = (**(code **)(*(long *)param_1[2] + 0x2e0))();
        *param_1 = *param_1 + uVar1 / uVar4;
        iVar5 = (int)param_1[6];
        if (iVar5 != 0) goto LAB_10056c7b0;
      }
      *(int *)((long)param_1 + 0x2c) = *(int *)((long)param_1 + 0x2c) + 1;
      (**(code **)(*(long *)param_1[2] + 0x100))((long *)param_1[2],plVar2);
      iVar5 = (int)param_1[6];
      plVar2 = (long *)0x0;
    } while (iVar5 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010056c882. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[2] + 0x110))((long *)param_1[2],0);
  return;
}

