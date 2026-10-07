
long FUN_100761d70(int param_1,void *param_2,size_t param_3,long param_4)

{
  ssize_t sVar1;
  int *piVar2;
  long local_38;
  
  local_38 = 0;
  while( true ) {
    while (sVar1 = _pwrite(param_1,param_2,param_3,param_4), -1 < sVar1) {
      local_38 = local_38 + sVar1;
      param_3 = param_3 - sVar1;
      if (param_3 == 0) {
        return local_38;
      }
      if (2 < DAT_1011b55f8) {
        FUN_1008e3970("","HostFile",3,
                      "recovered partial write: fd %d, offs %llx, size %llx, res %llx",param_1,
                      param_4,param_3,sVar1);
      }
      param_4 = param_4 + sVar1;
      param_2 = (void *)((long)param_2 + sVar1);
    }
    piVar2 = ___error();
    if (*piVar2 == 0x1c) break;
    piVar2 = ___error();
    if (*piVar2 != 4) {
      return -8;
    }
  }
  return -0x10;
}

