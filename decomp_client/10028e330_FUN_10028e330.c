
void FUN_10028e330(long *param_1,int param_2)

{
  void *pvVar1;
  char *pcVar2;
  
  if (1 < DAT_10230ffd0) {
    pcVar2 = " not";
    if (-1 < param_2) {
      pcVar2 = "";
    }
    FUN_100df99c0("[LICENSE]","prl_client_app",2,"Web portal is%s available on dispacther side.",
                  pcVar2);
  }
  if (DAT_102310958 == (void *)0x0) {
    pvVar1 = operator_new(0x18);
    FUN_100612710(pvVar1);
    DAT_102271170 = 1;
    DAT_102310958 = pvVar1;
  }
  FUN_100612930(DAT_102310958,-1 < param_2);
                    /* WARNING: Could not recover jumptable at 0x00010028e3df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))(param_1,0);
  return;
}

