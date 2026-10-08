
bool FUN_1006a9460(undefined8 *param_1)

{
  int iVar1;
  char *pcVar2;
  QArrayData *local_20;
  undefined1 local_12;
  
  pcVar2 = (char *)(**(code **)*param_1)();
  QMetaObject::normalizedSignature((char *)&local_20);
  iVar1 = QMetaObject::indexOfSignal(pcVar2);
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) goto LAB_1006a94c3;
      local_12 = 0;
    }
    QArrayData::deallocate(local_20,1,8);
  }
LAB_1006a94c3:
  return iVar1 != -1;
}

