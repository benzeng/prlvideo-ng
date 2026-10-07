
void FUN_1008e3f20(void *param_1,int param_2)

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
  if (DAT_1011b5610 == -1) {
    FUN_1008e4400();
LAB_1008e3fc6:
    iVar3 = _open(&DAT_1011b5a2c,0x209,0x1b6);
    if (iVar3 < 0) {
      if (iVar3 == -1) {
        pcVar5 = (char *)FUN_1008e4150();
        _strncpy(&DAT_1011b562c,pcVar5,0x400);
        DAT_1011b5a2b = 0;
        _snprintf(&DAT_1011b5a2c,0x400,"%s/%s",pcVar5,"parallels.log");
        iVar2 = DAT_1011b5610;
        DAT_1011b5e2b = 0;
        DAT_1011b5610 = -1;
        if (iVar2 != -1) {
          _close(iVar2);
        }
        FUN_1008e4400();
        iVar3 = _open(&DAT_1011b5a2c,0x209,0x1b6);
        if (-1 < iVar3) goto LAB_1008e407c;
        iVar2 = -1;
        if (iVar3 == -1) goto LAB_1008e40a2;
      }
    }
    else {
LAB_1008e407c:
      _fchmod(iVar3,0x1b6);
    }
    iVar1 = DAT_1011b5610;
    LOCK();
    UNLOCK();
    bVar6 = DAT_1011b5610 != -1;
    iVar2 = iVar3;
    DAT_1011b5610 = iVar3;
    if (bVar6) {
      _close(iVar1);
      iVar2 = DAT_1011b5610;
    }
  }
  else {
    iVar2 = DAT_1011b5610;
    if (tVar4 == DAT_1011b5608) goto LAB_1008e40a7;
    LOCK();
    UNLOCK();
    bVar6 = tVar4 != DAT_1011b5608;
    DAT_1011b5608 = tVar4;
    if (bVar6) {
      FUN_1008e4400();
      iVar2 = _stat_INODE64(&DAT_1011b5a2c,local_b0);
      if ((((iVar2 < 0) || (iVar2 = _fstat_INODE64(DAT_1011b5610,local_140), iVar2 < 0)) ||
          (local_b0[0] != local_140[0])) || (iVar2 = DAT_1011b5610, local_a8 != local_138))
      goto LAB_1008e3fc6;
    }
  }
LAB_1008e40a2:
  if (iVar2 == -1) {
    return;
  }
LAB_1008e40a7:
  _write(iVar2,param_1,(long)param_2);
  return;
}

