
long FUN_100c6f200(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  
  piVar1 = *(int **)(param_1 + 0x30);
  iVar5 = (int)param_2;
  if (iVar5 < 0x65) {
    switch(iVar5) {
    case 1:
      piVar1[3] = 0;
      piVar1[4] = 1;
      FUN_100c66110(piVar1 + 6,0,0,0,0,piVar1[10]);
      uVar7 = *(undefined8 *)(param_1 + 0x38);
      param_2 = 1;
      break;
    case 2:
      if (piVar1[2] < 1) {
        return 1;
      }
      uVar7 = *(undefined8 *)(param_1 + 0x38);
      param_2 = 2;
      break;
    default:
      goto switchD_100c6f23d_caseD_3;
    case 10:
      if (0 < (int)((long)*piVar1 - (long)piVar1[1])) {
        return (long)*piVar1 - (long)piVar1[1];
      }
      uVar7 = *(undefined8 *)(param_1 + 0x38);
      param_2 = 10;
      break;
    case 0xb:
LAB_100c6f350:
      do {
        if (*piVar1 != piVar1[1]) {
          piVar2 = *(int **)(param_1 + 0x30);
          FUN_100c58810(param_1,0xf);
          iVar5 = piVar2[1];
          iVar8 = *piVar2 - iVar5;
          if (iVar8 != 0 && iVar5 <= *piVar2) {
            do {
              iVar4 = FUN_100c58980(*(undefined8 *)(param_1 + 0x38),
                                    (long)piVar2 + (long)iVar5 + 0xc0,iVar8);
              if (iVar4 < 1) {
                FUN_100c59780(param_1);
                if (iVar4 < 0) {
                  return (long)iVar4;
                }
                break;
              }
              iVar5 = piVar2[1] + iVar4;
              piVar2[1] = iVar5;
              iVar9 = iVar8 - iVar4;
              bVar3 = iVar4 <= iVar8;
              iVar8 = iVar9;
            } while (iVar9 != 0 && bVar3);
          }
          goto LAB_100c6f350;
        }
        if (piVar1[3] != 0) {
          uVar7 = *(undefined8 *)(param_1 + 0x38);
          param_2 = 0xb;
          break;
        }
        piVar1[3] = 1;
        piVar1[1] = 0;
        iVar5 = FUN_100c669c0(piVar1 + 6,piVar1 + 0x30,piVar1);
        piVar1[4] = iVar5;
        if (iVar5 < 1) {
          return (long)iVar5;
        }
      } while( true );
    case 0xc:
      lVar6 = param_4[6];
      FUN_100c66060(lVar6 + 0x18);
      iVar5 = FUN_100c670b0(lVar6 + 0x18,piVar1 + 6);
      if (iVar5 != 0) {
        *(undefined4 *)(param_4 + 3) = 1;
      }
      return (long)iVar5;
    case 0xd:
      if (0 < (int)((long)*piVar1 - (long)piVar1[1])) {
        return (long)*piVar1 - (long)piVar1[1];
      }
      uVar7 = *(undefined8 *)(param_1 + 0x38);
      param_2 = 0xd;
    }
  }
  else {
    if (iVar5 == 0x65) {
      FUN_100c58810(param_1,0xf);
      lVar6 = FUN_100c58d60(*(undefined8 *)(param_1 + 0x38),0x65,param_3,param_4);
      FUN_100c59780(param_1);
      return lVar6;
    }
    if (iVar5 == 0x71) {
      return (long)piVar1[4];
    }
    if (iVar5 == 0x81) {
      *param_4 = piVar1 + 6;
      *(undefined4 *)(param_1 + 0x18) = 1;
      return 1;
    }
switchD_100c6f23d_caseD_3:
    uVar7 = *(undefined8 *)(param_1 + 0x38);
  }
  lVar6 = FUN_100c58d60(uVar7,param_2,param_3,param_4);
  return lVar6;
}

