
undefined1 FUN_100d7e870(int param_1,uint param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  undefined1 uVar4;
  char *pcVar5;
  
  if (((param_2 & 1) == 0) && (DAT_10231196c != '\0')) {
    uVar4 = 0;
    FUN_100df99c0("","cmn_utils",0,
                  "Error: ParallelsDirs::Init( %d ) is already called!  This call will be ignored.",
                  param_1);
  }
  else {
    DAT_10231196c = '\x01';
    DAT_10230fc20 = param_1;
    DAT_102311968 = param_2;
    FUN_100d8b990(param_1,(param_2 & 2) >> 1);
    cVar1 = FUN_100d80630(1);
    if ((ulong)(long)DAT_10230fc20 < 7) {
      pcVar5 = (&PTR_s_SERVER_10225be70)[DAT_10230fc20];
    }
    else {
      pcVar5 = "UNKNOWN";
    }
    pcVar3 = " (Sandbox)";
    if (cVar1 == '\0') {
      pcVar3 = "";
    }
    pcVar2 = " (SandboxClient)";
    if ((param_2 & 2) == 0) {
      pcVar2 = "";
    }
    FUN_100df99c0("","cmn_utils",0,
                  "ParallelsDirs::Init( ) was called. Current app mode = %d ( %s )%s%s build version: %s %s%s"
                  ,param_1,pcVar5,pcVar3,pcVar2,"12.2.1 (41615)","Mon, 26 Jun 2017 17:54:09","");
    uVar4 = 1;
  }
  return uVar4;
}

