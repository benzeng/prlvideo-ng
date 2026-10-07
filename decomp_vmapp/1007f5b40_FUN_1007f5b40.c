
ulong FUN_1007f5b40(long param_1)

{
  undefined8 in_RAX;
  ulong uVar1;
  ulong uVar2;
  int local_14;
  
  local_14 = (int)((ulong)in_RAX >> 0x20);
  uVar1 = (**(code **)(*(long *)(param_1 + 8) + 0x60))(param_1,0x1160,0x1161,0xe,0x1e,&local_14);
  if (local_14 == 0) {
    uVar2 = uVar1 & 0xffffffff;
  }
  else {
    uVar2 = 1;
    if (0 < (long)uVar1) {
      FUN_1007fd650(param_1,2,0x32);
      FUN_100887ce0(0x14,0x91,0x9f,"s3_clnt.c",0x91e);
      *(undefined4 *)(param_1 + 0x48) = 5;
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}

