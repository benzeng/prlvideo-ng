
void FUN_100697940(long param_1)

{
  undefined8 uVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  pvVar2 = operator_new(0x58);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = FUN_100695ba0(param_1);
  FUN_10029a220(pvVar2,uVar1,1,uVar3);
  CAbstractTask::execute();
  return;
}

