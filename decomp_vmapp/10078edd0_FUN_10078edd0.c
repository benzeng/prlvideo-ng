
size_t FUN_10078edd0(long param_1,void *param_2,size_t param_3)

{
  size_t sVar1;
  size_t sVar2;
  
  sVar2 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x20);
  if ((long)param_3 < (long)sVar2) {
    sVar2 = param_3;
  }
  sVar1 = 0;
  if (0 < (long)sVar2) {
    _memcpy(param_2,(void *)(*(long *)(param_1 + 0x20) + *(long *)(param_1 + 0x10)),sVar2);
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + sVar2;
    sVar1 = sVar2;
  }
  return sVar1;
}

