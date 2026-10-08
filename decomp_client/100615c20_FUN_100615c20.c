
bool FUN_100615c20(undefined8 *param_1,undefined8 param_2,undefined1 *param_3)

{
  uint in_EAX;
  int iVar1;
  bool bVar2;
  undefined8 uStack_28;
  
  uStack_28 = (ulong)in_EAX;
  iVar1 = _PrlSrv_HasRestriction(*param_1,param_2,(long)&uStack_28 + 4);
  if (iVar1 < 0) {
    bVar2 = false;
    FUN_100df99c0("","prl_client_app",0,"(!)Error: PrlSrv_HasRestriction failed with RC = %.8X",
                  iVar1);
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 0;
      bVar2 = false;
    }
  }
  else {
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 1;
    }
    bVar2 = uStack_28._4_4_ != 0;
  }
  return bVar2;
}

