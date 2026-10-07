
undefined4 FUN_100419440(undefined8 param_1,char *param_2)

{
  char cVar1;
  undefined4 uVar2;
  QArrayData *local_30;
  undefined1 local_21;
  
  local_30 = (QArrayData *)PTR_shared_null_100ba20d0;
  cVar1 = QByteArray::startsWith(param_2);
  if (cVar1 == '\0') {
    cVar1 = QByteArray::startsWith(param_2);
    uVar2 = 0;
    if (cVar1 != '\0') {
      uVar2 = FUN_100419540(param_1,param_2);
    }
  }
  else {
    QByteArray::operator=((QByteArray *)&local_30,"<library-list>\n</library-list>");
    uVar2 = 1;
    FUN_100419170(param_1,&local_30);
  }
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return uVar2;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,1,8);
  }
  return uVar2;
}

