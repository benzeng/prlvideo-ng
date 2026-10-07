
QByteArray * FUN_100414c70(QByteArray *param_1,long param_2)

{
  char cVar1;
  char *pcVar2;
  QByteArray *pQVar3;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  QByteArray::QByteArray(param_1,"",-1);
  pcVar2 = (char *)QByteArray::append((char *)param_1);
  cVar1 = QByteArray::append(pcVar2);
  QByteArray::append(cVar1);
  pQVar3 = (QByteArray *)QByteArray::append((char *)param_1);
  QByteArray::number((int)&local_30,*(int *)(param_2 + 0x10) << 3);
  cVar1 = QByteArray::append(pQVar3);
  QByteArray::append(cVar1);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100414d2b;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_100414d2b:
  pQVar3 = (QByteArray *)QByteArray::append((char *)param_1);
  QByteArray::number((int)&local_38,*(int *)(param_2 + 0x14) << 3);
  cVar1 = QByteArray::append(pQVar3);
  QByteArray::append(cVar1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100414d9b;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_100414d9b:
  if (*(long *)(param_2 + 0x18) != 0) {
    pcVar2 = (char *)QByteArray::append((char *)param_1);
    cVar1 = QByteArray::append(pcVar2);
    QByteArray::append(cVar1);
  }
  if (*(long *)(param_2 + 0x30) != 0) {
    pcVar2 = (char *)QByteArray::append((char *)param_1);
    cVar1 = QByteArray::append(pcVar2);
    QByteArray::append(cVar1);
  }
  if (*(long *)(param_2 + 0x20) != 0) {
    pcVar2 = (char *)QByteArray::append((char *)param_1);
    cVar1 = QByteArray::append(pcVar2);
    QByteArray::append(cVar1);
  }
  if (*(long *)(param_2 + 0x28) != 0) {
    pcVar2 = (char *)QByteArray::append((char *)param_1);
    cVar1 = QByteArray::append(pcVar2);
    QByteArray::append(cVar1);
  }
  if (*(long *)(param_2 + 8) != 0) {
    pcVar2 = (char *)QByteArray::append((char *)param_1);
    cVar1 = QByteArray::append(pcVar2);
    QByteArray::append(cVar1);
  }
  return param_1;
}

