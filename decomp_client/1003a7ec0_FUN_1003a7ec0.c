
void FUN_1003a7ec0(long param_1)

{
  long lVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x18));
  if (lVar1 != 0) {
    pvVar2 = operator_new(0x58);
    uVar3 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x18));
    uVar4 = FUN_1003b0b20(*(undefined8 *)(param_1 + 0x18));
    FUN_10020bc60(pvVar2,uVar3,uVar4);
    CAbstractTask::execute();
    return;
  }
  FUN_100df99c0("","prl_client_app",0,"(!)Error: Vm instance is null.");
  return;
}

