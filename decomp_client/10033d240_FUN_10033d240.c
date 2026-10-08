
void FUN_10033d240(long param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  uint *puVar4;
  long local_20;
  
  puVar4 = (uint *)(param_1 + 0x25);
  if (param_2 == 1) {
    puVar4 = (uint *)(param_1 + 0x29);
  }
  bVar1 = FUN_10033d540();
  *puVar4 = (uint)bVar1;
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  FUN_1003193b0(&local_20,uVar3);
  iVar2 = _PrlVm_ToolsSetTaskBarVisibility(local_20,*puVar4 != 0);
  if (local_20 != 0) {
    _PrlHandle_Free();
  }
  if ((iVar2 < 0) && (0 < DAT_10230ffd0)) {
    uVar3 = FUN_100dddcf0(iVar2);
    FUN_100df99c0("DUCLIENT","prl_client_app",1,
                  "PrlVm_ToolsSetTaskBarVisibility call error, RC = %.8X [%s]",iVar2,uVar3);
  }
  return;
}

