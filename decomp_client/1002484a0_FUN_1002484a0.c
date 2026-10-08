
void FUN_1002484a0(long *param_1,int param_2)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  QObject::sender();
  lVar1 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e12a0);
  if (lVar1 == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
    param_2 = -0x7ffffff7;
  }
  else {
    if (param_2 < 0) {
      FUN_1002481c0(param_1,lVar1);
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
  }
                    /* WARNING: Could not recover jumptable at 0x0001002484f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
  return;
}

