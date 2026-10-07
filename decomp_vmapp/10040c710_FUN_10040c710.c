
bool FUN_10040c710(long *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  if (param_1[6] != 0) {
    FUN_1008e3970("","PrlAudioCore",0,
                  "Trying to attach a stream, but the previous one, hasn\'t been detached.");
    FUN_10040c630(param_1);
  }
  uVar2 = FUN_100409dc0();
  FUN_10040b960(uVar2,*(undefined1 *)((long)param_1 + 0x44),0);
  if (*(int *)((long)param_1 + 0x3c) == 1) {
    local_28 = 0x64496e20;
    if (*(char *)((long)param_1 + 0x44) == '\0') {
      local_28 = 0x644f7574;
    }
    local_24 = 0x676c6f62;
    local_20 = 0;
    local_2c = 4;
    iVar1 = _AudioObjectGetPropertyData(1,&local_28,0,0,&local_2c,param_1 + 8);
    if (iVar1 != 0) {
      FUN_1008e3970("","PrlAudioCore",0,"Failed retrive default device\'s id. Err=%d");
    }
  }
  lVar3 = (**(code **)(*param_1 + 0x18))(param_1,param_2);
  param_1[6] = lVar3;
  if (lVar3 == 0) {
    FUN_1008e3970("","PrlAudioCore",0,"Failed to attach sound stream to host backend");
  }
  return lVar3 != 0;
}

