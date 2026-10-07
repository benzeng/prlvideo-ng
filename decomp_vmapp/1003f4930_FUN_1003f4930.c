
ulong FUN_1003f4930(long param_1)

{
  int iVar1;
  ulong uVar2;
  long local_28;
  long local_20;
  
  uVar2 = 0;
  iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))(*(long **)(param_1 + 0x30),0,0,0);
  iVar1 = _ioctl(iVar1,0x40046418,&local_28);
  if (-1 < iVar1) {
    uVar2 = 0;
    iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))(*(long **)(param_1 + 0x30),0,0,0);
    iVar1 = _ioctl(iVar1,0x40086419,&local_20);
    if (-1 < iVar1) {
      uVar2 = (ulong)(local_20 * local_28) >> 0xb;
    }
  }
  return uVar2;
}

