
void FUN_100989600(long param_1,QDataStream *param_2)

{
  int iVar1;
  int local_40 [2];
  undefined2 local_36;
  int local_34;
  
  FUN_1009898e0(param_1 + 0x10);
  local_34 = 0;
  QDataStream::operator>>(param_2,&local_34);
  if (0 < local_34) {
    iVar1 = 0;
    do {
      local_36 = 0;
      local_40[0] = 0;
      QDataStream::operator>>(param_2,local_40);
      local_36 = (undefined2)local_40[0];
      FUN_100988ad0(param_1 + 0x10,&local_36);
      iVar1 = iVar1 + 1;
    } while (iVar1 < local_34);
  }
  return;
}

