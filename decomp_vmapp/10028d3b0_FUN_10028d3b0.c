
void FUN_10028d3b0(void *param_1,uint param_2)

{
  size_t sVar1;
  
  sVar1 = 0x110;
  if (param_2 < 0x110) {
    sVar1 = (ulong)param_2;
  }
  _memcpy(param_1,&DAT_1011b8f5c,sVar1);
  return;
}

