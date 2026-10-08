
bool FUN_1003535c0(long *param_1)

{
  int iVar1;
  long in_RAX;
  undefined8 uVar2;
  bool bVar3;
  long local_28;
  
  bVar3 = true;
  if ((char)param_1[2] == '\0') {
    if (((*param_1 == 0) || (*(int *)(*param_1 + 4) == 0)) || (param_1[1] == 0)) {
      bVar3 = false;
      FUN_100df99c0("","prl_client_app",0,
                    " Fatal error during a screen image locking: parent display does not exist!");
    }
    else {
      local_28 = in_RAX;
      FUN_100323d50(&local_28);
      iVar1 = _PrlDevDisplay_LockForRead(local_28);
      if (local_28 != 0) {
        _PrlHandle_Free();
      }
      if (iVar1 < 0) {
        if (1 < DAT_10230ffd0) {
          uVar2 = FUN_100dddcf0(iVar1);
          FUN_100df99c0("","prl_client_app",2,
                        " Failed to lock display. PrlDevDisplay_LockForRead failed with RC = %.8X [%s]"
                        ,iVar1,uVar2);
        }
      }
      else {
        *(undefined1 *)(param_1 + 2) = 1;
      }
      bVar3 = (char)param_1[2] != '\0';
    }
  }
  return bVar3;
}

