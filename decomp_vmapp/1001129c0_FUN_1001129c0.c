
undefined8 FUN_1001129c0(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 local_38;
  undefined8 local_34;
  undefined8 local_2c;
  undefined4 local_24;
  uint local_20;
  
  local_24 = 0;
  local_20 = 0xffffffff;
  local_38 = 0x803;
  local_2c = 0;
  local_34 = 0;
  iVar1 = FUN_100683330(param_1 + 0xc,0x601c7801,&local_38,0x1c,0);
  uVar2 = ~-(uint)(iVar1 == 0) | local_20;
  if (uVar2 == 0) {
    return 0;
  }
  FUN_1008e3970("","vm",0,"IOCTL_INIT_MONITOR failed! (%x)",uVar2);
  if ((int)uVar2 < -0x7ffffff6) {
    if (uVar2 == 0x80000001) {
      return 0x80000196;
    }
    if (uVar2 == 0x80000002) {
      return 0x80000190;
    }
  }
  else {
    if (uVar2 == 0x8000000a) {
      return 0x80000190;
    }
    if (uVar2 == 0xffffffff) {
      return 0x80000190;
    }
  }
  return 0x80000009;
}

