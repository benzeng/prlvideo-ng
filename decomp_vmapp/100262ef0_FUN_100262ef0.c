
void FUN_100262ef0(long param_1,byte *param_2)

{
  int iVar1;
  undefined1 local_14 [4];
  
  *param_2 = *param_2 & 0xe0;
  iVar1 = _ioctl(*(int *)(param_1 + 0x118),0x4004746a,local_14);
  if (-1 < iVar1) {
    param_2[0x16] = param_2[0x16] & 0xf0 | 3;
    *param_2 = *param_2 | 0x10;
  }
  return;
}

