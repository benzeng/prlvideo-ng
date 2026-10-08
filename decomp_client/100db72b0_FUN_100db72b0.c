
long FUN_100db72b0(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long local_b8;
  uint local_ac;
  undefined1 local_a8 [4];
  uint local_a4;
  long local_48;
  
  iVar1 = _fstat_INODE64(param_1,local_a8);
  lVar2 = -1;
  lVar3 = lVar2;
  if ((iVar1 == 0) && (lVar3 = local_48, (local_a4 & 0xf000 | 0x4000) == 0x6000)) {
    iVar1 = _ioctl((int)param_1,0x40086419,&local_b8);
    lVar3 = lVar2;
    if ((iVar1 != -1) && (iVar1 = _ioctl((int)param_1,0x40046418,&local_ac), iVar1 != -1)) {
      lVar3 = (ulong)local_ac * local_b8;
    }
  }
  return lVar3;
}

