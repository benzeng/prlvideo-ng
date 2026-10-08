
void FUN_1003a8950(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x18));
  if (lVar1 != 0) {
    uVar2 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x18));
    uVar3 = FUN_1003b0b20(*(undefined8 *)(param_1 + 0x18));
    FUN_100197290(uVar2,uVar3,1);
    return;
  }
  FUN_100df99c0("","prl_client_app",0,"(!)Error: Vm instance is null.");
  return;
}

