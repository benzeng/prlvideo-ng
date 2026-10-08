
void FUN_10036e880(CAbstractProgressOperation *param_1,undefined8 *param_2,undefined8 param_3,
                  QObject *param_4)

{
  undefined4 **ppuVar1;
  QObjectData *pQVar2;
  
  CAbstractProgressOperation::CAbstractProgressOperation(param_1,param_4);
  param_1->field0_0x0 = (undefined4 **)&PTR_FUN_10220e380;
  ppuVar1 = (undefined4 **)*param_2;
  param_1[1].field0_0x0 = ppuVar1;
  if (1 < *(int *)ppuVar1 + 1U) {
    LOCK();
    *(int *)ppuVar1 = *(int *)ppuVar1 + 1;
    UNLOCK();
  }
  pQVar2 = (QObjectData *)0x0;
  if (param_4 != (QObject *)0x0) {
    pQVar2 = (QObjectData *)QtSharedPointer::ExternalRefCountData::getAndRef(param_4);
  }
  param_1[1].field1_0x8.field0_0x0 = pQVar2;
  *(QObject **)&param_1[1].field2_0x10 = param_4;
  *(undefined4 *)&param_1[1].field4_0x18.field0_0x0 = 0xffffffff;
  FUN_10036e990(param_1);
  CAbstractProgressOperation::setName((QString *)param_1);
  CAbstractProgressOperation::setCancellable(SUB81(param_1,0));
  return;
}

