
void FUN_1001fb7a0(long *param_1,undefined4 param_2)

{
  long lVar1;
  
  QObject::sender();
  lVar1 = QMetaObject::cast((QObject *)&PTR_PTR_102209c20);
  if (1 < DAT_10230ffd0) {
    FUN_100df99c0("","prl_client_app",2,
                  "Account confirmation request was finished with result %d confirmed %d",param_2,
                  *(undefined1 *)(lVar1 + 0x48));
  }
                    /* WARNING: Could not recover jumptable at 0x0001001fb809. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))(param_1,0);
  return;
}

