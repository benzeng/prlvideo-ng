
undefined1 FUN_10040d3c0(long param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 in_stack_ffffffffffffff98;
  uint uVar5;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  uint local_30;
  uint local_2c;
  
  uVar5 = (uint)((ulong)in_stack_ffffffffffffff98 >> 0x20);
  local_34 = 4;
  local_38 = DAT_100b40a28;
  local_40 = DAT_100b40a20;
  local_48 = DAT_100b40a34;
  local_50 = DAT_100b40a2c;
  local_2c = param_2;
  _AudioObjectSetPropertyData(*(undefined4 *)(param_1 + 0x40),&local_40,0,0,4,&local_2c);
  iVar1 = _AudioObjectGetPropertyData
                    (*(undefined4 *)(param_1 + 0x40),&local_40,0,0,&local_34,&local_30);
  if (iVar1 == 0) {
    if (local_30 == local_2c) {
      return 1;
    }
    local_34 = 0x10;
    iVar1 = _AudioObjectGetPropertyData
                      (*(undefined4 *)(param_1 + 0x40),&local_50,0,0,&local_34,&local_30);
    if (iVar1 != 0) {
      if (*(char *)(param_1 + 0x44) == '\0') {
        pcVar4 = "output";
      }
      else {
        pcVar4 = "input";
      }
      FUN_1008e3970("","PrlAudioCore",0,
                    "Failed obtaining the valid range for frame buffer size of the %s device. Default value is: %d. Error code: %d"
                    ,pcVar4,local_30,CONCAT44(uVar5,iVar1));
      return 0;
    }
    local_34 = 4;
    iVar2 = _AudioObjectSetPropertyData(*(undefined4 *)(param_1 + 0x40),&local_40,0,0,4,&local_2c);
    iVar1 = _AudioObjectGetPropertyData
                      (*(undefined4 *)(param_1 + 0x40),&local_40,0,0,&local_34,&local_30);
    if (iVar1 == 0) {
      if ((iVar2 == 0) && (local_30 == local_2c)) {
        if (*(char *)(param_1 + 0x44) == '\0') {
          pcVar4 = "output";
        }
        else {
          pcVar4 = "input";
        }
        FUN_1008e3970("","PrlAudioCore",0,
                      "Set up the frame buffer size with adjusted value %d for %s device. Error code: %d"
                      ,local_30,pcVar4,(ulong)uVar5 << 0x20);
        return 1;
      }
      if (*(char *)(param_1 + 0x44) == '\0') {
        pcVar4 = "output";
      }
      else {
        pcVar4 = "input";
      }
      FUN_1008e3970("","PrlAudioCore",0,
                    "Failed setting up the frame buffer size with adjusted value (%d, default value is %d)  for %s device. Error code: %d"
                    ,local_2c,local_30,pcVar4,0);
      return 0;
    }
    if (*(char *)(param_1 + 0x44) == '\0') {
      pcVar4 = "output";
    }
    else {
      pcVar4 = "input";
    }
    pcVar3 = 
    "Failed obtaining the frame buffer size after adjust of the value for %s device. Error code: %d"
    ;
  }
  else {
    if (*(char *)(param_1 + 0x44) == '\0') {
      pcVar4 = "output";
    }
    else {
      pcVar4 = "input";
    }
    pcVar3 = "Failed obtaining the frame buffer size for %s device. Error code: %d";
  }
  FUN_1008e3970("","PrlAudioCore",0,pcVar3,pcVar4,iVar1);
  return 0;
}

