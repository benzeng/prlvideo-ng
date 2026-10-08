
void FUN_100db6550(int *param_1,int *param_2,uint param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  
  if (param_2[1] != 0) {
    uVar2 = param_4 + param_3;
    uVar4 = 0;
    piVar1 = param_2;
    uVar5 = 0;
    do {
      iVar7 = piVar1[4];
      uVar6 = iVar7 + uVar5;
      if (param_3 < uVar6) {
        if (uVar2 <= uVar5) {
          return;
        }
        lVar8 = *(long *)(piVar1 + 2);
        if (uVar5 < param_3) {
          lVar8 = lVar8 + (ulong)(param_3 - uVar5);
          iVar7 = iVar7 - (param_3 - uVar5);
        }
        if (uVar2 < uVar6) {
          iVar7 = (iVar7 + uVar2) - uVar6;
        }
        uVar5 = param_1[1];
        uVar3 = 0;
        if ((ulong)uVar5 == 0) {
LAB_100db65eb:
          *(long *)(param_1 + (ulong)uVar3 * 4 + 2) = lVar8;
          param_1[(ulong)uVar5 * 4 + 4] = iVar7;
          param_1[1] = uVar5 + 1;
        }
        else {
          uVar9 = (ulong)(uVar5 - 1);
          if (*(long *)(param_1 + uVar9 * 4 + 2) + (ulong)(uint)param_1[uVar9 * 4 + 4] != lVar8) {
            uVar3 = uVar5;
            if (0x7f < uVar5) {
              FUN_100df99c0("","AbstractFile",0,"DIO: overflow");
              return;
            }
            goto LAB_100db65eb;
          }
          param_1[uVar9 * 4 + 4] = param_1[uVar9 * 4 + 4] + iVar7;
        }
        *param_1 = *param_1 + iVar7;
      }
      uVar4 = uVar4 + 1;
      piVar1 = piVar1 + 4;
      uVar5 = uVar6;
    } while (uVar4 < (uint)param_2[1]);
  }
  return;
}

