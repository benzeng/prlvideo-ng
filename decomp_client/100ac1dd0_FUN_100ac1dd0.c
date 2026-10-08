
void FUN_100ac1dd0(long *param_1,long param_2,int param_3,int param_4)

{
  byte bVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  byte bVar5;
  byte bVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  *(int *)(param_1 + 3) = param_3;
  *(int *)((long)param_1 + 0x1c) = param_4;
  if (*param_1 != param_2) {
    FUN_100a36ca0(param_1,param_2,(ulong)(uint)(param_3 * param_4 * 4) + param_2);
    lVar2 = *param_1;
    iVar9 = 0;
    if (param_1[1] == lVar2) {
      iVar10 = 0;
      iVar8 = 0;
    }
    else {
      uVar4 = 0;
      iVar10 = 0;
      iVar8 = 0;
      do {
        if (0x14 < *(byte *)(lVar2 + (uVar4 | 3))) {
          bVar5 = 0;
          lVar7 = 1;
          do {
            bVar1 = *(byte *)(lVar2 + uVar4 + -1 + lVar7);
            bVar6 = 2;
            if (0x1f < bVar1) {
              bVar6 = -(bVar1 < 0xe0) & 2U | 1;
            }
            bVar5 = bVar5 | bVar6;
          } while ((bVar5 != 3) && (bVar3 = lVar7 < 3, lVar7 = lVar7 + 1, bVar3));
          iVar10 = iVar10 + 1;
          if (bVar5 == 2) {
            iVar9 = iVar9 + 1;
          }
          else if (bVar5 == 1) {
            iVar8 = iVar8 + 1;
          }
        }
        uVar4 = uVar4 + 4;
      } while (uVar4 < (ulong)(param_1[1] - lVar2));
    }
    if ((uint)(iVar10 * 0x5a) < (uint)(iVar9 * 100)) {
      *(undefined4 *)(param_1 + 4) = 2;
    }
    else if ((uint)(iVar10 * 0x5a) < (uint)(iVar8 * 100)) {
      *(undefined4 *)(param_1 + 4) = 1;
    }
    else {
      *(undefined4 *)(param_1 + 4) = 3;
    }
  }
  return;
}

