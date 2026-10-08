
QString * FUN_10021c190(QString *param_1,undefined8 *param_2)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  QTypedArrayData<unsigned_short> *pQVar4;
  QString local_48;
  undefined1 local_40 [12];
  undefined1 local_29;
  
  iVar1 = (**(code **)*param_2)(param_2);
  pcVar2 = (char *)(**(code **)*param_2)(param_2);
  QMetaObject::indexOfEnumerator(pcVar2);
  local_40 = QMetaObject::enumerator(iVar1);
  pcVar2 = (char *)QMetaEnum::valueToKey((int)local_40);
  iVar1 = -1;
  if (pcVar2 != (char *)0x0) {
    sVar3 = _strlen(pcVar2);
    iVar1 = (int)sVar3;
  }
  pQVar4 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(pcVar2,iVar1);
  param_1->field0_0x0 = pQVar4;
  if (*(int *)(pQVar4 + 4) == 0) {
    CAbstractTask::subTaskToString((int)&local_48);
    QString::operator=(param_1,&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        UNLOCK();
        if (*(int *)local_48.field0_0x0 != 0) {
          return param_1;
        }
        local_29 = 0;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
  }
  return param_1;
}

