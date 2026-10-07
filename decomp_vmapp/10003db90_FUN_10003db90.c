
undefined8 FUN_10003db90(undefined8 param_1,QByteArray *param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  QArrayData *local_28;
  undefined1 local_19;
  
  lVar2 = *(long *)param_2;
  uVar1 = *(uint *)(*(long *)(lVar2 + 0x10) + 0x30 + lVar2);
  uVar3 = 0;
  if ((ulong)uVar1 + 0x14 <= (ulong)*(uint *)(lVar2 + 4)) {
    QByteArray::QByteArray
              ((QByteArray *)&local_28,(char *)(*(long *)(lVar2 + 0x10) + 0x20 + lVar2),uVar1 + 0x14
              );
    QByteArray::operator=(param_2,(QByteArray *)&local_28);
    uVar3 = 0x9100;
    if (*(int *)local_28 != -1) {
      if (*(int *)local_28 != 0) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + -1;
        UNLOCK();
        if (*(int *)local_28 != 0) {
          return 0x9100;
        }
        local_19 = 0;
      }
      QArrayData::deallocate(local_28,1,8);
    }
  }
  return uVar3;
}

