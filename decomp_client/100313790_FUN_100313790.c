
undefined8 FUN_100313790(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  iVar1 = 0x7e;
  if (param_3 != -0x7ffeffeb) {
    if (param_3 == 0x36d6) {
      iVar1 = 0x3b;
    }
    else {
      if (param_3 != 0x36d2) {
        CMessageDataProvider::createFakeUrlForHelpFromMessageID((int)param_1);
        return param_1;
      }
      iVar1 = 0x3a;
    }
  }
  local_28 = (QArrayData *)QString::fromAscii_helper("prlhelp.%1",10);
  QString::number((uint)&local_30,iVar1);
  QString::arg(param_1,&local_28,&local_30,0,0x20);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100313838;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100313838:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return param_1;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return param_1;
}

