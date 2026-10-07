
char FUN_100409a80(char param_1,undefined4 *param_2,float *param_3)

{
  char cVar1;
  undefined8 in_RAX;
  undefined8 uVar2;
  char *pcVar3;
  char *pcVar4;
  undefined4 uVar5;
  
  uVar5 = (undefined4)((ulong)in_RAX >> 0x20);
  if (2 < DAT_1011b55f8) {
    pcVar3 = "playback";
    if (param_1 != '\0') {
      pcVar3 = "capture";
    }
    FUN_1008e3970("","PrlAudioCore",3,"PrlAudioGetMasterVolume(%s)",pcVar3);
  }
  uVar2 = FUN_100409dc0();
  cVar1 = FUN_10040bc40(uVar2,param_1,param_2,param_3);
  if (2 < DAT_1011b55f8) {
    pcVar3 = "playback";
    if (param_1 != '\0') {
      pcVar3 = "capture";
    }
    pcVar4 = "failed";
    if (cVar1 != '\0') {
      pcVar4 = "successed";
    }
    FUN_1008e3970((double)*param_3,"","PrlAudioCore",3,
                  "PrlAudioGetMasterVolume(%s) : %s, volume = %d, scalar = %g",pcVar3,pcVar4,
                  CONCAT44(uVar5,*param_2));
  }
  return cVar1;
}

