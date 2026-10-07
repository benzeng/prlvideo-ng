
void FUN_1002589e0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1002578b0(param_1,10,0,1);
  *param_1 = &PTR_FUN_100bae940;
  param_1[1] = &PTR_metaObject_100bae9b8;
  QMutex::QMutex((QMutex *)(param_1 + 0xd),0);
  param_1[0xf] = 0;
  uVar1 = FUN_1000e99d0(*(undefined8 *)(DAT_1011c3698 + 0x1158),0x206,0);
  param_1[0xe] = uVar1;
  return;
}

