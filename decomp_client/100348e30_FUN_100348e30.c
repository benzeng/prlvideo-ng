
void FUN_100348e30(long param_1,int param_2)

{
  int iVar1;
  long in_RAX;
  undefined8 uVar2;
  undefined4 uVar3;
  long local_18;
  
  uVar2 = 0;
  uVar3 = 0xffffffff;
  if (param_2 == 2) {
    uVar3 = 0;
  }
  if (param_2 == 1) {
    uVar3 = 1;
  }
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  local_18 = in_RAX;
  FUN_10018c250(&local_18,uVar2);
  iVar1 = _PrlVm_ToolsSetPowerSchemeSleepAbility(local_18,uVar3);
  if (local_18 != 0) {
    _PrlHandle_Free();
  }
  if ((iVar1 < 0) && (0 < DAT_10230ffd0)) {
    uVar2 = FUN_100dddcf0(iVar1);
    FUN_100df99c0("","prl_client_app",1,
                  "PrlVm_ToolsSetPowerSchemeSleepAbility call error, RC = %.8X [%s]",iVar1,uVar2);
  }
  return;
}

