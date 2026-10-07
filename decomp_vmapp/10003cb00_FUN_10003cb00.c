
undefined8 FUN_10003cb00(long param_1,long param_2)

{
  ushort uVar1;
  char *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  long local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  uVar3 = 0xf0000002;
  if (*(int *)(param_2 + 8) == 0x9050) {
    uVar1 = *(ushort *)(param_2 + 0x14);
    uVar3 = 0xf0000003;
    if (0x1f < uVar1) {
      pcVar2 = (char *)FUN_1002a6010(param_2);
      QByteArray::QByteArray((QByteArray *)&local_30,pcVar2,(uint)uVar1);
      FUN_100519b50(&local_38,param_1 + 0x28);
      if (*(int *)(local_38 + 0xc) == *(int *)(local_38 + 8)) {
        bVar4 = *(int *)(local_30 + *(long *)(local_30 + 0x10)) == 1;
      }
      else {
        bVar4 = false;
      }
      FUN_100037320(&local_38);
      if (bVar4) {
        QMutex::lock();
        QByteArray::operator=((QByteArray *)(param_1 + 0xb0),(QByteArray *)&local_30);
        QMutex::unlock();
      }
      else {
        FUN_10051c510(param_1,&local_30);
      }
      uVar3 = 0;
      if (*(int *)local_30 != -1) {
        if (*(int *)local_30 != 0) {
          LOCK();
          *(int *)local_30 = *(int *)local_30 + -1;
          UNLOCK();
          if (*(int *)local_30 != 0) {
            return 0;
          }
          local_21 = 0;
        }
        QArrayData::deallocate(local_30,1,8);
      }
    }
  }
  return uVar3;
}

