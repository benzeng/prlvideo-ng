
void FUN_10029dcd0(long param_1,undefined8 param_2,undefined8 param_3,void *param_4,uint param_5)

{
  size_t sVar1;
  
  sVar1 = (ulong)param_5 * *(long *)(param_1 + 0xd0);
  if (*(int *)(param_1 + 0xc0) != 0) {
    ___bzero(param_4,sVar1);
    return;
  }
  _memset(param_4,0x7f,sVar1);
  return;
}

