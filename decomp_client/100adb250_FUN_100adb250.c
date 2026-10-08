
undefined8 FUN_100adb250(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  QArrayData *local_448;
  undefined4 local_440;
  undefined1 local_439;
  char local_438 [1032];
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_440 = 0x400;
  local_30 = lVar1;
  _PrlVmCfg_GetUuid(param_3,local_438,&local_440);
  _strlen(local_438);
  QString::fromUtf8_helper((char *)&local_448,(int)local_438);
  QString::normalized(param_1,&local_448,1,0);
  if (*(int *)local_448 != -1) {
    if (*(int *)local_448 != 0) {
      LOCK();
      *(int *)local_448 = *(int *)local_448 + -1;
      local_439 = *(int *)local_448 != 0;
      UNLOCK();
      if ((bool)local_439) goto LAB_100adb304;
    }
    QArrayData::deallocate(local_448,2,8);
  }
LAB_100adb304:
  if (lVar1 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}

