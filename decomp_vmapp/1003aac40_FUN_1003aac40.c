
void FUN_1003aac40(long param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_2 & 0x7ff;
  *(short *)(param_1 + 0x4c) = (short)uVar3;
  uVar2 = *(uint3 *)(param_1 + 0x54) & 0xffff9fff;
  uVar1 = (ushort)param_2 & 0x2000 | (ushort)(param_2 >> 4) & 0x4000 | (ushort)uVar2;
  *(char *)(param_1 + 0x56) = (char)(*(uint3 *)(param_1 + 0x54) >> 0x10);
  *(ushort *)(param_1 + 0x54) = uVar1;
  if (uVar3 == 0x3d) {
    uVar3 = param_2 >> 0xb & 3;
    if (uVar3 != 0) {
      if (uVar3 != 1) {
        if (uVar3 != 2) {
          return;
        }
        *(undefined1 *)(param_1 + 0x4e) = 1;
        return;
      }
      *(char *)(param_1 + 0x56) = (char)(uVar2 >> 0x10);
      *(ushort *)(param_1 + 0x54) = uVar1 | 0x8000;
    }
  }
  else {
    if (uVar3 != 0x6f) {
      return;
    }
    uVar2 = param_2 >> 0xb & 3;
    if (uVar2 == 1) {
      *(undefined1 *)(param_1 + 0x4e) = 1;
      return;
    }
    if (uVar2 != 0) {
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x4e) = 8;
  return;
}

