
void FUN_10076a310(long *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  QObject::sender();
  uVar1 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fd420);
                    /* WARNING: Could not recover jumptable at 0x00010076a357. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x88))(param_1,uVar1,param_2,param_3,*(code **)(*param_1 + 0x88));
  return;
}

