
undefined8 FUN_1007ef6f0(long param_1)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  byte *pbVar2;
  int local_14;
  
  local_14 = (int)((ulong)in_RAX >> 0x20);
  uVar1 = (**(code **)(*(long *)(param_1 + 8) + 0x60))
                    (param_1,0x2180,0x2181,0xffffffff,*(undefined8 *)(param_1 + 0x1b8),&local_14);
  if (local_14 != 0) {
    pbVar2 = *(byte **)(param_1 + 0x80);
    pbVar2[0x3c4] = 1;
    pbVar2[0x3c5] = 0;
    pbVar2[0x3c6] = 0;
    pbVar2[0x3c7] = 0;
    uVar1 = 1;
    if (*(int *)(pbVar2 + 0x3a0) == 1) {
      if ((*pbVar2 & 0x40) == 0) {
        if (*(long *)(pbVar2 + 0x3b0) != 0) {
          FUN_100876b00();
          pbVar2 = *(byte **)(param_1 + 0x80);
          pbVar2[0x3b0] = 0;
          pbVar2[0x3b1] = 0;
          pbVar2[0x3b2] = 0;
          pbVar2[0x3b3] = 0;
          pbVar2[0x3b4] = 0;
          pbVar2[0x3b5] = 0;
          pbVar2[0x3b6] = 0;
          pbVar2[0x3b7] = 0;
        }
        if (*(long *)(pbVar2 + 0x3b8) != 0) {
          FUN_100863f80();
          pbVar2 = *(byte **)(param_1 + 0x80);
          pbVar2[0x3b8] = 0;
          pbVar2[0x3b9] = 0;
          pbVar2[0x3ba] = 0;
          pbVar2[0x3bb] = 0;
          pbVar2[0x3bc] = 0;
          pbVar2[0x3bd] = 0;
          pbVar2[0x3be] = 0;
          pbVar2[0x3bf] = 0;
        }
        *pbVar2 = *pbVar2 | 0x40;
        uVar1 = 2;
      }
      else {
        FUN_100887ce0(0x14,0x130,0x15a,"s3_srvr.c",0x3ae);
        uVar1 = 0xffffffff;
      }
    }
  }
  return uVar1;
}

