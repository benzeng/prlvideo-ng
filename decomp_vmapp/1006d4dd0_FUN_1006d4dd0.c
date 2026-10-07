
cfstringStruct * FUN_1006d4dd0(ulong param_1)

{
  int iVar1;
  char *pcVar2;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  cfstringStruct *local_18;
  
  param_1 = param_1 >> 0x20;
  local_1c = 0;
  local_20 = DAT_100b49ea0;
  local_28 = DAT_100b49e98;
  iVar1 = _AudioObjectGetPropertyDataSize(param_1,&local_28,0,0,&local_1c);
  if (iVar1 == 0) {
    iVar1 = _AudioObjectGetPropertyData(param_1,&local_28,0,0,&local_1c,&local_18);
    if (iVar1 == 0) {
      return local_18;
    }
    pcVar2 = "Name obtaining failed for audio device %i";
  }
  else {
    pcVar2 = "Name\'s size obtaining failed for audio device %i";
  }
  FUN_1008e3970("","PrlAudioDeviceManager",0,pcVar2,param_1);
  return &cf___;
}

