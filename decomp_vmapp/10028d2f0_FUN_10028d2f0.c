
void FUN_10028d2f0(long param_1,void *param_2,uint param_3)

{
  size_t sVar1;
  
  sVar1 = 0x1c;
  if (param_3 < 0x1c) {
    sVar1 = (ulong)param_3;
  }
  _memcpy(param_2,(void *)(param_1 + 0x24),sVar1);
  return;
}

