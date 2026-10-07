
void FUN_1002b0580(long param_1,undefined4 param_2,int param_3,undefined4 param_4,int *param_5,
                  int *param_6,int param_7,long param_8,long param_9,int param_10,uint param_11,
                  char *param_12)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  float *pfVar5;
  int iVar6;
  int *piVar7;
  float fVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  ulong uVar12;
  float fVar13;
  int *local_50;
  int local_44;
  
  iVar6 = param_5[2];
  iVar1 = param_5[3];
  iVar2 = *param_5;
  iVar3 = param_5[1];
  (*DAT_1011c56a0)(0x84c0);
  (*DAT_1011c5768)(param_3,param_2);
  (*DAT_1011c6cd8)(param_3,0x2800,param_4);
  (*DAT_1011c6cd8)(param_3,0x2801,param_4);
  if (param_3 != 0x84f5) {
    (*DAT_1011c6cd8)(param_3,0x813d,0);
  }
  if ((param_11 & 1) != 0) {
    (*DAT_1011c6cd8)(param_3,0x8a48,0x8a4a);
  }
  if (param_3 == 0x84f5) {
    uVar4 = *(undefined4 *)(param_1 + 0x11874);
  }
  else {
    uVar4 = 0;
    if (param_3 == 0xde1) {
      uVar4 = *(undefined4 *)(param_1 + 0x11878);
    }
  }
  if (param_12 == (char *)0x0) {
    (*DAT_1011c6ee0)(uVar4);
  }
  else {
    (*DAT_1011c6ee0)(*(undefined4 *)(param_1 + 0x1187c));
    if (*param_12 == '\0') {
      uVar9 = (ulong)(uint)DAT_100b39678;
    }
    else {
      uVar9 = CONCAT44((int)((ulong)((double)(byte)param_12[6] / DAT_100b37998) >> 0x20),
                       (float)((double)(byte)param_12[6] / DAT_100b37998));
    }
    fVar10 = 0.0;
    if (param_12[1] == '\0') {
      fVar10 = DAT_100b39678;
    }
    (*DAT_1011c7040)(uVar9,fVar10,3);
    if (param_12[2] == '\0') {
      uVar12 = (ulong)(uint)DAT_100b39674;
      uVar9 = (ulong)(uint)DAT_100b39674;
      fVar10 = DAT_100b39674;
    }
    else {
      uVar9 = CONCAT44((int)((ulong)((double)(byte)param_12[3] / DAT_100b37998) >> 0x20),
                       (float)((double)(byte)param_12[3] / DAT_100b37998));
      uVar12 = CONCAT44((int)((ulong)((double)(byte)param_12[4] / DAT_100b37998) >> 0x20),
                        (float)((double)(byte)param_12[4] / DAT_100b37998));
      fVar10 = (float)((double)(byte)param_12[5] / DAT_100b37998);
    }
    (*DAT_1011c70a0)(uVar9,uVar12,fVar10,4);
  }
  local_50 = (int *)0x0;
  if (param_6 != (int *)0x0) {
    (*DAT_1011c5c78)(0xc11);
    local_50 = param_6;
  }
  fVar8 = (float)(iVar6 - iVar2) * DAT_100b39670;
  fVar11 = (float)(iVar1 - iVar3) * DAT_100b39670;
  fVar10 = DAT_100b39674;
  fVar13 = DAT_100b39678;
  do {
    if (local_50 == (int *)0x0) {
      local_50 = (int *)0x0;
      local_44 = param_7;
    }
    else {
      if (param_7 == 0) {
        (*DAT_1011c5bc0)(0xc11);
        break;
      }
      (*DAT_1011c69c8)(*local_50,local_50[1],local_50[2] - *local_50,local_50[3] - local_50[1]);
      local_50 = local_50 + 4;
      local_44 = param_7 + -1;
      fVar10 = DAT_100b39674;
      fVar13 = DAT_100b39678;
    }
    pfVar5 = (float *)(param_8 + 0xc);
    piVar7 = (int *)(param_9 + 0xc);
    iVar6 = param_10;
    if (0 < param_10) {
      do {
        (*DAT_1011c7180)((float)(piVar7[-3] - *param_5) / fVar8 + fVar10,
                         fVar13 - (float)(piVar7[-2] - param_5[1]) / fVar11,
                         (float)(piVar7[-1] - piVar7[-3]) / fVar8,
                         (float)(piVar7[-2] - *piVar7) / fVar11,2);
        (*DAT_1011c7180)(pfVar5[-3],pfVar5[-2],pfVar5[-1] - pfVar5[-3],*pfVar5 - pfVar5[-2],1);
        (*DAT_1011c5be8)(4,(uint)DAT_101116287 * 6,(uint)DAT_10111627b * 6);
        iVar6 = iVar6 + -1;
        pfVar5 = pfVar5 + 4;
        piVar7 = piVar7 + 4;
        fVar10 = DAT_100b39674;
        fVar13 = DAT_100b39678;
      } while (iVar6 != 0);
    }
    param_7 = local_44;
  } while (local_50 != (int *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0001002b0991. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_1011c5768)(param_3,0);
  return;
}

