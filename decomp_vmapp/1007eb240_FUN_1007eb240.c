
long * FUN_1007eb240(long *param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  timeval local_60;
  tm local_50;
  
  _gettimeofday(&local_60,(void *)0x0);
  _localtime_r(&local_60.tv_sec,&local_50);
  iVar1 = (int)((0xd - local_50.tm_mon) - (0xd - local_50.tm_mon >> 0x1f & 0xbU)) / 0xc;
  lVar4 = ((long)local_50.tm_year + 0x76cU >> 0x1f & 1) + 0x1a2c + (long)local_50.tm_year;
  uVar2 = (local_50.tm_mon + iVar1 * 0xc) * 0x99 - 0x130;
  lVar3 = (lVar4 - iVar1) * 0x16d +
          (long)((int)(uVar2 - (uVar2 >> 0x1d & 4)) / 5) + (long)local_50.tm_mday;
  lVar4 = lVar4 - iVar1;
  if (lVar4 < 0) {
    lVar5 = SUB168(SEXT816(lVar4 + -99) * SEXT816(0x5c28f5c28f5c28f5),8) - (lVar4 + -99);
    lVar5 = ((lVar5 >> 6) - (lVar5 >> 0x3f)) +
            ((long)(lVar4 + -3 + ((ulong)(lVar4 + -3 >> 0x3f) >> 0x3e)) >> 2) + lVar3;
    lVar3 = 399;
  }
  else {
    lVar5 = SUB168(SEXT816(lVar4) * SEXT816(0x5c28f5c28f5c28f5),8) - lVar4;
    lVar5 = ((lVar5 >> 6) - (lVar5 >> 0x3f)) +
            ((long)(((ulong)(lVar4 >> 0x3f) >> 0x3e) + lVar4) >> 2) + lVar3;
    lVar3 = 0;
  }
  *param_1 = (long)(local_50.tm_sec * 1000 + local_50.tm_min * 60000 + local_50.tm_hour * 3600000 +
                   local_60.tv_usec / 1000) + ((lVar4 - lVar3) / 400 + lVar5) * 86400000 +
             -0xc24ce3907c00;
  return param_1;
}

