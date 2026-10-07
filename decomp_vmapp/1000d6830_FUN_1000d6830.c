
undefined8 FUN_1000d6830(QString *param_1)

{
  int iVar1;
  undefined8 uVar2;
  QArrayData *local_30;
  
  QFile::fileName();
  iVar1 = *(int *)(local_30 + 4);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) goto LAB_1000d6883;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1000d6883:
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = QFile::link(param_1);
  }
  return uVar2;
}

