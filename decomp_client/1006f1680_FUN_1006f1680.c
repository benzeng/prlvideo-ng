
void FUN_1006f1680(QObject *param_1)

{
  long lVar1;
  undefined1 local_29;
  void *local_28;
  undefined1 *local_20;
  long local_18;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_18 = lVar1;
  if (param_1[0x154] != (QObject)0x1) {
    param_1[0x154] = (QObject)0x1;
    local_29 = 1;
    local_28 = (void *)0x0;
    local_20 = &local_29;
    QMetaObject::activate(param_1,(QMetaObject *)&DAT_1021f5920,1,&local_28);
  }
  if (lVar1 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

