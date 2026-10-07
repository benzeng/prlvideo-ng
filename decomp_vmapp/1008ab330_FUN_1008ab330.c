
long FUN_1008ab330(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  
  piVar3 = *(int **)(param_1 + 0x30);
  if (piVar3 == (int *)0x0) {
    return 0;
  }
  iVar6 = (int)param_2;
  if (iVar6 < 0x95) {
    if (iVar6 == 0xb) {
      if (*(long *)(param_1 + 0x38) == 0) {
        return 0;
      }
      iVar6 = *piVar3;
      if (iVar6 == 2) {
        if ((*(code **)(piVar3 + 0xe) != (code *)0x0) &&
           (iVar6 = (**(code **)(piVar3 + 0xe))(param_1,piVar3 + 0x12,piVar3 + 0x14,piVar3 + 0x16),
           iVar6 == 0)) goto LAB_1008ab46d;
        iVar6 = 5;
        if (piVar3[0x14] < 1) {
          iVar6 = 6;
        }
        *piVar3 = iVar6;
      }
      if (iVar6 != 6) {
        if ((iVar6 == 5) && (0 < piVar3[0x14])) {
          pcVar4 = *(code **)(piVar3 + 0x10);
          iVar6 = FUN_10087d780(*(undefined8 *)(param_1 + 0x38),
                                (long)piVar3[0x15] + *(long *)(piVar3 + 0x12));
          if (0 < iVar6) {
            piVar1 = piVar3 + 0x14;
            do {
              iVar2 = *piVar1;
              *piVar1 = iVar2 - iVar6;
              if (iVar2 - iVar6 < 1) {
                if (pcVar4 != (code *)0x0) {
                  (*pcVar4)(param_1,piVar3 + 0x12,piVar1,piVar3 + 0x16);
                }
                *piVar3 = 6;
                piVar3[0x15] = 0;
                goto LAB_1008ab4e9;
              }
              iVar2 = piVar3[0x15];
              piVar3[0x15] = (int)((long)iVar6 + (long)iVar2);
              iVar6 = FUN_10087d780(*(undefined8 *)(param_1 + 0x38),
                                    (long)iVar6 + (long)iVar2 + *(long *)(piVar3 + 0x12));
            } while (0 < iVar6);
          }
          return (long)iVar6;
        }
LAB_1008ab46d:
        FUN_10087d610(param_1,0xf);
        return 0;
      }
LAB_1008ab4e9:
      lVar7 = *(long *)(param_1 + 0x38);
      param_2 = 0xb;
      goto LAB_1008ab4f2;
    }
switchD_1008ab460_default:
    lVar7 = *(long *)(param_1 + 0x38);
    if (lVar7 == 0) {
      return 0;
    }
LAB_1008ab4f2:
    lVar7 = FUN_10087db60(lVar7,param_2,param_3,param_4);
    return lVar7;
  }
  switch(iVar6) {
  case 0x95:
    uVar5 = param_4[1];
    *(undefined8 *)(piVar3 + 10) = *param_4;
    *(undefined8 *)(piVar3 + 0xc) = uVar5;
    break;
  case 0x96:
    uVar5 = *(undefined8 *)(piVar3 + 0xc);
    *param_4 = *(undefined8 *)(piVar3 + 10);
    param_4[1] = uVar5;
    break;
  case 0x97:
    uVar5 = param_4[1];
    *(undefined8 *)(piVar3 + 0xe) = *param_4;
    *(undefined8 *)(piVar3 + 0x10) = uVar5;
    break;
  case 0x98:
    uVar5 = *(undefined8 *)(piVar3 + 0x10);
    *param_4 = *(undefined8 *)(piVar3 + 0xe);
    param_4[1] = uVar5;
    break;
  case 0x99:
    *(undefined8 **)(piVar3 + 0x16) = param_4;
    break;
  case 0x9a:
    *param_4 = *(undefined8 *)(piVar3 + 0x16);
    break;
  default:
    goto switchD_1008ab460_default;
  }
  return 1;
}

