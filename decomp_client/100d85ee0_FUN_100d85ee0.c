
undefined1 FUN_100d85ee0(undefined8 param_1)

{
  char cVar1;
  undefined1 uVar2;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  FUN_100d84ba0(&local_30,0,0,0);
  cVar1 = QString::startsWith(param_1,&local_30,0);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100d85f42;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100d85f42:
  uVar2 = 1;
  if (cVar1 == '\0') {
    local_38 = (QArrayData *)QString::fromAscii_helper("/Users/Shared",0xd);
    uVar2 = QString::startsWith(param_1,&local_38,0);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        UNLOCK();
        if (*(int *)local_38 != 0) {
          return uVar2;
        }
        local_21 = 0;
      }
      QArrayData::deallocate(local_38,2,8);
    }
  }
  return uVar2;
}

