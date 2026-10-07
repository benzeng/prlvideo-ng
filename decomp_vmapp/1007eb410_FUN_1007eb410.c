
long * FUN_1007eb410(long *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                    int param_7,int param_8)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  iVar1 = (int)((0xe - param_3) - (0xe - param_3 >> 0x1f & 0xbU)) / 0xc;
  lVar4 = (long)(param_2 - (param_2 >> 0x1f)) + 0x12c0;
  uVar5 = (param_3 + iVar1 * 0xc) * 0x99 - 0x1c9;
  lVar2 = (lVar4 - iVar1) * 0x16d + (long)((int)(uVar5 - (uVar5 >> 0x1d & 4)) / 5 + param_4);
  lVar4 = lVar4 - iVar1;
  if (lVar4 < 0) {
    lVar3 = SUB168(SEXT816(lVar4 + -99) * SEXT816(0x5c28f5c28f5c28f5),8) - (lVar4 + -99);
    lVar3 = ((lVar3 >> 6) - (lVar3 >> 0x3f)) +
            ((long)(lVar4 + -3 + ((ulong)(lVar4 + -3 >> 0x3f) >> 0x3e)) >> 2) + lVar2;
    lVar2 = 399;
  }
  else {
    lVar3 = SUB168(SEXT816(lVar4) * SEXT816(0x5c28f5c28f5c28f5),8) - lVar4;
    lVar3 = ((lVar3 >> 6) - (lVar3 >> 0x3f)) +
            ((long)(((ulong)(lVar4 >> 0x3f) >> 0x3e) + lVar4) >> 2) + lVar2;
    lVar2 = 0;
  }
  *param_1 = (long)(param_7 * 1000 + param_6 * 60000 + param_5 * 3600000 + param_8) +
             ((lVar4 - lVar2) / 400 + lVar3) * 86400000 + -0xc24ce3907c00;
  return param_1;
}

