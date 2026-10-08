
bool FUN_100615ca0(undefined8 *param_1,int param_2,undefined1 *param_3)

{
  uint in_EAX;
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined8 uStack_28;
  
  uVar2 = 0;
  if (param_2 - 0x15U < 0x25) {
    uVar2 = *(undefined4 *)(&DAT_100e24eb0 + (long)(int)(param_2 - 0x15U) * 4);
  }
  uStack_28 = (ulong)in_EAX;
  iVar1 = _PrlSrv_HasRestriction(*param_1,uVar2,(long)&uStack_28 + 4);
  if (iVar1 < 0) {
    bVar3 = false;
    FUN_100df99c0("","prl_client_app",0,"(!)Error: PrlSrv_HasRestriction failed with RC = %.8X",
                  iVar1);
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 0;
      bVar3 = false;
    }
  }
  else {
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 1;
    }
    bVar3 = uStack_28._4_4_ != 0;
  }
  return bVar3;
}

