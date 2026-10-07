
void FUN_10057a510(long param_1)

{
  long lVar1;
  QArrayData *local_28;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if ((*(long *)(lVar1 + 0x13b0) != 0) && (2 < DAT_1011b55f8)) {
    QString::toUtf8();
    FUN_1008e3970("Compact","vdisk",3,"[%p]%s[%zu] # of moved blocks %lld",lVar1,
                  local_28 + *(long *)(local_28 + 0x10),*(undefined8 *)(param_1 + 0x28),
                  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 0x13b0) + 0xf0));
    if (*(int *)local_28 != -1) {
      if (*(int *)local_28 != 0) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + -1;
        UNLOCK();
        if (*(int *)local_28 != 0) goto LAB_10057a5cb;
      }
      QArrayData::deallocate(local_28,1,8);
    }
  }
LAB_10057a5cb:
  *(undefined4 *)(param_1 + 0x30) = 6;
  FUN_100577e90(param_1);
  return;
}

