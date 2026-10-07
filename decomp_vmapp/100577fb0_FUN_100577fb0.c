
void FUN_100577fb0(long param_1)

{
  undefined8 uVar1;
  QArrayData *local_28;
  
  if (*(int *)(param_1 + 0x30) != 9) {
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x30) = 9;
    if (3 < DAT_1011b55f8) {
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      QString::toUtf8();
      FUN_1008e3970("Compact","vdisk",4,"[%p]%s[%zu] State %d TERMINATED",uVar1,
                    local_28 + *(long *)(local_28 + 0x10),*(undefined8 *)(param_1 + 0x28),
                    *(undefined4 *)(param_1 + 0x44));
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
  }
  return;
}

