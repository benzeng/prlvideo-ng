
long FUN_1008936c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  undefined8 uVar6;
  
  lVar3 = 1;
  iVar5 = (int)param_2;
  if (iVar5 < 0x65) {
    if (iVar5 - 1U < 0xd) {
      piVar1 = *(int **)(param_1 + 0x30);
      switch(iVar5) {
      case 1:
        piVar1[6] = 1;
        piVar1[4] = 0;
        piVar1[5] = 1;
        uVar6 = *(undefined8 *)(param_1 + 0x38);
        param_2 = 1;
        break;
      case 2:
        if (piVar1[6] < 1) {
          return 1;
        }
        uVar6 = *(undefined8 *)(param_1 + 0x38);
        param_2 = 2;
        break;
      default:
        goto switchD_1008936ff_caseD_3;
      case 10:
        iVar5 = *piVar1;
        iVar2 = piVar1[1];
        if (iVar5 < iVar2) {
          FUN_10081d560("bio_b64.c",0x1f9,"ctx->buf_len >= ctx->buf_off");
          iVar5 = *piVar1;
          iVar2 = piVar1[1];
        }
        if (iVar5 - iVar2 != 0 && iVar2 <= iVar5) {
          return (long)(iVar5 - iVar2);
        }
        uVar6 = *(undefined8 *)(param_1 + 0x38);
        param_2 = 10;
        break;
      case 0xb:
LAB_10089380c:
        do {
          if (*piVar1 == piVar1[1]) {
            uVar4 = FUN_10087d620(param_1,0xffffffff);
            if ((uVar4 & 0x100) == 0) {
              if ((piVar1[4] != 0) && (piVar1[7] != 0)) {
                piVar1[1] = 0;
                FUN_10088a1f0(piVar1 + 7,piVar1 + 0x1f,piVar1);
                goto LAB_10089380c;
              }
            }
            else if (piVar1[2] != 0) {
              iVar5 = FUN_10088a0b0(piVar1 + 0x1f);
              *piVar1 = iVar5;
              piVar1[1] = 0;
              piVar1[2] = 0;
              goto LAB_10089380c;
            }
            uVar6 = *(undefined8 *)(param_1 + 0x38);
            param_2 = 0xb;
            goto LAB_10089376b;
          }
          iVar5 = FUN_100892a70(param_1,0,0);
        } while (-1 < iVar5);
        lVar3 = (long)iVar5;
      case 0xc:
        return lVar3;
      case 0xd:
        iVar5 = *piVar1;
        iVar2 = piVar1[1];
        if (iVar5 < iVar2) {
          FUN_10081d560("bio_b64.c",0x1f0,"ctx->buf_len >= ctx->buf_off");
          iVar5 = *piVar1;
          iVar2 = piVar1[1];
        }
        iVar5 = iVar5 - iVar2;
        if (((iVar5 == 0) && (piVar1[4] != 0)) && (piVar1[7] != 0)) {
          return 1;
        }
        if (0 < iVar5) {
          return (long)iVar5;
        }
        uVar6 = *(undefined8 *)(param_1 + 0x38);
        param_2 = 0xd;
      }
      goto LAB_10089376b;
    }
  }
  else if (iVar5 == 0x65) {
    FUN_10087d610(param_1,0xf);
    lVar3 = FUN_10087db60(*(undefined8 *)(param_1 + 0x38),0x65,param_3,param_4);
    FUN_10087e580(param_1);
    return lVar3;
  }
switchD_1008936ff_caseD_3:
  uVar6 = *(undefined8 *)(param_1 + 0x38);
LAB_10089376b:
  lVar3 = FUN_10087db60(uVar6,param_2,param_3,param_4);
  return lVar3;
}

