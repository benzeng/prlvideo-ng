
/* WARNING: Type propagation algorithm not settling */

float FUN_10038fd20(int *param_1,uint param_2)

{
  int iVar1;
  float fVar2;
  sbyte sVar3;
  float fVar4;
  
  sVar3 = 0x10;
  if ((int)param_2 < 0x2f) {
    if ((param_2 != 0x1f) && (param_2 != 0x28)) {
      return 0.0;
    }
LAB_10038fd4e:
    sVar3 = 0x18;
  }
  else if (param_2 != 0x3d) {
    if (param_2 != 0x2f) {
      return 0.0;
    }
    goto LAB_10038fd4e;
  }
  iVar1 = *param_1;
  if (iVar1 < 0x31000) {
    if (iVar1 < 0x2a400) {
      if ((iVar1 != 0x23000) && (iVar1 != 0x2a000)) goto LAB_10038fe88;
    }
    else if ((iVar1 != 0x2a400) && (iVar1 != 0x2a500)) goto LAB_10038fe88;
    iVar1 = *(int *)(&DAT_101118b74 + (ulong)param_2 * 0x14);
    fVar2 = DAT_100b3e838;
    fVar4 = DAT_100b3e838;
    if (0x81a5 < iVar1) {
joined_r0x00010038fe9b:
      if (((iVar1 - 0x8cacU < 2) || (iVar1 == 0x81a6)) || (fVar4 = fVar2, iVar1 == 0x88f0))
      goto LAB_10038fec7;
    }
LAB_10038febf:
    fVar4 = DAT_100b3f700;
  }
  else {
    if (iVar1 < 0x4a600) {
      if (iVar1 < 0x36000) {
        fVar4 = DAT_100b3e82c;
        if (iVar1 == 0x31000) goto LAB_10038fec7;
        if (iVar1 == 0x32000) goto LAB_10038fe41;
      }
      else if ((iVar1 == 0x36000) || (iVar1 == 0x37000)) {
LAB_10038fe41:
        iVar1 = *(int *)(&DAT_101118b74 + (ulong)param_2 * 0x14);
        fVar2 = DAT_100b3e83c;
        fVar4 = DAT_100b3f6f4;
        if (0x81a5 < iVar1) goto joined_r0x00010038fe9b;
        fVar4 = DAT_100b3e830;
        if (iVar1 == 0x81a5) goto LAB_10038fec7;
        goto LAB_10038febf;
      }
    }
    else if (iVar1 == 0x4a600) {
      iVar1 = *(int *)(&DAT_101118b74 + (ulong)param_2 * 0x14);
      if (iVar1 < 0x81a6) {
        fVar4 = DAT_100b3e830;
        if (iVar1 == 0x81a5) goto LAB_10038fec7;
      }
      else {
        fVar4 = DAT_100b3e834;
        if (((iVar1 - 0x8cacU < 2) || (fVar4 = DAT_100b3e834, iVar1 == 0x81a6)) ||
           (fVar4 = DAT_100b3e834, iVar1 == 0x88f0)) goto LAB_10038fec7;
      }
    }
LAB_10038fe88:
    fVar4 = DAT_100b3e840;
  }
LAB_10038fec7:
  return fVar4 / (float)(1L << sVar3);
}

