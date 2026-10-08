
void FUN_1009888d0(long param_1,QDataStream *param_2)

{
  int iVar1;
  signed local_60 [8];
  undefined **local_58;
  undefined **local_50;
  Data *local_48;
  short local_40 [4];
  int local_38;
  undefined1 local_31;
  
  FUN_100988c20(param_1 + 8);
  local_38 = 0;
  QDataStream::operator>>(param_2,&local_38);
  if (0 < local_38) {
    iVar1 = 0;
    do {
      local_60[0] = 0xff;
      local_58 = &PTR_FUN_10227dad8;
      local_50 = &PTR_FUN_10227db30;
      local_48 = (Data *)PTR_shared_null_1021e15e8;
      local_40[0] = -1;
      QDataStream::operator>>(param_2,local_60);
      FUN_100989600(&local_58,param_2);
      QDataStream::operator>>(param_2,local_40);
      FUN_100988b80(param_1 + 8,local_60);
      local_58 = &PTR_FUN_10227dad8;
      local_50 = &PTR_FUN_10227db30;
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_31 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1009889a7;
        }
        QListData::dispose(local_48);
      }
LAB_1009889a7:
      iVar1 = iVar1 + 1;
    } while (iVar1 < local_38);
  }
  return;
}

