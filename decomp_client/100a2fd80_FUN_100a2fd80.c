
void FUN_100a2fd80(long *param_1,long param_2,char param_3)

{
  int iVar1;
  char *pcVar2;
  
  if (param_3 != '\0') {
    FUN_100df99c0("CPTOOL","CPInterceptor",0,"CPPasteboard init start");
  }
  param_1[1] = param_2;
  if (*param_1 == 0) {
    iVar1 = _PasteboardCreate(&cf_com_apple_pasteboard_clipboard,param_1);
    if (iVar1 == 0) {
      iVar1 = _PasteboardSetPromiseKeeper(*param_1,FUN_100a2feb0,param_1);
      if (iVar1 == 0) {
        DAT_1023112a0 = 1;
        if (param_3 == '\0') {
          DAT_1023112a0 = 1;
          return;
        }
        pcVar2 = "CPPasteboard init stop";
        goto LAB_100a2fdd5;
      }
      if (param_3 != '\0') {
        FUN_100df99c0("CPTOOL","CPInterceptor",0,
                      "PasteboardSetPromiseKeeper failed with status = %d",iVar1);
      }
      _CFRelease(*param_1);
    }
    else if (param_3 != '\0') {
      FUN_100df99c0("CPTOOL","CPInterceptor",0,"PasteboardCreate failed with status = %d",iVar1);
    }
    *param_1 = 0;
    return;
  }
  pcVar2 = "m_board isn\'t empty";
LAB_100a2fdd5:
  FUN_100df99c0("CPTOOL","CPInterceptor",0,pcVar2);
  return;
}

