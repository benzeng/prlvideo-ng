
long FUN_100ca0e50(undefined8 param_1,int *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  
  lVar3 = FUN_100c60010();
  if (lVar3 == 0) {
    FUN_100c62ee0(0x22,0x99,0x41,"v3_alt.c",0xf7);
LAB_100ca105c:
    lVar3 = 0;
  }
  else {
    iVar1 = FUN_100c60800(param_3);
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        lVar5 = FUN_100c60820(param_3,iVar1);
        iVar2 = FUN_100c9fe80(*(undefined8 *)(lVar5 + 8),"issuer");
        if (((iVar2 != 0) || (*(char **)(lVar5 + 0x10) == (char *)0x0)) ||
           (iVar2 = _strcmp(*(char **)(lVar5 + 0x10),"copy"), iVar2 != 0)) {
          lVar5 = FUN_100ca1630(0,param_1,param_2,lVar5,0);
          if (lVar5 != 0) {
            FUN_100c604e0(lVar3,lVar5);
            goto LAB_100ca0fb8;
          }
LAB_100ca104d:
          FUN_100c60790(lVar3,FUN_100ca0960);
          goto LAB_100ca105c;
        }
        if (param_2 == (int *)0x0) {
LAB_100ca100e:
          uVar4 = 0x7f;
          uVar7 = 0x118;
LAB_100ca1048:
          FUN_100c62ee0(0x22,0x7b,uVar4,"v3_alt.c",uVar7);
          goto LAB_100ca104d;
        }
        if (*param_2 != 1) {
          if (*(long *)(param_2 + 2) == 0) goto LAB_100ca100e;
          iVar2 = FUN_100c97c70(*(long *)(param_2 + 2),0x55,0xffffffff);
          if (-1 < iVar2) {
            lVar5 = FUN_100c97cd0(*(undefined8 *)(param_2 + 2),iVar2);
            if ((lVar5 == 0) || (lVar5 = FUN_100c9e420(lVar5), lVar5 == 0)) {
              uVar4 = 0x7e;
              uVar7 = 0x120;
              goto LAB_100ca1048;
            }
            iVar2 = FUN_100c60800(lVar5);
            iVar6 = 0;
            if (0 < iVar2) {
              do {
                uVar4 = FUN_100c60820(lVar5,iVar6);
                iVar2 = FUN_100c604e0(lVar3,uVar4);
                if (iVar2 == 0) {
                  uVar4 = 0x41;
                  uVar7 = 0x127;
                  goto LAB_100ca1048;
                }
                iVar6 = iVar6 + 1;
                iVar2 = FUN_100c60800(lVar5);
              } while (iVar6 < iVar2);
            }
            FUN_100c5ffd0(lVar5);
          }
        }
LAB_100ca0fb8:
        iVar1 = iVar1 + 1;
        iVar2 = FUN_100c60800(param_3);
      } while (iVar1 < iVar2);
    }
  }
  return lVar3;
}

