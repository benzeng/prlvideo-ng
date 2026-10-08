
void FUN_1003852b0(long param_1)

{
  long lVar1;
  QObject *local_30;
  void *local_28;
  QObject **local_20;
  long local_18;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_30 = (QObject *)(param_1 + -0x10);
  local_28 = (void *)0x0;
  local_20 = &local_30;
  local_18 = lVar1;
  QMetaObject::activate(local_30,(QMetaObject *)&DAT_1021f15f0,0,&local_28);
  if (lVar1 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

