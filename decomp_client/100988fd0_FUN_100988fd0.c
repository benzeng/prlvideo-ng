
void FUN_100988fd0(long param_1,QDataStream *param_2)

{
  int iVar1;
  int local_40 [2];
  undefined1 local_35;
  int local_34;
  
  FUN_1009892a0(param_1 + 0x10);
  local_34 = 0;
  QDataStream::operator>>(param_2,&local_34);
  if (0 < local_34) {
    iVar1 = 0;
    do {
      local_35 = 0;
      local_40[0] = 0;
      QDataStream::operator>>(param_2,local_40);
      local_35 = (undefined1)local_40[0];
      FUN_100988a20(param_1 + 0x10,&local_35);
      iVar1 = iVar1 + 1;
    } while (iVar1 < local_34);
  }
  return;
}

