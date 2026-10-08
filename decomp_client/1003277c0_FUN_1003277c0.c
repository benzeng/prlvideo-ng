
void FUN_1003277c0(double param_1,long param_2)

{
  undefined8 uVar1;
  
  if ((*(double *)(param_2 + 0xc0) == param_1) &&
     (!NAN(*(double *)(param_2 + 0xc0)) && !NAN(param_1))) {
    return;
  }
  FUN_100df99c0("","prl_client_app",0,"Updating display scale factor to %f");
  uVar1 = *(undefined8 *)(param_2 + 0xc0);
  *(double *)(param_2 + 0xc0) = param_1;
  FUN_10082a7f0(param_1,uVar1,param_2);
  return;
}

