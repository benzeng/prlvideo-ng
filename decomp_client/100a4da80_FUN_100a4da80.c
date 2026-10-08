
int FUN_100a4da80(QObject *param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  int iVar2;
  undefined4 local_60;
  undefined1 local_59;
  void *local_58;
  undefined1 *local_50;
  undefined4 *local_48;
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar1;
  iVar2 = QObject::qt_metacall();
  if (-1 < iVar2) {
    if (param_2 == 0xc) {
      if (iVar2 < 1) {
        *(undefined4 *)*param_4 = 0xffffffff;
      }
    }
    else {
      if (param_2 != 0) goto LAB_100a4db15;
      if (iVar2 < 1) {
        local_59 = *(undefined1 *)param_4[1];
        local_60 = *(undefined4 *)param_4[2];
        local_58 = (void *)0x0;
        local_50 = &local_59;
        local_48 = &local_60;
        QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102238620,0,&local_58);
      }
    }
    iVar2 = iVar2 + -1;
  }
LAB_100a4db15:
  if (lVar1 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

