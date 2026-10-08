
void FUN_100080310(long param_1)

{
  undefined8 uVar1;
  QArrayData *local_28;
  undefined1 local_1a;
  
  CAppliance::getApplianceId();
  uVar1 = FUN_10007f750(*(undefined8 *)(param_1 + 0x10),&local_28);
  FUN_10007f620(param_1,uVar1);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return;
      }
      local_1a = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return;
}

