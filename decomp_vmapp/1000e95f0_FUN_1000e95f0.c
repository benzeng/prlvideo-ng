
undefined1 FUN_1000e95f0(long param_1,QByteArray *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined1 uVar4;
  QArrayData *local_30;
  undefined1 local_21;
  
  cVar1 = FUN_1000e9810();
  if (cVar1 == '\0') {
    uVar4 = 0;
  }
  else {
    pcVar3 = (char *)_CFDataGetBytePtr(*(undefined8 *)(param_1 + 8));
    iVar2 = _CFDataGetLength(*(undefined8 *)(param_1 + 8));
    QByteArray::QByteArray((QByteArray *)&local_30,pcVar3,iVar2);
    QByteArray::operator=(param_2,(QByteArray *)&local_30);
    uVar4 = 1;
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        UNLOCK();
        if (*(int *)local_30 != 0) {
          return 1;
        }
        local_21 = 0;
      }
      QArrayData::deallocate(local_30,1,8);
    }
  }
  return uVar4;
}

