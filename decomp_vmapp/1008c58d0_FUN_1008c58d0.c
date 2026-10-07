
long FUN_1008c58d0(undefined8 param_1,int *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  
  lVar3 = FUN_100884e10();
  if (lVar3 == 0) {
    FUN_100887ce0(0x22,0x99,0x41,"v3_alt.c",0xf7);
LAB_1008c5adc:
    lVar3 = 0;
  }
  else {
    iVar1 = FUN_100885600(param_3);
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        lVar5 = FUN_100885620(param_3,iVar1);
        iVar2 = FUN_1008c4900(*(undefined8 *)(lVar5 + 8),"issuer");
        if (((iVar2 != 0) || (*(char **)(lVar5 + 0x10) == (char *)0x0)) ||
           (iVar2 = _strcmp(*(char **)(lVar5 + 0x10),"copy"), iVar2 != 0)) {
          lVar5 = FUN_1008c60b0(0,param_1,param_2,lVar5,0);
          if (lVar5 != 0) {
            FUN_1008852e0(lVar3,lVar5);
            goto LAB_1008c5a38;
          }
LAB_1008c5acd:
          FUN_100885590(lVar3,FUN_1008c53e0);
          goto LAB_1008c5adc;
        }
        if (param_2 == (int *)0x0) {
LAB_1008c5a8e:
          uVar4 = 0x7f;
          uVar7 = 0x118;
LAB_1008c5ac8:
          FUN_100887ce0(0x22,0x7b,uVar4,"v3_alt.c",uVar7);
          goto LAB_1008c5acd;
        }
        if (*param_2 != 1) {
          if (*(long *)(param_2 + 2) == 0) goto LAB_1008c5a8e;
          iVar2 = FUN_1008bc6f0(*(long *)(param_2 + 2),0x55,0xffffffff);
          if (-1 < iVar2) {
            lVar5 = FUN_1008bc750(*(undefined8 *)(param_2 + 2),iVar2);
            if ((lVar5 == 0) || (lVar5 = FUN_1008c2ea0(lVar5), lVar5 == 0)) {
              uVar4 = 0x7e;
              uVar7 = 0x120;
              goto LAB_1008c5ac8;
            }
            iVar2 = FUN_100885600(lVar5);
            iVar6 = 0;
            if (0 < iVar2) {
              do {
                uVar4 = FUN_100885620(lVar5,iVar6);
                iVar2 = FUN_1008852e0(lVar3,uVar4);
                if (iVar2 == 0) {
                  uVar4 = 0x41;
                  uVar7 = 0x127;
                  goto LAB_1008c5ac8;
                }
                iVar6 = iVar6 + 1;
                iVar2 = FUN_100885600(lVar5);
              } while (iVar6 < iVar2);
            }
            FUN_100884dd0(lVar5);
          }
        }
LAB_1008c5a38:
        iVar1 = iVar1 + 1;
        iVar2 = FUN_100885600(param_3);
      } while (iVar1 < iVar2);
    }
  }
  return lVar3;
}

