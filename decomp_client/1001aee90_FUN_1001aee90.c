
undefined1 FUN_1001aee90(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 uVar2;
  QString local_68;
  QString local_60;
  QString local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  QString local_38;
  QString local_30;
  undefined1 local_21;
  
  QString::QString(&local_48,0x7c);
  QString::section(&local_50,param_1,&local_48,1,2,0);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_21 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001aef01;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1001aef01:
  QString::QString(&local_40,0x7c);
  QString::section(&local_58,param_2,&local_40,1,2,0);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_21 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001aef5d;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1001aef5d:
  cVar1 = operator==(&local_50,&local_58);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    QString::QString(&local_38,0x7c);
    QString::section(&local_60,param_1,&local_38,5,0xffffffff,0);
    if (*(int *)local_38.field0_0x0 != -1) {
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        local_21 = *(int *)local_38.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1001aefce;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
    }
LAB_1001aefce:
    QString::QString(&local_30,0x7c);
    QString::section(&local_68,param_2,&local_30,5,0xffffffff,0);
    if (*(int *)local_30.field0_0x0 != -1) {
      if (*(int *)local_30.field0_0x0 != 0) {
        LOCK();
        *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
        local_21 = *(int *)local_30.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1001af02a;
      }
      QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
    }
LAB_1001af02a:
    uVar2 = operator==(&local_60,&local_68);
    if (*(int *)local_68.field0_0x0 != -1) {
      if (*(int *)local_68.field0_0x0 != 0) {
        LOCK();
        *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
        local_21 = *(int *)local_68.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1001af069;
      }
      QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
    }
LAB_1001af069:
    if (*(int *)local_60.field0_0x0 != -1) {
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        local_21 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1001af0a5;
      }
      QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
    }
  }
LAB_1001af0a5:
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_21 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001af0d5;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_1001af0d5:
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_50.field0_0x0 != 0) {
        return uVar2;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
  return uVar2;
}

