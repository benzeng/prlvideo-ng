
void FUN_100ade850(undefined8 param_1,char param_2)

{
  int iVar1;
  
  if (param_2 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x000100ade8bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_1023119d0)(FUN_100ae01d0,0x4b4,0);
    return;
  }
  iVar1 = (*DAT_1023119c8)(FUN_100ae01d0,0x4b4,0);
  if ((iVar1 != 0) && (0 < DAT_10230ffd0)) {
    FUN_100df99c0("CHRCLIENT","ChrToolClient",1,"Unable to register CGS notification for Expose");
    return;
  }
  return;
}

