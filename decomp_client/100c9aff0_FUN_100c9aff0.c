
undefined4
FUN_100c9aff0(int param_1,uint param_2,undefined8 param_3,undefined8 param_4,int param_5,
             undefined8 param_6)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  int *piVar6;
  int local_58 [10];
  
  uVar4 = param_1 - 1;
  if (uVar4 < 8) {
LAB_100c9b024:
    piVar6 = (int *)(&DAT_10230af60 + (long)(int)uVar4 * 0x28);
LAB_100c9b036:
    bVar1 = false;
  }
  else {
    local_58[0] = param_1;
    if (((DAT_102318438 == 0) || (iVar2 = FUN_100c60360(DAT_102318438,local_58), iVar2 == -1)) ||
       (uVar4 = iVar2 + 8, uVar4 == 0xffffffff)) {
      piVar6 = (int *)FUN_100bf3540(0x28,"x509_trs.c",0xb9);
      if (piVar6 == (int *)0x0) {
        uVar5 = 0xba;
        goto LAB_100c9b1ef;
      }
      piVar6[1] = 1;
      bVar1 = true;
    }
    else {
      bVar1 = false;
      piVar6 = (int *)0x0;
      if (-1 < (int)uVar4) {
        if ((int)uVar4 < 8) goto LAB_100c9b024;
        piVar6 = (int *)FUN_100c60820(DAT_102318438,iVar2);
        goto LAB_100c9b036;
      }
    }
  }
  if ((*(byte *)(piVar6 + 1) & 2) != 0) {
    FUN_100bf3910(*(undefined8 *)(piVar6 + 4));
  }
  lVar3 = FUN_100c58250(param_4);
  *(long *)(piVar6 + 4) = lVar3;
  if (lVar3 == 0) {
    uVar5 = 0xc6;
  }
  else {
    piVar6[1] = piVar6[1] & 1U | param_2 & 0xfffffffc | 2;
    *piVar6 = param_1;
    *(undefined8 *)(piVar6 + 2) = param_3;
    piVar6[6] = param_5;
    *(undefined8 *)(piVar6 + 8) = param_6;
    if (!bVar1) {
      return 1;
    }
    if ((DAT_102318438 == 0) && (DAT_102318438 = FUN_100c5ff30(FUN_100c9b210), DAT_102318438 == 0))
    {
      uVar5 = 0xd6;
    }
    else {
      iVar2 = FUN_100c604e0(DAT_102318438,piVar6);
      if (iVar2 != 0) {
        return 1;
      }
      uVar5 = 0xda;
    }
  }
LAB_100c9b1ef:
  FUN_100c62ee0(0xb,0x85,0x41,"x509_trs.c",uVar5);
  return 0;
}

