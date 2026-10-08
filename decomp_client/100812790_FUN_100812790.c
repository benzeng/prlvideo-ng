
void FUN_100812790(QObject *param_1,int param_2,int param_3,long *param_4)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 local_3c;
  void *local_38;
  undefined4 *local_30;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_20 = lVar1;
  if (param_2 != 0xc) {
    if (param_2 == 10) {
      if ((*(code **)param_4[1] == FUN_100812900) && (((long *)param_4[1])[1] == 0)) {
        *(undefined4 *)*param_4 = 0;
      }
    }
    else if (param_2 == 0) {
      switch(param_3) {
      case 0:
        local_3c = *(undefined4 *)param_4[1];
        local_38 = (void *)0x0;
        local_30 = &local_3c;
        QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102202000,0,&local_38);
        break;
      case 1:
        FUN_100228e20(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
        return;
      case 2:
        uVar2 = FUN_100228860();
        if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
          *(undefined4 *)*param_4 = uVar2;
        }
        break;
      case 3:
        uVar2 = FUN_100228e60();
        if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
          *(undefined4 *)*param_4 = uVar2;
        }
      }
    }
    goto switchD_10081282f_default;
  }
  if (param_3 == 1) {
    if (*(int *)param_4[1] == 0) {
      *(undefined4 *)*param_4 = 2;
      goto switchD_10081282f_default;
    }
    if (*(int *)param_4[1] == 1) {
      if (DAT_10226db58 == 0) {
        DAT_10226db58 = FUN_100087320("Messaging::ButtonID",0xffffffffffffffff,1);
      }
      *(int *)*param_4 = DAT_10226db58;
      goto switchD_10081282f_default;
    }
  }
  *(undefined4 *)*param_4 = 0xffffffff;
switchD_10081282f_default:
  if (lVar1 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

