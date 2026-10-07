
void FUN_1003aace0(long param_1,uint param_2)

{
  uint uVar1;
  ushort uVar2;
  
  uVar1 = param_2 & 0x3f;
  if (uVar1 == 3) {
    uVar2 = *(short *)(param_1 + 0x4c) - 0x3d;
    if ((0x32 < uVar2) || ((0x6000000000001U >> ((ulong)uVar2 & 0x3f) & 1) == 0)) {
      switch(param_2 >> 6 & 0xf) {
      case 1:
      case 2:
      case 5:
        *(byte *)(param_1 + 0x4e) = *(byte *)(param_1 + 0x4e) | 8;
        break;
      case 3:
        *(byte *)(param_1 + 0x4e) = *(byte *)(param_1 + 0x4e) | 2;
        break;
      case 4:
        *(byte *)(param_1 + 0x4e) = *(byte *)(param_1 + 0x4e) | 1;
        break;
      case 6:
        *(byte *)(param_1 + 0x4e) = *(byte *)(param_1 + 0x4e) | 0xb;
      }
      switch(param_2 >> 10 & 0xf) {
      case 1:
      case 2:
      case 5:
        *(byte *)(param_1 + 0x4e) = *(byte *)(param_1 + 0x4e) | 8;
        break;
      case 3:
        *(byte *)(param_1 + 0x4e) = *(byte *)(param_1 + 0x4e) | 2;
        break;
      case 4:
        *(byte *)(param_1 + 0x4e) = *(byte *)(param_1 + 0x4e) | 1;
        break;
      case 6:
        *(byte *)(param_1 + 0x4e) = *(byte *)(param_1 + 0x4e) | 0xb;
      }
      switch(param_2 >> 0xe & 0xf) {
      case 1:
      case 2:
      case 5:
        *(byte *)(param_1 + 0x4e) = *(byte *)(param_1 + 0x4e) | 8;
        break;
      case 3:
        *(byte *)(param_1 + 0x4e) = *(byte *)(param_1 + 0x4e) | 2;
        break;
      case 4:
        *(byte *)(param_1 + 0x4e) = *(byte *)(param_1 + 0x4e) | 1;
        break;
      case 6:
        *(byte *)(param_1 + 0x4e) = *(byte *)(param_1 + 0x4e) | 0xb;
      }
      switch(param_2 >> 0x12 & 0xf) {
      case 1:
      case 2:
      case 5:
        *(byte *)(param_1 + 0x4e) = *(byte *)(param_1 + 0x4e) | 8;
        return;
      case 3:
        *(byte *)(param_1 + 0x4e) = *(byte *)(param_1 + 0x4e) | 2;
        return;
      case 4:
        *(byte *)(param_1 + 0x4e) = *(byte *)(param_1 + 0x4e) | 1;
        return;
      case 6:
        *(byte *)(param_1 + 0x4e) = *(byte *)(param_1 + 0x4e) | 0xb;
        return;
      }
    }
  }
  else if (uVar1 == 2) {
    uVar1 = *(uint3 *)(param_1 + 0x54) & 0xf0ffff;
    *(short *)(param_1 + 0x54) = (short)uVar1;
    *(byte *)(param_1 + 0x56) = (byte)(((param_2 & 0x3c0) << 10) >> 0x10) | (byte)(uVar1 >> 0x10);
  }
  else if (uVar1 == 1) {
    uVar1 = *(uint3 *)(param_1 + 0x54) & 0xffe000;
    *(char *)(param_1 + 0x56) = (char)(uVar1 >> 0x10);
    *(ushort *)(param_1 + 0x54) = (ushort)(param_2 >> 8) & 0x1ffe | (ushort)uVar1 | 1;
    return;
  }
  return;
}

