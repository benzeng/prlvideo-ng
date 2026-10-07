
undefined1 FUN_100756dc0(long *param_1,longlong param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  char cVar2;
  long lVar3;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  
  cVar2 = (**(code **)(*param_1 + 0x88))(param_1,param_4);
  if (cVar2 == '\0') {
    QIODevice::errorString();
    QString::toUtf8();
    FUN_1008e3970("","dbgdump",0,"Failed seeking kcore file: %s",
                  local_40 + *(long *)(local_40 + 0x10));
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        if (*(int *)local_40 != 0) goto LAB_100756f17;
      }
      QArrayData::deallocate(local_40,1,8);
    }
LAB_100756f17:
    if (*(int *)local_48 == -1) {
      return 0;
    }
    local_38 = local_48;
    if (*(int *)local_48 == 0) goto LAB_100756f38;
    LOCK();
    *(int *)local_48 = *(int *)local_48 + -1;
    iVar1 = *(int *)local_48;
    UNLOCK();
  }
  else {
    lVar3 = QIODevice::read((char *)param_1,param_2);
    if (lVar3 == param_3) {
      return 1;
    }
    QIODevice::errorString();
    QString::toUtf8();
    FUN_1008e3970("","dbgdump",0,"Failed reading kcore file: %s",
                  local_30 + *(long *)(local_30 + 0x10));
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        UNLOCK();
        if (*(int *)local_30 != 0) goto LAB_100756e74;
      }
      QArrayData::deallocate(local_30,1,8);
    }
LAB_100756e74:
    if (*(int *)local_38 == -1) {
      return 0;
    }
    if (*(int *)local_38 == 0) goto LAB_100756f38;
    LOCK();
    *(int *)local_38 = *(int *)local_38 + -1;
    iVar1 = *(int *)local_38;
    UNLOCK();
  }
  if (iVar1 != 0) {
    return 0;
  }
LAB_100756f38:
  QArrayData::deallocate(local_38,2,8);
  return 0;
}

