
cfstringStruct * FUN_1006d4e80(ulong param_1)

{
  int iVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  cfstringStruct *local_18;
  
  local_1c = 8;
  local_20 = DAT_100b49eac;
  local_28 = DAT_100b49ea4;
  iVar1 = _AudioObjectGetPropertyData(param_1 >> 0x20,&local_28,0,0,&local_1c,&local_18);
  if (iVar1 != 0) {
    FUN_1008e3970("","PrlAudioDeviceManager",0,"UID obtaining failed for audio device %i",
                  param_1 >> 0x20);
    local_18 = &cf___;
  }
  return local_18;
}

