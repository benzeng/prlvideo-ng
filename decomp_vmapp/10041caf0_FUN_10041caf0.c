
undefined4 FUN_10041caf0(undefined8 param_1,long *param_2,undefined8 param_3)

{
  undefined *puVar1;
  char cVar2;
  undefined4 uVar3;
  QArrayData *local_38;
  undefined1 local_2a;
  undefined1 local_29;
  
  uVar3 = 0;
  if (*(int *)(*param_2 + 4) != 0) {
    QByteArray::right((int)&local_38);
    cVar2 = QByteArray::startsWith((char *)&local_38);
    if (cVar2 == '\0') {
      cVar2 = QByteArray::startsWith((char *)&local_38);
      if (cVar2 == '\0') {
        uVar3 = 1;
        FUN_10041a500(param_1);
      }
      else {
        uVar3 = FUN_10041c130(param_1,param_2);
      }
    }
    else {
      uVar3 = FUN_10041c7e0(param_1,param_2,param_3);
    }
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_2a = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_2a) goto LAB_10041cbb0;
      }
      QArrayData::deallocate(local_38,1,8);
    }
  }
LAB_10041cbb0:
  puVar1 = PTR_shared_null_100ba20d0;
  if (*(int *)PTR_shared_null_100ba20d0 != -1) {
    if (*(int *)PTR_shared_null_100ba20d0 != 0) {
      LOCK();
      *(int *)PTR_shared_null_100ba20d0 = *(int *)PTR_shared_null_100ba20d0 + -1;
      local_29 = *(int *)puVar1 != 0;
      UNLOCK();
      if ((bool)local_29) {
        return uVar3;
      }
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_100ba20d0,1,8);
  }
  return uVar3;
}

