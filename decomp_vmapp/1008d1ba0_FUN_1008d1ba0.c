
undefined8
FUN_1008d1ba0(int *param_1,int param_2,code *param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  
  if (param_2 < *param_1) {
    lVar3 = FUN_1008856e0(param_4,param_5);
    if (lVar3 == 0) {
      param_1[8] = 1;
      param_1[9] = 0;
      uVar4 = 0;
    }
    else {
      iVar1 = FUN_100885600(*(undefined8 *)(param_1 + 2));
      if (0 < iVar1) {
        iVar6 = 0;
        if (param_3 == (code *)0x0) {
          do {
            uVar4 = FUN_100885620(*(undefined8 *)(param_1 + 2),iVar6);
            lVar5 = FUN_1008859e0(lVar3,uVar4);
            if (lVar5 != 0) goto LAB_1008d1cac;
            iVar6 = iVar6 + 1;
          } while (iVar6 < iVar1);
        }
        else {
          do {
            uVar4 = FUN_100885620(*(undefined8 *)(param_1 + 2),iVar6);
            iVar2 = (*param_3)(uVar4);
            if ((iVar2 != 0) && (lVar5 = FUN_1008859e0(lVar3,uVar4), lVar5 != 0)) {
LAB_1008d1cac:
              param_1[8] = 2;
              param_1[9] = 0;
              iVar1 = FUN_100885160(*(undefined8 *)(param_1 + 2),lVar5);
              *(long *)(param_1 + 10) = (long)iVar1;
              *(long *)(param_1 + 0xc) = (long)iVar6;
              FUN_100885960(lVar3);
              return 0;
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < iVar1);
        }
      }
      lVar7 = (long)param_2;
      lVar5 = *(long *)(param_1 + 4);
      if (*(long *)(lVar5 + lVar7 * 8) != 0) {
        FUN_100885960();
        lVar5 = *(long *)(param_1 + 4);
      }
      *(long *)(lVar5 + lVar7 * 8) = lVar3;
      *(code **)(*(long *)(param_1 + 6) + lVar7 * 8) = param_3;
      uVar4 = 1;
    }
  }
  else {
    param_1[8] = 3;
    param_1[9] = 0;
    uVar4 = 0;
  }
  return uVar4;
}

