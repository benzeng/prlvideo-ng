
undefined8 FUN_100bb53b0(long *param_1,ulong param_2)

{
  int iVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  
  uVar4 = 1;
  if (param_2 != 0) {
    iVar1 = (int)param_1[1];
    if (iVar1 == 0) {
      if ((*(int *)((long)param_1 + 0xc) < 1) && (lVar5 = FUN_100bac510(param_1,1), lVar5 == 0)) {
        return 0;
      }
      *(ulong *)*param_1 = param_2;
      *(undefined4 *)(param_1 + 1) = 1;
      *(undefined4 *)(param_1 + 2) = 1;
      uVar4 = 1;
    }
    else if ((int)param_1[2] == 0) {
      puVar2 = (ulong *)*param_1;
      lVar5 = -1;
      if ((iVar1 == 1) && (*puVar2 < param_2)) {
        *puVar2 = param_2 - *puVar2;
        *(undefined4 *)(param_1 + 2) = 1;
      }
      else {
        do {
          uVar6 = param_2;
          uVar3 = puVar2[lVar5 + 1];
          puVar2[lVar5 + 1] = uVar3 - uVar6;
          lVar5 = lVar5 + 1;
          param_2 = 1;
        } while (uVar3 < uVar6);
        if ((uVar3 == uVar6) && ((int)lVar5 == iVar1 + -1)) {
          *(int *)(param_1 + 1) = (int)lVar5;
        }
      }
    }
    else {
      *(undefined4 *)(param_1 + 2) = 0;
      uVar4 = FUN_100bb8c20(param_1,param_2);
      *(undefined4 *)(param_1 + 2) = 1;
    }
  }
  return uVar4;
}

