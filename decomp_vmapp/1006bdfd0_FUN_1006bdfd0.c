
undefined8 FUN_1006bdfd0(long param_1,undefined8 param_2,long param_3,ulong param_4,long param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 local_14 [4];
  
  if (param_3 == 0) {
    param_3 = *(long *)(param_1 + 0x40);
  }
  if ((param_4 < 0x1000) || (param_3 == 0)) {
    FUN_1008e3970("","prl_net",0,"ring_buf is NULL");
    uVar2 = 0xffffffff;
  }
  else {
    *(long *)(param_1 + 0x40) = param_3;
    if (0 < *(int *)(param_5 + 0x58)) {
      iVar1 = _ioctl(*(int *)(param_1 + 0x58),0x80047064,local_14);
      if (iVar1 < 0) {
        FUN_1008e3970("","prl_net",0,"Failed to setup tap_event");
      }
    }
    uVar2 = 0;
    iVar1 = _ioctl(*(int *)(param_1 + 0x58),0x8004667e,local_14);
    if (iVar1 < 0) {
      uVar2 = 0;
      FUN_1008e3970("","prl_net",0,"Failed to setup NBIO on tap");
    }
  }
  return uVar2;
}

