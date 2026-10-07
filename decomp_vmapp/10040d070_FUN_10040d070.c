
undefined8 FUN_10040d070(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined8 local_30;
  
  local_48 = 0x61756f75;
  local_44 = 0x6168616c;
  local_40 = 0x6170706c;
  local_3c = 0;
  local_38 = 0;
  lVar2 = _AudioComponentFindNext(0,&local_48);
  if (lVar2 == 0) {
    if (*(char *)(param_1 + 0x44) == '\0') {
      pcVar5 = "output";
    }
    else {
      pcVar5 = "input";
    }
    pcVar4 = "Failed to find HAL %s component";
  }
  else {
    iVar1 = _AudioComponentInstanceNew(lVar2,&local_30);
    if (iVar1 == 0) {
      *(undefined8 *)(param_1 + 0x30) = local_30;
      uVar3 = FUN_100409dc0();
      FUN_10040afa0(uVar3,param_1);
      iVar1 = _AudioUnitSetProperty
                        (local_30,2000,(*(char *)(param_1 + 0x44) == '\0') * '\x02',
                         *(char *)(param_1 + 0x44),param_1 + 0x40,8);
      if (iVar1 == 0) {
        local_4c = 0x28;
        iVar1 = _AudioUnitGetProperty
                          (local_30,8,(*(char *)(param_1 + 0x44) == '\0') + '\x01',
                           *(char *)(param_1 + 0x44),param_1 + 8,&local_4c);
        if (iVar1 == 0) {
          *(undefined4 *)(param_1 + 0x2c) = 0;
          *(undefined8 *)(param_1 + 0x10) = 0x96c70636d;
          *(undefined4 *)(param_1 + 0x28) = 0x20;
          *(undefined4 *)(param_1 + 0x1c) = 1;
          iVar1 = (*(uint *)(param_1 + 0x24) & 0x7ffffff) << 2;
          *(int *)(param_1 + 0x20) = iVar1;
          *(int *)(param_1 + 0x18) = iVar1;
          iVar1 = _AudioUnitSetProperty
                            (local_30,8,2 - (uint)(*(char *)(param_1 + 0x44) == '\0'),
                             *(char *)(param_1 + 0x44),param_1 + 8,local_4c);
          if (iVar1 == 0) {
            iVar1 = _AudioUnitInitialize(local_30);
            if (iVar1 == 0) {
              *(undefined8 *)(param_1 + 0x68) = param_2;
              return local_30;
            }
            if (*(char *)(param_1 + 0x44) == '\0') {
              pcVar5 = "output";
            }
            else {
              pcVar5 = "input";
            }
            pcVar4 = "Can\'t initialize %s audio unit. Error code: %d";
          }
          else {
            if (*(char *)(param_1 + 0x44) == '\0') {
              pcVar5 = "output";
            }
            else {
              pcVar5 = "input";
            }
            pcVar4 = "Failed to set canonical stream format for HAL %s component. Error code: %d";
          }
          FUN_1008e3970("","PrlAudioCore",0,pcVar4,pcVar5);
        }
        else {
          if (*(char *)(param_1 + 0x44) == '\0') {
            pcVar5 = "output";
          }
          else {
            pcVar5 = "input";
          }
          FUN_1008e3970("","PrlAudioCore",0,
                        "Failed to get device format for HAL %s component. Error code: %d",pcVar5);
          FUN_1008e3970(*(undefined8 *)(param_1 + 8),"","PrlAudioCore",0,
                        "AudioFormat: \n\tformat_id=%d\n\tformat_flags=%d\n\tframes_per_pack=%d\n\tchannels_per_frame=%d\n\tbits_per_channel=%d\n\tsample_rate=%lf"
                        ,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),
                        *(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x24),
                        *(undefined4 *)(param_1 + 0x28));
        }
      }
      else {
        if (*(char *)(param_1 + 0x44) == '\0') {
          pcVar5 = "output";
        }
        else {
          pcVar5 = "input";
        }
        FUN_1008e3970("","PrlAudioCore",0,
                      "Failed to set device (%d) for HAL %s component. Error code: %d",
                      *(undefined4 *)(param_1 + 0x40),pcVar5,iVar1);
      }
      _AudioComponentInstanceDispose(local_30);
      *(undefined8 *)(param_1 + 0x30) = 0;
      return 0;
    }
    if (*(char *)(param_1 + 0x44) == '\0') {
      pcVar5 = "output";
    }
    else {
      pcVar5 = "input";
    }
    pcVar4 = "Failed to open HAL %s component";
  }
  FUN_1008e3970("","PrlAudioCore",0,pcVar4,pcVar5);
  return 0;
}

