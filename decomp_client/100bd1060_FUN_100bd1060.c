
bool FUN_100bd1060(long param_1)

{
  long lVar1;
  int iVar2;
  
  lVar1 = *(long *)(param_1 + 0x80);
  iVar2 = FUN_100cb42c0(*(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(lVar1 + 0x168),0x4400,
                        *(undefined8 *)(lVar1 + 0x170),*(undefined4 *)(lVar1 + 0x15c));
  if (-1 < iVar2) {
    *(int *)(lVar1 + 0x15c) = iVar2;
    *(undefined8 *)(lVar1 + 0x170) = *(undefined8 *)(lVar1 + 0x168);
  }
  return -1 < iVar2;
}

