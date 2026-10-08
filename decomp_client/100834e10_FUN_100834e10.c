
void FUN_100834e10(QObject *param_1,int param_2,int param_3,undefined8 *param_4)

{
  long lVar1;
  void *local_38;
  undefined8 local_30;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_20 = lVar1;
  if (param_2 == 0xc) {
    if ((param_3 == 0) && (*(int *)param_4[1] == 0)) {
      if (DAT_102273b48 == 0) {
        DAT_102273b48 = FUN_100380390("CStatusMessageProvider::StatusMessage",0xffffffffffffffff,1);
      }
      *(int *)*param_4 = DAT_102273b48;
    }
    else {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
  }
  else if (param_2 == 10) {
    if ((*(code **)param_4[1] == FUN_100834ef0) && (((long *)param_4[1])[1] == 0)) {
      *(undefined4 *)*param_4 = 0;
    }
  }
  else if ((param_2 == 0) && (param_3 == 0)) {
    local_30 = param_4[1];
    local_38 = (void *)0x0;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10220ecf0,0,&local_38);
  }
  if (lVar1 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

