
undefined1
FUN_1007567e0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  char cVar1;
  undefined1 uVar2;
  QArrayData *local_38;
  QArrayData *local_30;
  
  cVar1 = (**(code **)(*param_2 + 0x88))(param_2,param_5);
  if (cVar1 != '\0') {
    uVar2 = FUN_100756690();
    return uVar2;
  }
  QIODevice::errorString();
  QString::toUtf8();
  FUN_1008e3970("","dbgdump",0,"Failed seeking kcore file: %s",local_30 + *(long *)(local_30 + 0x10)
               );
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) goto LAB_10075688f;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_10075688f:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return 0;
      }
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return 0;
}

