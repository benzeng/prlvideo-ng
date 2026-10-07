
int FUN_100893ad0(long param_1,long param_2,int param_3)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  piVar1 = *(int **)(param_1 + 0x30);
  FUN_10087d610(param_1,0xf);
  iVar4 = piVar1[1];
  iVar6 = *piVar1 - iVar4;
  if (iVar6 != 0 && iVar4 <= *piVar1) {
    do {
      iVar3 = FUN_10087d780(*(undefined8 *)(param_1 + 0x38),(long)piVar1 + (long)iVar4 + 0xc0,iVar6)
      ;
      if (iVar3 < 1) {
        FUN_10087e580(param_1);
        return iVar3;
      }
      iVar4 = piVar1[1] + iVar3;
      piVar1[1] = iVar4;
      iVar7 = iVar6 - iVar3;
      bVar2 = iVar3 <= iVar6;
      iVar6 = iVar7;
    } while (iVar7 != 0 && bVar2);
  }
  iVar4 = 0;
  if ((param_2 != 0) && (0 < param_3)) {
    piVar1[1] = 0;
    if (0 < param_3) {
      iVar4 = param_3;
      do {
        iVar6 = iVar4;
        if (0x1000 < iVar4) {
          iVar6 = 0x1000;
        }
        FUN_10088b420(piVar1 + 6,piVar1 + 0x30,piVar1,param_2,iVar6);
        iVar4 = iVar4 - iVar6;
        piVar1[1] = 0;
        iVar7 = 0;
        iVar3 = *piVar1;
        if (0 < *piVar1) {
          do {
            iVar5 = FUN_10087d780(*(undefined8 *)(param_1 + 0x38),(long)piVar1 + (long)iVar7 + 0xc0,
                                  iVar3);
            if (iVar5 < 1) {
              FUN_10087e580(param_1);
              if (param_3 - iVar4 != 0) {
                return param_3 - iVar4;
              }
              return iVar5;
            }
            iVar7 = piVar1[1] + iVar5;
            iVar8 = iVar3 - iVar5;
            piVar1[1] = iVar7;
            bVar2 = iVar5 <= iVar3;
            iVar3 = iVar8;
          } while (iVar8 != 0 && bVar2);
        }
        param_2 = param_2 + iVar6;
        piVar1[0] = 0;
        piVar1[1] = 0;
      } while (0 < iVar4);
    }
    FUN_10087e580(param_1);
    iVar4 = param_3;
  }
  return iVar4;
}

