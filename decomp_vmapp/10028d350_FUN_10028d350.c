
void FUN_10028d350(long param_1,void *param_2,uint param_3)

{
  size_t sVar1;
  
  sVar1 = 0x30;
  if (param_3 < 0x30) {
    sVar1 = (ulong)param_3;
  }
  _memcpy(param_2,(void *)(param_1 + 0x38),sVar1);
  return;
}

