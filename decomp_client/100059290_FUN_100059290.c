
undefined1 FUN_100059290(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 uVar2;
  undefined **local_30 [2];
  
  FUN_10005ae70(local_30);
  local_30[0] = &PTR_FUN_10226c2e0;
  iVar1 = FUN_10005bb40(param_1,local_30);
  if (iVar1 == 0) {
    FUN_10005b9b0(local_30,param_2);
    FUN_10005bb10(param_1,local_30);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
    if (iVar1 != 6) {
      FUN_100df99c0("SGAC","prl_client_app",0,"Failed to get persistent-others item tile, err %i",
                    iVar1);
      uVar2 = 0;
    }
  }
  FUN_10005aeb0(local_30);
  return uVar2;
}

