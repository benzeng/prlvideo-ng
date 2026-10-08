
void FUN_1007b5b30(QString *param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4,
                  long *param_5,undefined1 param_6,undefined8 param_7)

{
  QTypedArrayData<unsigned_short> *pQVar1;
  
  FUN_1001323b0(param_1,param_5,param_7);
  *(undefined4 *)((long)&param_1[2].field0_0x0 + 4) = 4;
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)&PTR_FUN_10222d9c8;
  *(undefined4 *)&param_1[3].field0_0x0 = param_2;
  pQVar1 = (QTypedArrayData<unsigned_short> *)*param_3;
  param_1[4].field0_0x0 = pQVar1;
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    UNLOCK();
  }
  pQVar1 = (QTypedArrayData<unsigned_short> *)*param_4;
  param_1[5].field0_0x0 = pQVar1;
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    UNLOCK();
  }
  *(undefined1 *)&param_1[6].field0_0x0 = param_6;
  if ((undefined *)*param_5 == PTR_shared_null_1021e1288) {
    QAction::setText(param_1);
  }
  QAction::setCheckable(SUB81(param_1,0));
  return;
}

