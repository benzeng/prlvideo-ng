
void FUN_1002626d0(undefined8 param_1,int param_2)

{
  int iVar1;
  
  if (0 < DAT_10230ffd0) {
    FUN_100df99c0("","prl_client_app",1,"onHelpTopicRequired: %d",param_2);
  }
  iVar1 = 0x83;
  if (param_2 != 0x817d) {
    if (param_2 == 0x8183) {
      iVar1 = 0x85;
    }
    else {
      iVar1 = param_2;
      if (param_2 == 0x8181) {
        iVar1 = 0x84;
      }
    }
  }
  AppHelpUtils::openHelpTopic(iVar1,0);
  return;
}

