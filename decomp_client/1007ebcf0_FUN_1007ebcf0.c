
undefined8 * FUN_1007ebcf0(undefined8 *param_1,long param_2)

{
  int *piVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = FUN_100152280();
  lVar3 = FUN_100152a20(uVar2);
  if (lVar3 == 0) {
    uVar2 = FUN_100152280();
    lVar3 = FUN_1001548f0(uVar2,(undefined8 *)(param_2 + 0x18));
    if (lVar3 != 0) {
      piVar1 = *(int **)(param_2 + 0x18);
      *param_1 = piVar1;
      if (*piVar1 + 1U < 2) {
        return param_1;
      }
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      return param_1;
    }
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Invalid antivirus target");
  }
  uVar2 = QString::fromAscii_helper("",0);
  *param_1 = uVar2;
  return param_1;
}

