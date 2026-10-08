
void FUN_100b0e4a0(long param_1)

{
  QArrayData *local_20;
  
  if ((*(char *)(param_1 + 0x48) != '\0') &&
     (*(undefined1 *)(param_1 + 0x48) = 0, (*(byte *)(param_1 + 0x18) & 2) != 0)) {
    QString::toUtf8();
    FUN_100df99c0("","dimg",0,"Marking image as \'Need FixConsistency\' on next open %s",
                  local_20 + *(long *)(local_20 + 0x10));
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

