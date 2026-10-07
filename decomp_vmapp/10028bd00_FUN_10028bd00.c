
void FUN_10028bd00(void *param_1,uint param_2)

{
  size_t sVar1;
  
  sVar1 = 0xc;
  if (param_2 < 0xc) {
    sVar1 = (ulong)param_2;
  }
  _memcpy(param_1,&DAT_1011b8bb8,sVar1);
  return;
}

