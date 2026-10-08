
bool FUN_1003537a0(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long local_20;
  
  if ((char)param_1[2] != '\0') {
    if (((*param_1 == 0) || (*(int *)(*param_1 + 4) == 0)) || (param_1[1] == 0)) {
      FUN_100df99c0("","prl_client_app",0,
                    " Fatal error during a screen image unlocking: parent display does not exist!");
    }
    else {
      FUN_100323d50(&local_20);
      iVar1 = _PrlDevDisplay_Unlock(local_20);
      if (local_20 != 0) {
        _PrlHandle_Free();
      }
      if (iVar1 < 0) {
        uVar2 = FUN_100dddcf0(iVar1);
        FUN_100df99c0("","prl_client_app",0,
                      " Failed to unlock display. PrlDevDisplay_Unlock failed with RC = %.8X [%s]",
                      iVar1,uVar2);
      }
      else {
        *(undefined1 *)(param_1 + 2) = 0;
      }
    }
  }
  return (char)param_1[2] == '\0';
}

