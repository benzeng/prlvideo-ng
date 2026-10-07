
void FUN_10065fe40(long param_1)

{
  QArrayData *local_20;
  
  if (1 < DAT_1011b55f8) {
    QString::toUtf8();
    FUN_1008e3970("","pvsHostInfo",2,
                  "name [%s], start %lld bytes, size %lld bytes, index %u, type %u (0x%X)",
                  local_20 + *(long *)(local_20 + 0x10),*(undefined8 *)(param_1 + 0x10),
                  *(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x18),
                  *(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x1c));
    if (*(int *)local_20 != -1) {
      if (*(int *)local_20 != 0) {
        LOCK();
        *(int *)local_20 = *(int *)local_20 + -1;
        UNLOCK();
        if (*(int *)local_20 != 0) {
          return;
        }
      }
      QArrayData::deallocate(local_20,1,8);
    }
  }
  return;
}

