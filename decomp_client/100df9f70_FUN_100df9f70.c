
void FUN_100df9f70(void *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  time_t tVar4;
  char *pcVar5;
  bool bVar6;
  int local_140 [2];
  long local_138;
  int local_b0 [2];
  long local_a8;
  
  tVar4 = _time((time_t *)0x0);
  if (DAT_10230ffe8 == -1) {
    FUN_100dfa450();
LAB_100dfa016:
    iVar3 = _open(&DAT_102310404,0x209,0x1b6);
    if (iVar3 < 0) {
      if (iVar3 == -1) {
        pcVar5 = (char *)FUN_100dfa1a0();
        _strncpy(&DAT_102310004,pcVar5,0x400);
        DAT_102310403 = 0;
        _snprintf(&DAT_102310404,0x400,"%s/%s",pcVar5,"parallels.log");
        iVar2 = DAT_10230ffe8;
        DAT_102310803 = 0;
        DAT_10230ffe8 = -1;
        if (iVar2 != -1) {
          _close(iVar2);
        }
        FUN_100dfa450();
        iVar3 = _open(&DAT_102310404,0x209,0x1b6);
        if (-1 < iVar3) goto LAB_100dfa0cc;
        iVar2 = -1;
        if (iVar3 == -1) goto LAB_100dfa0f2;
      }
    }
    else {
LAB_100dfa0cc:
      _fchmod(iVar3,0x1b6);
    }
    iVar1 = DAT_10230ffe8;
    LOCK();
    UNLOCK();
    bVar6 = DAT_10230ffe8 != -1;
    iVar2 = iVar3;
    DAT_10230ffe8 = iVar3;
    if (bVar6) {
      _close(iVar1);
      iVar2 = DAT_10230ffe8;
    }
  }
  else {
    iVar2 = DAT_10230ffe8;
    if (tVar4 == DAT_10230ffe0) goto LAB_100dfa0f7;
    LOCK();
    UNLOCK();
    bVar6 = tVar4 != DAT_10230ffe0;
    DAT_10230ffe0 = tVar4;
    if (bVar6) {
      FUN_100dfa450();
      iVar2 = _stat_INODE64(&DAT_102310404,local_b0);
      if ((((iVar2 < 0) || (iVar2 = _fstat_INODE64(DAT_10230ffe8,local_140), iVar2 < 0)) ||
          (local_b0[0] != local_140[0])) || (iVar2 = DAT_10230ffe8, local_a8 != local_138))
      goto LAB_100dfa016;
    }
  }
LAB_100dfa0f2:
  if (iVar2 == -1) {
    return;
  }
LAB_100dfa0f7:
  _write(iVar2,param_1,(long)param_2);
  return;
}

