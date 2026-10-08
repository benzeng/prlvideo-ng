
undefined8 * FUN_100b599b0(undefined8 *param_1)

{
  int iVar1;
  void *pvVar2;
  ulong uVar3;
  uint uVar4;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  uint local_38 [2];
  
  *param_1 = PTR_shared_null_1021e15e8;
  local_40 = DAT_101cdba74;
  local_48 = DAT_101cdba6c;
  iVar1 = _AudioObjectGetPropertyDataSize(1,&local_48,0,0,local_38);
  if (iVar1 == 0) {
    uVar4 = local_38[0] >> 2;
    pvVar2 = operator_new__((ulong)uVar4 * 4);
    iVar1 = _AudioObjectGetPropertyData(1,&local_48,0,0,local_38,pvVar2);
    if (iVar1 == 0) {
      local_50 = 1;
      FUN_100b5a650(param_1,&local_50);
      local_50 = 2;
      uVar3 = 0;
      if (uVar4 != 0) {
        do {
          local_50 = CONCAT44(*(undefined4 *)((long)pvVar2 + uVar3 * 4),(undefined4)local_50);
          FUN_100b5a650(param_1,&local_50);
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar4);
      }
      local_50 = 0;
      FUN_100b5a650(param_1,&local_50);
    }
    else {
      FUN_100df99c0("","PrlAudioDeviceManager",0,"Can\'t get the device list. Err=%d");
    }
    operator_delete__(pvVar2);
  }
  else {
    FUN_100df99c0("","PrlAudioDeviceManager",0,"Can\'t get size of device list. Err=%d",iVar1);
  }
  return param_1;
}

