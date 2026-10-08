
undefined1 FUN_1001b35f0(undefined8 param_1)

{
  char cVar1;
  undefined1 uVar2;
  QArrayData *local_20;
  undefined1 local_12;
  
  cVar1 = FUN_1001b36b0();
  if (cVar1 == '\0') {
    local_20 = (QArrayData *)QString::fromAscii_helper("VIRTUAL",7);
    uVar2 = QString::startsWith(param_1,&local_20,1);
    if (*(int *)local_20 != -1) {
      if (*(int *)local_20 != 0) {
        LOCK();
        *(int *)local_20 = *(int *)local_20 + -1;
        UNLOCK();
        if (*(int *)local_20 != 0) {
          return uVar2;
        }
        local_12 = 0;
      }
      QArrayData::deallocate(local_20,2,8);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

