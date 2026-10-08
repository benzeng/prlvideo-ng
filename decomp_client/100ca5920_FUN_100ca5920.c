
undefined8
FUN_100ca5920(int param_1,int param_2,uint param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  int *piVar6;
  int local_60 [12];
  
  uVar5 = param_1 - 1;
  if (uVar5 < 9) {
LAB_100ca5956:
    piVar6 = (int *)(&DAT_10230be10 + (long)(int)uVar5 * 0x30);
LAB_100ca596b:
    bVar1 = false;
  }
  else {
    local_60[0] = param_1;
    if (((DAT_102318450 == 0) || (iVar2 = FUN_100c60360(DAT_102318450,local_60), iVar2 == -1)) ||
       (uVar5 = iVar2 + 9, uVar5 == 0xffffffff)) {
      piVar6 = (int *)FUN_100bf3540(0x30,"v3_purp.c",0xd6);
      if (piVar6 == (int *)0x0) {
        uVar3 = 0xd7;
        goto LAB_100ca5b4d;
      }
      piVar6[2] = 1;
      bVar1 = true;
    }
    else {
      bVar1 = false;
      piVar6 = (int *)0x0;
      if (-1 < (int)uVar5) {
        if ((int)uVar5 < 9) goto LAB_100ca5956;
        piVar6 = (int *)FUN_100c60820(DAT_102318450,iVar2);
        goto LAB_100ca596b;
      }
    }
  }
  if ((*(byte *)(piVar6 + 2) & 2) != 0) {
    FUN_100bf3910(*(undefined8 *)(piVar6 + 6));
    FUN_100bf3910(*(undefined8 *)(piVar6 + 8));
  }
  uVar3 = FUN_100c58250(param_5);
  *(undefined8 *)(piVar6 + 6) = uVar3;
  lVar4 = FUN_100c58250(param_6);
  *(long *)(piVar6 + 8) = lVar4;
  if ((lVar4 == 0) || (*(long *)(piVar6 + 6) == 0)) {
    uVar3 = 0xe7;
  }
  else {
    piVar6[2] = piVar6[2] & 1U | param_3 & 0xfffffffc | 2;
    *piVar6 = param_1;
    piVar6[1] = param_2;
    *(undefined8 *)(piVar6 + 4) = param_4;
    *(undefined8 *)(piVar6 + 10) = param_7;
    if (!bVar1) {
      return 1;
    }
    if ((DAT_102318450 == 0) && (DAT_102318450 = FUN_100c5ff30(FUN_100ca5b70), DAT_102318450 == 0))
    {
      uVar3 = 0xf7;
    }
    else {
      iVar2 = FUN_100c604e0(DAT_102318450,piVar6);
      if (iVar2 != 0) {
        return 1;
      }
      uVar3 = 0xfb;
    }
  }
LAB_100ca5b4d:
  FUN_100c62ee0(0x22,0x89,0x41,"v3_purp.c",uVar3);
  return 0;
}

