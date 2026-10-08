
void FUN_1003ada60(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 0x10);
  lVar2 = FUN_1003b0a30(*(undefined8 *)(lVar1 + 0x18));
  if (lVar2 != 0) {
    uVar3 = FUN_1003b0a30(*(undefined8 *)(lVar1 + 0x18));
    uVar4 = FUN_1003b0b20(*(undefined8 *)(lVar1 + 0x18));
    FUN_100197290(uVar3,uVar4,1);
    return;
  }
  FUN_100df99c0("","prl_client_app",0,"(!)Error: Vm instance is null.");
  return;
}

