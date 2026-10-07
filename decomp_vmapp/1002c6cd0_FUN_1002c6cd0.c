
byte FUN_1002c6cd0(undefined8 param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  iVar3 = FUN_1002c6e30();
  if (iVar3 == 0) {
    return 0;
  }
  local_28 = (QArrayData *)QString::fromAscii_helper("VIRTUAL@CCID",0xc);
  cVar1 = QString::startsWith(param_1,&local_28,1);
  bVar2 = 0;
  if (cVar1 == '\0') {
    local_30 = (QArrayData *)QString::fromAscii_helper("VIRTUAL@MSC",0xb);
    bVar2 = QString::startsWith(param_1,&local_30,1);
    bVar2 = bVar2 ^ 1;
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        local_19 = *(int *)local_30 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1002c6d79;
      }
      QArrayData::deallocate(local_30,2,8);
    }
  }
LAB_1002c6d79:
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

