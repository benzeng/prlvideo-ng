
undefined8 FUN_1005cd2a0(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_20;
  
  local_20 = 0;
  iVar1 = FUN_100d9d560(param_1,&local_20,0,0);
  if (iVar1 < 0) {
    uVar2 = FUN_100dddcf0(iVar1);
    FUN_100df99c0("","prl_client_app",0,"(!)Failed to get available space on disk. RC = %s [%.8X]",
                  uVar2,iVar1);
    local_20 = 0;
  }
  return local_20;
}

