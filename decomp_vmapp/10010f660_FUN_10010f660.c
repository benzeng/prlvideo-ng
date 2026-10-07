
undefined8 FUN_10010f660(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x1938);
  uVar2 = 0x80000009;
  if ((*(byte *)(lVar1 + 0x3d942) & 1) != 0) {
    *param_2 = *(undefined8 *)(lVar1 + 0x3d938);
    param_2[1] = *(undefined8 *)(lVar1 + 0x3d928);
    *(uint *)(param_2 + 2) = (uint)*(ushort *)(lVar1 + 0x3d940);
    uVar2 = 0;
  }
  return uVar2;
}

