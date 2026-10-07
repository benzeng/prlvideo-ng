
void FUN_100409c60(char param_1,char param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  char *pcVar3;
  
  if (2 < DAT_1011b55f8) {
    pcVar2 = "playback";
    if (param_1 != '\0') {
      pcVar2 = "capture";
    }
    pcVar3 = "disable";
    if (param_2 != '\0') {
      pcVar3 = "enable";
    }
    FUN_1008e3970("","PrlAudioCore",3,"PrlAudioEnableVolume(%s, %s)",pcVar2,pcVar3);
  }
  uVar1 = FUN_100409dc0();
  FUN_10040bd80(uVar1,param_1,param_2);
  return;
}

