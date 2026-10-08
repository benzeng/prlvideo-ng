
byte FUN_1002b4e10(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  local_38 = (QArrayData *)QString::fromAscii_helper(".iso",4);
  cVar2 = QString::endsWith(param_1,&local_38,0);
  if (cVar2 == '\0') {
    bVar1 = false;
LAB_1002b4e82:
    local_48 = (QArrayData *)QString::fromAscii_helper(".app",4);
    cVar2 = QString::endsWith(param_1,&local_48,0);
    if (cVar2 == '\0') {
      bVar3 = 0;
    }
    else {
      local_50 = (QArrayData *)QString::fromAscii_helper(".iso",4);
      bVar3 = QString::endsWith(param_2,&local_50,0);
      bVar3 = bVar3 ^ 1;
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_29 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1002b4f4c;
        }
        QArrayData::deallocate(local_50,2,8);
      }
    }
LAB_1002b4f4c:
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_29 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002b4f7c;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_1002b4f7c:
    if (!bVar1) goto LAB_1002b4fb1;
  }
  else {
    local_40 = (QArrayData *)QString::fromAscii_helper(".iso",4);
    cVar2 = QString::endsWith(param_2,&local_40,0);
    bVar1 = true;
    bVar3 = 1;
    if (cVar2 != '\0') goto LAB_1002b4e82;
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002b4fb1;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1002b4fb1:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return bVar3;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return bVar3;
}

