
undefined8 FUN_100209ac0(void)

{
  undefined8 uVar1;
  QArrayData *local_28;
  undefined1 local_1a;
  
  uVar1 = FUN_100152280();
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getVmUuid();
  uVar1 = FUN_1001548f0(uVar1,&local_28);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return uVar1;
      }
      local_1a = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return uVar1;
}

