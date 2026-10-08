
ulong FUN_100c60ae0(byte *param_1)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar2 = 0;
  if (param_1 != (byte *)0x0) {
    bVar1 = *param_1;
    uVar2 = 0;
    if (bVar1 != 0) {
      uVar2 = 0;
      uVar3 = 0x100;
      do {
        param_1 = param_1 + 1;
        uVar4 = (long)(char)bVar1 | uVar3;
        uVar3 = uVar3 + 0x100;
        bVar1 = (bVar1 ^ bVar1 >> 2) & 0xf;
        uVar2 = uVar4 * uVar4 ^
                (ulong)((uint)(uVar2 >> (0x20 - bVar1 & 0x3f)) | (uint)(uVar2 << bVar1));
        bVar1 = *param_1;
      } while (bVar1 != 0);
      uVar2 = uVar2 >> 0x10 ^ uVar2;
    }
  }
  return uVar2;
}

