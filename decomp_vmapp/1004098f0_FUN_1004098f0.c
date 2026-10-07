
char FUN_1004098f0(undefined8 param_1,char param_2)

{
  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  char *pcVar4;
  
  if (2 < DAT_1011b55f8) {
    pcVar3 = "playback";
    if (param_2 != '\0') {
      pcVar3 = "capture";
    }
    FUN_1008e3970("","PrlAudioCore",3,"PrlAudioUnsubscribeFromDeviceVolumeChanges(%p, %s)",param_1,
                  pcVar3);
  }
  uVar2 = FUN_100409dc0();
  cVar1 = FUN_10040ba40(uVar2,param_1,param_2);
  if (2 < DAT_1011b55f8) {
    pcVar3 = "playback";
    if (param_2 != '\0') {
      pcVar3 = "capture";
    }
    pcVar4 = "failed";
    if (cVar1 != '\0') {
      pcVar4 = "successed";
    }
    FUN_1008e3970("","PrlAudioCore",3,"PrlAudioUnsubscribeFromDeviceVolumeChanges(%s) : %s",pcVar3,
                  pcVar4);
  }
  return cVar1;
}

