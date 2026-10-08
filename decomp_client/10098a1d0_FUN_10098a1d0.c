
void FUN_10098a1d0(long param_1,QDataStream *param_2)

{
  int iVar1;
  uint local_48 [2];
  ulong local_40;
  int local_34;
  
  FUN_10009c3a0(param_1 + 0x10);
  local_34 = 0;
  QDataStream::operator>>(param_2,&local_34);
  if (0 < local_34) {
    iVar1 = 0;
    do {
      local_40 = 0;
      local_48[0] = 0;
      QDataStream::operator>>(param_2,(int *)local_48);
      local_40 = (ulong)local_48[0];
      FUN_10009c430(param_1 + 0x10,&local_40);
      iVar1 = iVar1 + 1;
    } while (iVar1 < local_34);
  }
  return;
}

