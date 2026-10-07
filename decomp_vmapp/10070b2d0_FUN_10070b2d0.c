
void FUN_10070b2d0(int *param_1,uint param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar3 = param_1[1];
  if (uVar3 != 0) {
    uVar7 = param_3 + param_2;
    uVar6 = 0;
    piVar1 = param_1;
    uVar4 = 0;
    do {
      iVar2 = piVar1[4];
      uVar8 = iVar2 + uVar4;
      if (param_2 < uVar8) {
        if (uVar7 <= uVar4) {
          return;
        }
        lVar5 = *(long *)(piVar1 + 2);
        if (uVar4 < param_2) {
          lVar5 = lVar5 + (ulong)(param_2 - uVar4);
          iVar2 = iVar2 - (param_2 - uVar4);
        }
        if (uVar7 < uVar8) {
          iVar2 = (iVar2 + uVar7) - uVar8;
        }
        ___bzero(lVar5,iVar2);
        uVar3 = param_1[1];
      }
      uVar6 = uVar6 + 1;
      piVar1 = piVar1 + 4;
      uVar4 = uVar8;
    } while (uVar6 < uVar3);
  }
  return;
}

