
bool FUN_100114050(void)

{
  long lVar1;
  int iVar2;
  QArrayData *local_540;
  QArrayData *local_538;
  undefined1 local_528 [1288];
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_20 = lVar1;
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmRuntimeOptions();
  CVmRunTimeOptions::getSystemFlags();
  QString::toUtf8();
  FUN_100ddbd60(local_528,local_540 + *(long *)(local_540 + 0x10),*(undefined4 *)(local_540 + 4));
  iVar2 = FUN_100ddbea0(local_528,"devices.vgpu.enable",0);
  if (*(int *)local_540 != -1) {
    if (*(int *)local_540 != 0) {
      LOCK();
      *(int *)local_540 = *(int *)local_540 + -1;
      UNLOCK();
      if (*(int *)local_540 != 0) goto LAB_10011410a;
    }
    QArrayData::deallocate(local_540,1,8);
  }
LAB_10011410a:
  if (*(int *)local_538 != -1) {
    if (*(int *)local_538 != 0) {
      LOCK();
      *(int *)local_538 = *(int *)local_538 + -1;
      UNLOCK();
      if (*(int *)local_538 != 0) goto LAB_100114146;
    }
    QArrayData::deallocate(local_538,2,8);
  }
LAB_100114146:
  if (lVar1 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2 != 0;
}

