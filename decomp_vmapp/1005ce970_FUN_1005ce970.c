
bool FUN_1005ce970(long *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  QArrayData *local_28;
  undefined1 local_19;
  
  local_28 = (QArrayData *)PTR_shared_null_100ba20d0;
  cVar1 = (**(code **)(*param_1 + 0x48))(param_1,&local_28);
  bVar2 = cVar1 != '\0';
  if (bVar2) {
    FUN_10000c490(param_2,&local_28);
  }
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return bVar2;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return bVar2;
}

