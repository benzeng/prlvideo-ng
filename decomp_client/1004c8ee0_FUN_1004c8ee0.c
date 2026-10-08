
/* WARNING: Removing unreachable block (ram,0x0001004c8f9e) */

void FUN_1004c8ee0(long param_1)

{
  undefined8 uVar1;
  QArrayData *local_48;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x18);
  QUuid::toString();
  QLineEdit::setMaxLength((int)uVar1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return;
      }
    }
    QArrayData::deallocate(local_48,2,8);
  }
  return;
}

