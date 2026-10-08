
void FUN_100219ff0(long *param_1,int param_2,int param_3)

{
  int iVar1;
  long lVar2;
  
  FUN_100df99c0("","prl_client_app",0,"Tools intallation stage changed to [%d]",param_2);
  if ((param_2 != 3) && (param_2 != 0 || param_3 != 1)) {
    if (param_2 == 2) {
      lVar2 = 0;
      if ((param_1[3] != 0) && (lVar2 = 0, *(int *)(param_1[3] + 4) != 0)) {
        lVar2 = param_1[4];
      }
      iVar1 = FUN_10018f860(lVar2);
      if (iVar1 != 8) goto LAB_10021a071;
      *(undefined1 *)(param_1 + 0x2f) = 1;
    }
    return;
  }
LAB_10021a071:
                    /* WARNING: Could not recover jumptable at 0x00010021a08d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))(param_1,0x80000009);
  return;
}

