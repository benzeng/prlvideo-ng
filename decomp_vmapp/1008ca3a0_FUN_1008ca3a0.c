
undefined8
FUN_1008ca3a0(int param_1,int param_2,uint param_3,undefined8 param_4,undefined8 param_5,
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
LAB_1008ca3d6:
    piVar6 = (int *)(&DAT_1011b2040 + (long)(int)uVar5 * 0x30);
LAB_1008ca3eb:
    bVar1 = false;
  }
  else {
    local_60[0] = param_1;
    if (((DAT_1011c2a10 == 0) || (iVar2 = FUN_100885160(DAT_1011c2a10,local_60), iVar2 == -1)) ||
       (uVar5 = iVar2 + 9, uVar5 == 0xffffffff)) {
      piVar6 = (int *)FUN_10081ddd0(0x30,"v3_purp.c",0xd6);
      if (piVar6 == (int *)0x0) {
        uVar3 = 0xd7;
        goto LAB_1008ca5cd;
      }
      piVar6[2] = 1;
      bVar1 = true;
    }
    else {
      bVar1 = false;
      piVar6 = (int *)0x0;
      if (-1 < (int)uVar5) {
        if ((int)uVar5 < 9) goto LAB_1008ca3d6;
        piVar6 = (int *)FUN_100885620(DAT_1011c2a10,iVar2);
        goto LAB_1008ca3eb;
      }
    }
  }
  if ((*(byte *)(piVar6 + 2) & 2) != 0) {
    FUN_10081e1a0(*(undefined8 *)(piVar6 + 6));
    FUN_10081e1a0(*(undefined8 *)(piVar6 + 8));
  }
  uVar3 = FUN_10087d050(param_5);
  *(undefined8 *)(piVar6 + 6) = uVar3;
  lVar4 = FUN_10087d050(param_6);
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
    if ((DAT_1011c2a10 == 0) && (DAT_1011c2a10 = FUN_100884d30(FUN_1008ca5f0), DAT_1011c2a10 == 0))
    {
      uVar3 = 0xf7;
    }
    else {
      iVar2 = FUN_1008852e0(DAT_1011c2a10,piVar6);
      if (iVar2 != 0) {
        return 1;
      }
      uVar3 = 0xfb;
    }
  }
LAB_1008ca5cd:
  FUN_100887ce0(0x22,0x89,0x41,"v3_purp.c",uVar3);
  return 0;
}

