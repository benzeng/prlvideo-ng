
void FUN_1005780e0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  QArrayData *local_28;
  
  *(undefined4 *)(param_1 + 0x30) = 8;
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0xffffffffffffffff;
  lVar3 = QDateTime::currentMSecsSinceEpoch();
  if (2 < DAT_1011b55f8) {
    lVar1 = *(long *)(param_1 + 0x50);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    QString::toUtf8();
    FUN_1008e3970("Compact","vdisk",3,"[%p]=== Compact done for disk [%s] , duration %lld ms",uVar2,
                  local_28 + *(long *)(local_28 + 0x10),lVar3 - lVar1);
    if (*(int *)local_28 != -1) {
      if (*(int *)local_28 != 0) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + -1;
        UNLOCK();
        if (*(int *)local_28 != 0) {
          return;
        }
      }
      QArrayData::deallocate(local_28,1,8);
    }
  }
  return;
}

