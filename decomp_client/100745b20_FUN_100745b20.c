
void FUN_100745b20(QObject *param_1,int param_2)

{
  long lVar1;
  int local_2c;
  void *local_28;
  int *local_20;
  long local_18;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_18 = lVar1;
  if (*(int *)(param_1 + 0x20) != param_2) {
    *(int *)(param_1 + 0x20) = param_2;
    local_28 = (void *)0x0;
    local_20 = &local_2c;
    local_2c = param_2;
    QMetaObject::activate(param_1,(QMetaObject *)&DAT_1021f6280,0,&local_28);
  }
  if (lVar1 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

