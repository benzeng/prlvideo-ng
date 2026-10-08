
ulong FUN_100c2ba20(long *param_1,ulong param_2)

{
  int iVar1;
  ulong *puVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  
  uVar5 = 1;
  if (param_2 != 0) {
    iVar1 = (int)param_1[1];
    if (iVar1 == 0) {
      uVar4 = FUN_100c26db0(param_1);
      uVar5 = 0;
      if (uVar4 != 0) {
        FUN_100c27430(param_1,1);
        uVar5 = (ulong)uVar4;
      }
    }
    else if ((int)param_1[2] == 0) {
      puVar2 = (ulong *)*param_1;
      lVar6 = -1;
      if ((iVar1 == 1) && (*puVar2 < param_2)) {
        *puVar2 = param_2 - *puVar2;
        *(undefined4 *)(param_1 + 2) = 1;
      }
      else {
        do {
          uVar7 = param_2;
          uVar3 = puVar2[lVar6 + 1];
          puVar2[lVar6 + 1] = uVar3 - uVar7;
          lVar6 = lVar6 + 1;
          param_2 = 1;
        } while (uVar3 < uVar7);
        if ((uVar3 == uVar7) && ((int)lVar6 == iVar1 + -1)) {
          *(int *)(param_1 + 1) = (int)lVar6;
        }
      }
    }
    else {
      *(undefined4 *)(param_1 + 2) = 0;
      uVar5 = FUN_100c2b920(param_1);
      *(undefined4 *)(param_1 + 2) = 1;
    }
  }
  return uVar5;
}

