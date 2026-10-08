
undefined1 FUN_100052250(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 uVar2;
  QString local_20;
  undefined1 local_11;
  
  local_20.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  cVar1 = FUN_100051ba0(param_1,param_2,&local_20);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = QFile::exists(&local_20);
  }
  if (*(int *)local_20.field0_0x0 != -1) {
    if (*(int *)local_20.field0_0x0 != 0) {
      LOCK();
      *(int *)local_20.field0_0x0 = *(int *)local_20.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_20.field0_0x0 != 0) {
        return uVar2;
      }
      local_11 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_20.field0_0x0,2,8);
  }
  return uVar2;
}

