
void FUN_100989c90(long param_1,QDataStream *param_2)

{
  int iVar1;
  int local_40 [2];
  int local_38;
  int local_34;
  
  FUN_100223940(param_1 + 0x10);
  local_34 = 0;
  QDataStream::operator>>(param_2,&local_34);
  if (0 < local_34) {
    iVar1 = 0;
    do {
      local_38 = 0;
      local_40[0] = 0;
      QDataStream::operator>>(param_2,local_40);
      local_38 = local_40[0];
      FUN_1000bf010(param_1 + 0x10,&local_38);
      iVar1 = iVar1 + 1;
    } while (iVar1 < local_34);
  }
  return;
}

