
void FUN_1001ee700(CAbstractProgressOperation *param_1,QObject *param_2)

{
  undefined4 **ppuVar1;
  
  CAbstractProgressOperation::CAbstractProgressOperation(param_1,param_2);
  param_1->field0_0x0 = (undefined4 **)&PTR_FUN_1021ffc40;
  ppuVar1 = operator_new(0x68);
  FUN_1001eba40(ppuVar1,param_1);
  param_1[1].field0_0x0 = ppuVar1;
  CAbstractProgressOperation::setPausable(SUB81(param_1,0));
  return;
}

