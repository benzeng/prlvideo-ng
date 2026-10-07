
int FUN_100112cb0(long param_1,undefined1 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 local_48;
  undefined8 local_44;
  undefined8 local_3c;
  undefined4 local_34;
  uint local_30;
  
  FUN_1008e3970("","vm",0,"Init Monitor");
  local_34 = 0;
  local_30 = 0xffffffff;
  local_48 = 0x803;
  local_3c = 0;
  local_44 = 0;
  iVar1 = FUN_100683330(param_1 + 0xc,0x601c7801,&local_48,0x1c);
  uVar2 = ~-(uint)(iVar1 == 0) | local_30;
  if (uVar2 == 0) {
    *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 4;
    FUN_1008e3970("","vm",0,"Init PMM");
    iVar1 = FUN_100112560(param_1,param_2);
    if (iVar1 < 0) {
      return iVar1;
    }
    *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 8;
    FUN_1000c5a00(param_1 + 0x130);
    if (*(int *)(DAT_1011c3698 + 0xb90) == 0) {
      return 0;
    }
    local_34 = 0;
    local_30 = -1;
    local_48 = 0x838;
    local_3c = 0;
    local_44 = 0;
    iVar1 = FUN_100683330(param_1 + 0xc,0x601c7801,&local_48,0x1c);
    if (iVar1 == 0 && local_30 == 0) {
      return 0;
    }
    FUN_1008e3970("","vm",0,"IOCTL_VGPU_INIT failed (%x)");
  }
  else {
    FUN_1008e3970("","vm",0,"IOCTL_INIT_MONITOR failed! (%x)",uVar2);
    if ((int)uVar2 < -0x7ffffff6) {
      if (uVar2 == 0x80000001) {
        return -0x7ffffe6a;
      }
      if (uVar2 == 0x80000002) {
        return -0x7ffffe70;
      }
    }
    else {
      if (uVar2 == 0x8000000a) {
        return -0x7ffffe70;
      }
      if (uVar2 == 0xffffffff) {
        return -0x7ffffe70;
      }
    }
  }
  return -0x7ffffff7;
}

