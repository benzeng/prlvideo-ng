
undefined1 FUN_10040a970(void)

{
  int iVar1;
  undefined1 uVar2;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  local_20 = DAT_100b409f8;
  local_28 = DAT_100b409f0;
  local_30 = 0;
  iVar1 = _AudioObjectSetPropertyData(1,&local_28,0,0,8,&local_30);
  if (iVar1 != 0) {
    FUN_1008e3970("","PrlAudioCore",0,"Failed to set up NULL run loop: %d",iVar1);
  }
  local_38 = DAT_100b40a04;
  local_40 = DAT_100b409fc;
  iVar1 = _AudioObjectAddPropertyListener(1,&local_40,FUN_10040aac0,1);
  if (iVar1 == 0) {
    local_48 = DAT_100b40a10;
    local_50 = DAT_100b40a08;
    iVar1 = _AudioObjectAddPropertyListener(1,&local_50,FUN_10040aac0,0);
    uVar2 = 1;
    if (iVar1 != 0) {
      uVar2 = 0;
      FUN_1008e3970("","PrlAudioCore",0,"Failed to add listener for default input audio device: %d",
                    iVar1);
      _AudioObjectRemovePropertyListener(1,&local_40,FUN_10040aac0,1);
    }
  }
  else {
    uVar2 = 0;
    FUN_1008e3970("","PrlAudioCore",0,"Failed to add listener for default output audio device: %d",
                  iVar1);
  }
  return uVar2;
}

