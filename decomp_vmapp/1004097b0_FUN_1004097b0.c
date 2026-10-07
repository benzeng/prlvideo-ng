
void FUN_1004097b0(char param_1)

{
  undefined8 uVar1;
  char *pcVar2;
  
  if (2 < DAT_1011b55f8) {
    pcVar2 = "playback";
    if (param_1 != '\0') {
      pcVar2 = "capture";
    }
    FUN_1008e3970("","PrlAudioCore",3,"PrlAudioCloseDevice(%s)",pcVar2);
  }
  uVar1 = FUN_100409dc0();
  FUN_10040b530(uVar1,param_1,0);
  return;
}

