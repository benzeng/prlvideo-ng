
void FUN_1002ff650(long *param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  
  if (param_3 == 1) {
    cVar1 = MacUtils::restart();
    pcVar2 = "FAILED";
    if (cVar1 != '\0') {
      pcVar2 = "RESTARTING";
    }
    FUN_100df99c0("","prl_client_app",0,"Restart Mac - %s",pcVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x0001002ff6ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))(param_1,0x80015487);
  return;
}

