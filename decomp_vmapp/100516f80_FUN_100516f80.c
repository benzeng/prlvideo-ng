
void FUN_100516f80(undefined8 *param_1)

{
  QMutex *pQVar1;
  
  FUN_1004c0650();
  FUN_100519220(param_1 + 5);
  *param_1 = &PTR_FUN_100bc4868;
  param_1[5] = &PTR_FUN_100bc48c0;
  pQVar1 = operator_new(0x40);
  QMutex::QMutex(pQVar1,0);
  pQVar1[1].field0_0x0.field0_0x0 = (QMutexData *)PTR_shared_null_100ba2188;
  pQVar1[2].field0_0x0.field0_0x0 = (QMutexData *)0x0;
  QMutex::QMutex(pQVar1 + 4,0);
  *(undefined1 *)&pQVar1[7].field0_0x0.field0_0x0 = 0;
  pQVar1[6].field0_0x0.field0_0x0 = (QMutexData *)0x0;
  pQVar1[5].field0_0x0.field0_0x0 = (QMutexData *)0x0;
  param_1[0xd] = pQVar1;
  FUN_1004c0790(param_1,0x8030,0x8033);
  FUN_10051a6b0(DAT_1011c3698 + 0x10f0,0xb,param_1 + 5);
  return;
}

