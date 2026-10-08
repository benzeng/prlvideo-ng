
void FUN_1002e9510(long param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x48);
  FUN_1002ea310(pvVar1,*(undefined8 *)(param_1 + 0x30),param_1);
  CAbstractProgressOperation::setProgress((int)pvVar1);
  CAbstractProgressOperation::setState(pvVar1,1);
  *(void **)(param_1 + 0x28) = pvVar1;
  return;
}

