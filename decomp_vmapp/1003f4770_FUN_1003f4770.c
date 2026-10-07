
undefined8 FUN_1003f4770(long param_1)

{
  long lVar1;
  char cVar2;
  QArrayData *local_30;
  QString local_28;
  undefined1 local_19;
  
  if (*(long **)(param_1 + 0x30) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x30) + 0x28))();
    *(undefined4 *)(param_1 + 0x2c) = 0;
    local_30 = (QArrayData *)QString::fromAscii_helper("/dev/",5);
    lVar1 = param_1 + 0x120;
    cVar2 = QString::startsWith(lVar1,&local_30,1);
    if (cVar2 != '\0') {
      QString::remove((int)lVar1,0);
    }
    FUN_100785e80(lVar1);
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        local_19 = *(int *)local_30 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1003f481b;
      }
      QArrayData::deallocate(local_30,2,8);
    }
  }
LAB_1003f481b:
  if (((QString *)(param_1 + 0x120))->field0_0x0 !=
      (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0) {
    local_28.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
    QString::operator=((QString *)(param_1 + 0x120),&local_28);
    if (*(int *)local_28.field0_0x0 != -1) {
      if (*(int *)local_28.field0_0x0 != 0) {
        LOCK();
        *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
        UNLOCK();
        if (*(int *)local_28.field0_0x0 != 0) goto LAB_1003f4872;
        local_19 = 0;
      }
      QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
    }
  }
LAB_1003f4872:
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 2;
  *(undefined4 *)(param_1 + 0x84) = 1;
  *(undefined4 *)(param_1 + 0x88) = 0;
  return 0;
}

