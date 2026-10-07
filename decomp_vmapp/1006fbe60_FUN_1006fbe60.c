
undefined8 FUN_1006fbe60(undefined8 param_1)

{
  uid_t uVar1;
  char *pcVar2;
  long lVar3;
  QArrayData *local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  pcVar2 = _getenv("HOME");
  if (pcVar2 == (char *)0x0) {
    uVar1 = _getuid();
    lVar3 = _getpwuid(uVar1);
    if (lVar3 == 0) {
      QByteArray::QByteArray((QByteArray *)&local_30,"/",-1);
      FUN_1006fcdd0(param_1,(QByteArray *)&local_30);
      if (*(int *)local_30 == -1) {
        return param_1;
      }
      local_38 = local_30;
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        UNLOCK();
        if (*(int *)local_30 != 0) {
          return param_1;
        }
        local_19 = 0;
      }
    }
    else {
      pcVar2 = "/";
      if (*(char **)(lVar3 + 0x30) != (char *)0x0) {
        pcVar2 = *(char **)(lVar3 + 0x30);
      }
      QByteArray::QByteArray((QByteArray *)&local_28,pcVar2,-1);
      FUN_1006fcdd0(param_1,(QByteArray *)&local_28);
      if (*(int *)local_28 == -1) {
        return param_1;
      }
      local_38 = local_28;
      if (*(int *)local_28 != 0) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + -1;
        UNLOCK();
        if (*(int *)local_28 != 0) {
          return param_1;
        }
        local_19 = 0;
      }
    }
  }
  else {
    QByteArray::QByteArray((QByteArray *)&local_38,pcVar2,-1);
    FUN_1006fcdd0(param_1,(QByteArray *)&local_38);
    if (*(int *)local_38 == -1) {
      return param_1;
    }
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return param_1;
      }
      local_19 = 0;
    }
  }
  QArrayData::deallocate(local_38,1,8);
  return param_1;
}

