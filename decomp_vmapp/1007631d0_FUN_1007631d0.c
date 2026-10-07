
undefined8 FUN_1007631d0(long param_1,int param_2,void *param_3,int param_4)

{
  size_t sVar1;
  int *piVar2;
  char *pcVar3;
  undefined8 uVar4;
  
  uVar4 = 0;
  sVar1 = _recv(param_2,param_3,(long)param_4,0);
  if (sVar1 != (long)param_4) {
    piVar2 = ___error();
    pcVar3 = _strerror(*piVar2);
    FUN_1008e3970("","etrace",0,"recv() failed: %s",pcVar3);
    _close(param_2);
    _close(*(int *)(param_1 + 0x3c));
    uVar4 = 0xffffffff;
  }
  return uVar4;
}

