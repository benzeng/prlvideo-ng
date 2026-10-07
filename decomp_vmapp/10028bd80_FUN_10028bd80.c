
void FUN_10028bd80(undefined *param_1,uint param_2,int param_3)

{
  size_t sVar1;
  undefined *puVar2;
  
  if (param_3 == 0) {
    puVar2 = param_1;
    param_1 = &DAT_1011b8bf4;
  }
  else {
    puVar2 = &DAT_1011b8bf4;
  }
  sVar1 = 0xc;
  if (param_2 < 0xc) {
    sVar1 = (ulong)param_2;
  }
  _memcpy(puVar2,param_1,sVar1);
  return;
}

