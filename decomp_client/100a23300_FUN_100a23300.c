
void FUN_100a23300(QObject *param_1,int param_2,int param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 local_50;
  void *local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_20 = lVar1;
  if (param_2 != 0xc) {
    if (param_2 == 10) {
      if ((*(code **)param_4[1] == FUN_100a23460) && (((long *)param_4[1])[1] == 0)) {
        *(undefined4 *)*param_4 = 0;
      }
    }
    else if (param_2 == 0) {
      if (param_3 == 2) {
        FUN_100a20c60(param_1,*(undefined8 *)param_4[1],param_4[2]);
        return;
      }
      if (param_3 == 1) {
        FUN_100a20c40(param_1,param_4[1]);
        return;
      }
      if (param_3 == 0) {
        local_50 = *(undefined8 *)param_4[1];
        local_38 = param_4[2];
        uStack_30 = param_4[3];
        local_48 = (void *)0x0;
        local_40 = &local_50;
        QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102237a90,0,&local_48);
      }
    }
    goto LAB_100a233e8;
  }
  if (param_3 == 0) {
LAB_100a233a7:
    if (*(int *)param_4[1] == 1) {
LAB_100a233b0:
      if (DAT_102280ccc == 0) {
        DAT_102280ccc = FUN_100a235c0("QList<QSslError>",0xffffffffffffffff,1);
      }
      *(int *)*param_4 = DAT_102280ccc;
      goto LAB_100a233e8;
    }
  }
  else if (param_3 == 1) {
    if (*(int *)param_4[1] == 0) goto LAB_100a233b0;
  }
  else if (param_3 == 2) goto LAB_100a233a7;
  *(undefined4 *)*param_4 = 0xffffffff;
LAB_100a233e8:
  if (lVar1 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

