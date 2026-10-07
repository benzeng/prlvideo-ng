
char FUN_1004099c0(char param_1)

{
  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  char *pcVar4;
  
  if (2 < DAT_1011b55f8) {
    pcVar3 = "playback";
    if (param_1 != '\0') {
      pcVar3 = "capture";
    }
    FUN_1008e3970("","PrlAudioCore",3,"PrlAudioSubscriptionForVolumeChangesAlive(%s)",pcVar3);
  }
  uVar2 = FUN_100409dc0();
  cVar1 = FUN_10040bb10(uVar2,param_1);
  if (2 < DAT_1011b55f8) {
    pcVar3 = "playback";
    if (param_1 != '\0') {
      pcVar3 = "capture";
    }
    pcVar4 = "false";
    if (cVar1 != '\0') {
      pcVar4 = "true";
    }
    FUN_1008e3970("","PrlAudioCore",3,"PrlAudioSubscriptionForVolumeChangesAlive(%s) : %s",pcVar3,
                  pcVar4);
  }
  return cVar1;
}

