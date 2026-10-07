
char FUN_100409380(ulong param_1,char param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,byte param_6)

{
  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 in_stack_ffffffffffffff98;
  undefined4 uVar5;
  
  uVar5 = (undefined4)((ulong)in_stack_ffffffffffffff98 >> 0x20);
  if (2 < DAT_1011b55f8) {
    pcVar3 = "playback";
    if (param_2 != '\0') {
      pcVar3 = "capture";
    }
    pcVar4 = "hardware audio";
    if (param_6 != 0) {
      pcVar4 = "echo cancellation";
    }
    FUN_1008e3970("","PrlAudioCore",3,"PrlAudioOpenDeviceWithStream(%u:%08x, %s, %p, %u, %u, %s)",
                  param_1 & 0xffffffff,param_1 >> 0x20,pcVar3,param_3,param_4,param_5,pcVar4);
    uVar5 = (undefined4)((ulong)pcVar3 >> 0x20);
  }
  uVar2 = FUN_100409dc0();
  cVar1 = FUN_10040b2e0(uVar2,param_1,param_2,param_3,param_4,param_5,CONCAT44(uVar5,(uint)param_6))
  ;
  if (2 < DAT_1011b55f8) {
    pcVar3 = "playback";
    if (param_2 != '\0') {
      pcVar3 = "capture";
    }
    pcVar4 = "failed";
    if (cVar1 != '\0') {
      pcVar4 = "successed";
    }
    FUN_1008e3970("","PrlAudioCore",3,"PrlAudioOpenDeviceWithStream(%s) : %s",pcVar3,pcVar4);
  }
  return cVar1;
}

