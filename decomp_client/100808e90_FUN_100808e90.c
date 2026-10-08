
int FUN_100808e90(QObject *param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  int iVar2;
  undefined4 local_60;
  undefined4 local_5c;
  void *local_58;
  undefined8 local_50;
  undefined4 *local_48;
  undefined4 *local_40;
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
      if (param_2 != 0) goto LAB_100808f2d;
      if (iVar2 < 1) {
        local_50 = param_4[1];
        local_5c = *(undefined4 *)param_4[2];
        local_60 = *(undefined4 *)param_4[3];
        local_58 = (void *)0x0;
        local_48 = &local_5c;
        local_40 = &local_60;
        QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021fed00,0,&local_58);
      }
    }
    iVar2 = iVar2 + -1;
  }
LAB_100808f2d:
  if (lVar1 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

