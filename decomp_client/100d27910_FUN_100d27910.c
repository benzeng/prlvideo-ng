
char FUN_100d27910(undefined8 param_1)

{
  int iVar1;
  bool bVar2;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  local_28 = (QArrayData *)QString::fromAscii_helper("PIIX3",5);
  iVar1 = QString::compare(param_1,&local_28,1);
  bVar2 = true;
  if (iVar1 != 0) {
    local_30 = (QArrayData *)QString::fromAscii_helper("PIIX4",5);
    iVar1 = QString::compare(param_1,&local_30,1);
    bVar2 = true;
    if (iVar1 != 0) {
      local_38 = (QArrayData *)QString::fromAscii_helper("ICH6",4);
      iVar1 = QString::compare(param_1,&local_38,1);
      bVar2 = iVar1 == 0;
      if (*(int *)local_38 != -1) {
        if (*(int *)local_38 != 0) {
          LOCK();
          *(int *)local_38 = *(int *)local_38 + -1;
          local_19 = *(int *)local_38 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_100d279d5;
        }
        QArrayData::deallocate(local_38,2,8);
      }
    }
LAB_100d279d5:
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        local_19 = *(int *)local_30 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100d27a05;
      }
      QArrayData::deallocate(local_30,2,8);
    }
  }
LAB_100d27a05:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100d27a35;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_100d27a35:
  if (bVar2) {
    return '\x01';
  }
  local_40 = (QArrayData *)QString::fromAscii_helper("LsiLogic",8);
  iVar1 = QString::compare(param_1,&local_40,1);
  bVar2 = true;
  if (iVar1 != 0) {
    local_48 = (QArrayData *)QString::fromAscii_helper("BusLogic",8);
    iVar1 = QString::compare(param_1,&local_48,1);
    bVar2 = iVar1 == 0;
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_19 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100d27ac9;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_100d27ac9:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100d27af9;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100d27af9:
  if (bVar2) {
    return '\x02';
  }
  local_50 = (QArrayData *)QString::fromAscii_helper("AHCI",4);
  iVar1 = QString::compare(param_1,&local_50,1);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) goto LAB_100d27b5a;
      local_19 = 0;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100d27b5a:
  return (iVar1 == 0) * '\x03';
}

