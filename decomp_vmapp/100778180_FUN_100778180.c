
int FUN_100778180(void)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  int local_20 [2];
  size_t local_18;
  int local_c;
  
  local_c = 0;
  local_18 = 4;
  local_20[0] = 6;
  local_20[1] = 0x19;
  iVar1 = _sysctl(local_20,2,&local_c,&local_18,(void *)0x0,0);
  if (iVar1 < 0) {
    piVar2 = ___error();
    _strerror(*piVar2);
    FUN_1008e3970("","HostUtils",0,"sysctl(HW_AVAILCPU) failed: %s");
  }
  else if (0 < local_c) {
    return local_c;
  }
  local_20[1] = 3;
  iVar1 = _sysctl(local_20,2,&local_c,&local_18,(void *)0x0,0);
  if (iVar1 < 0) {
    piVar2 = ___error();
    pcVar3 = _strerror(*piVar2);
    FUN_1008e3970("","HostUtils",0,"sysctl(HW_NCPU) failed: %s",pcVar3);
  }
  else if (0 < local_c) {
    return local_c;
  }
  return 1;
}

