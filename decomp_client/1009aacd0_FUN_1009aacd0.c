
void FUN_1009aacd0(CAbstractProgressOperation *param_1,QObject *param_2,int param_3)

{
  QObject *pQVar1;
  undefined4 **ppuVar2;
  
  CAbstractProgressOperation::CAbstractProgressOperation(param_1,param_2);
  param_1->field0_0x0 = (undefined4 **)&DAT_102233790;
  pQVar1 = operator_new(0x68);
  FUN_1009aa010(pQVar1,param_1);
  ppuVar2 = (undefined4 **)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar1);
  param_1[1].field0_0x0 = ppuVar2;
  param_1[1].field1_0x8.field0_0x0 = (QObjectData *)pQVar1;
  param_1[1].field2_0x10 = param_3;
  CAbstractProgressOperation::setPausable(SUB81(param_1,0));
  return;
}

