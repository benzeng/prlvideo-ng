
void FUN_100798ff0(long param_1)

{
  undefined8 uVar1;
  QArrayData *local_28;
  undefined1 local_1a;
  
  if (*(int *)(*(long *)(param_1 + 0x40) + 0x160) != 2) {
    uVar1 = FUN_100794960();
    CAppliance::getApplianceId();
    FUN_100796290(uVar1,&local_28);
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
  }
  return;
}

