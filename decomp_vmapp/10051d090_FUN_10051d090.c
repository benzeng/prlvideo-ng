
undefined8 FUN_10051d090(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  QArrayData *local_30;
  undefined1 local_21;
  
  lVar1 = FUN_1002a6120(param_2,0,0);
  uVar2 = 0xf000001c;
  if (lVar1 != 0) {
    QByteArray::QByteArray((QByteArray *)&local_30,*(int *)(lVar1 + 8),'\0');
    if ((1 < *(uint *)local_30) || (*(long *)(local_30 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_30,*(uint *)(local_30 + 4) + 1,*(uint *)(local_30 + 8) >> 0x1f)
      ;
    }
    FUN_1002a5990(lVar1,0,local_30 + *(long *)(local_30 + 0x10),*(uint *)(local_30 + 4));
    FUN_10051c510(param_1,&local_30);
    uVar2 = 0;
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
  return uVar2;
}

