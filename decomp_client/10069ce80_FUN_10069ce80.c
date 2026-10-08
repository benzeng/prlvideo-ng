
void FUN_10069ce80(long param_1)

{
  undefined8 uVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  pvVar2 = operator_new(0x40);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = FUN_100695ba0(param_1);
  FUN_100227250(pvVar2,uVar1,uVar3,10,0);
  CAbstractTask::execute();
  return;
}

