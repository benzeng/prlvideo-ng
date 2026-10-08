
undefined8 * FUN_1007ebc40(undefined8 *param_1,long param_2)

{
  int *piVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = FUN_100152280();
  puVar4 = (undefined8 *)(param_2 + 0x18);
  lVar3 = FUN_100152a20(uVar2,puVar4);
  if (lVar3 == 0) {
    uVar2 = FUN_100152280();
    lVar3 = FUN_1001548f0(uVar2,puVar4);
    if (lVar3 == 0) {
      FUN_100df99c0("","prl_client_app",0,"(!)Error: Invalid antivirus target");
      uVar2 = QString::fromAscii_helper("",0);
      *param_1 = uVar2;
    }
    else {
      uVar2 = FUN_100152280();
      uVar2 = FUN_1001548f0(uVar2,puVar4);
      FUN_1001884b0(param_1,uVar2);
    }
  }
  else {
    piVar1 = (int *)*puVar4;
    *param_1 = piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
  }
  return param_1;
}

