
int FUN_1009be170(QObject *param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined4 local_64;
  undefined8 local_60;
  void *local_58;
  undefined4 *local_50;
  undefined8 *local_48;
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar1;
  iVar2 = QObject::qt_metacall();
  iVar3 = iVar2;
  if (iVar2 < 0) goto LAB_1009be273;
  if (param_2 == 0xc) {
    if (iVar2 < 2) {
      *(undefined4 *)*param_4 = 0xffffffff;
      iVar3 = iVar2 + -2;
      goto LAB_1009be273;
    }
LAB_1009be1e4:
    iVar3 = iVar2 + -2;
LAB_1009be1e8:
    if (param_2 != 0xc) {
      if (param_2 != 0) goto LAB_1009be273;
      goto LAB_1009be25d;
    }
    if (iVar3 < 1) {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
  }
  else {
    if (param_2 != 0) goto LAB_1009be1e8;
    if (1 < iVar2) goto LAB_1009be1e4;
    if (iVar2 == 1) {
      local_64 = *(undefined4 *)param_4[1];
      local_60 = 0xffffffff00000000;
LAB_1009be215:
      local_58 = (void *)0x0;
      local_50 = &local_64;
      local_48 = &local_60;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102233a70,0,&local_58);
      iVar3 = iVar2 + -2;
      goto LAB_1009be273;
    }
    if (iVar2 == 0) {
      local_64 = *(undefined4 *)param_4[1];
      local_60 = *(undefined8 *)param_4[2];
      goto LAB_1009be215;
    }
    iVar3 = iVar2 + -2;
    if (iVar2 < 2) goto LAB_1009be273;
LAB_1009be25d:
    if (iVar3 == 0) {
      FUN_10098ff30(param_1,*(undefined4 *)param_4[1]);
    }
  }
  iVar3 = iVar3 + -1;
LAB_1009be273:
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

