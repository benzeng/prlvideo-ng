
void FUN_1006f2510(QObject *param_1)

{
  long lVar1;
  undefined4 local_3c;
  void *local_38;
  undefined4 *local_30;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_20 = lVar1;
  if (*(int *)(param_1 + 0x150) == 1) {
    if (1 < DAT_10230ffd0) {
      FUN_100df99c0("","prl_client_app",2,"Online store load timeout. Show store content.");
      if (*(int *)(param_1 + 0x150) == 2) goto LAB_1006f25a1;
    }
    *(undefined4 *)(param_1 + 0x150) = 2;
    local_3c = 2;
    local_38 = (void *)0x0;
    local_30 = &local_3c;
    QMetaObject::activate(param_1,(QMetaObject *)&DAT_1021f5920,0,&local_38);
  }
LAB_1006f25a1:
  if (lVar1 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

