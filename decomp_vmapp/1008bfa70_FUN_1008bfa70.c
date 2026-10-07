
undefined4
FUN_1008bfa70(int param_1,uint param_2,undefined8 param_3,undefined8 param_4,int param_5,
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
LAB_1008bfaa4:
    piVar6 = (int *)(&DAT_1011b1190 + (long)(int)uVar4 * 0x28);
LAB_1008bfab6:
    bVar1 = false;
  }
  else {
    local_58[0] = param_1;
    if (((DAT_1011c29f8 == 0) || (iVar2 = FUN_100885160(DAT_1011c29f8,local_58), iVar2 == -1)) ||
       (uVar4 = iVar2 + 8, uVar4 == 0xffffffff)) {
      piVar6 = (int *)FUN_10081ddd0(0x28,"x509_trs.c",0xb9);
      if (piVar6 == (int *)0x0) {
        uVar5 = 0xba;
        goto LAB_1008bfc6f;
      }
      piVar6[1] = 1;
      bVar1 = true;
    }
    else {
      bVar1 = false;
      piVar6 = (int *)0x0;
      if (-1 < (int)uVar4) {
        if ((int)uVar4 < 8) goto LAB_1008bfaa4;
        piVar6 = (int *)FUN_100885620(DAT_1011c29f8,iVar2);
        goto LAB_1008bfab6;
      }
    }
  }
  if ((*(byte *)(piVar6 + 1) & 2) != 0) {
    FUN_10081e1a0(*(undefined8 *)(piVar6 + 4));
  }
  lVar3 = FUN_10087d050(param_4);
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
    if ((DAT_1011c29f8 == 0) && (DAT_1011c29f8 = FUN_100884d30(FUN_1008bfc90), DAT_1011c29f8 == 0))
    {
      uVar5 = 0xd6;
    }
    else {
      iVar2 = FUN_1008852e0(DAT_1011c29f8,piVar6);
      if (iVar2 != 0) {
        return 1;
      }
      uVar5 = 0xda;
    }
  }
LAB_1008bfc6f:
  FUN_100887ce0(0xb,0x85,0x41,"x509_trs.c",uVar5);
  return 0;
}

