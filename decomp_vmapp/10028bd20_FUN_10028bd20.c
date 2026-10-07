
void FUN_10028bd20(undefined *param_1,uint param_2,int param_3)

{
  size_t sVar1;
  undefined *puVar2;
  
  if (param_3 == 0) {
    puVar2 = param_1;
    param_1 = &DAT_1011b8bc4;
  }
  else {
    puVar2 = &DAT_1011b8bc4;
  }
  sVar1 = 0x20;
  if (param_2 < 0x20) {
    sVar1 = (ulong)param_2;
  }
  _memcpy(puVar2,param_1,sVar1);
  return;
}

