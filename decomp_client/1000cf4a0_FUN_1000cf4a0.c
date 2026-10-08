
void FUN_1000cf4a0(long param_1,undefined4 *param_2,undefined8 param_3)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = FUN_1000cf550();
  if (-1 < iVar1) {
    puVar2 = *(uint **)(param_1 + 0x58);
    if (1 < *puVar2) {
      FUN_1000e6e10((undefined8 *)(param_1 + 0x58),puVar2[1]);
      puVar2 = *(uint **)(param_1 + 0x58);
    }
    FUN_10009cb20(*(long *)(puVar2 + ((long)iVar1 + (long)(int)puVar2[2]) * 2 + 4) + 0x58,param_3);
    return;
  }
  if (0 < DAT_10230ffd0) {
    FUN_100df99c0("SGAC","prl_client_app",1,
                  "Warning: app associated with helper with psn={%u, %u} not running",*param_2,
                  param_2[1]);
    return;
  }
  return;
}

