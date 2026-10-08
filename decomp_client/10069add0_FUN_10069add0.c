
void FUN_10069add0(long param_1)

{
  undefined8 uVar1;
  QString local_20;
  undefined1 local_12;
  
  uVar1 = FUN_10018c2b0(*(undefined8 *)(param_1 + 0x28));
  FUN_100109d60(&local_20,uVar1,0);
  MacUtils::showInFinder(&local_20);
  if (*(int *)local_20.field0_0x0 != -1) {
    if (*(int *)local_20.field0_0x0 != 0) {
      LOCK();
      *(int *)local_20.field0_0x0 = *(int *)local_20.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_20.field0_0x0 != 0) {
        return;
      }
      local_12 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_20.field0_0x0,2,8);
  }
  return;
}

