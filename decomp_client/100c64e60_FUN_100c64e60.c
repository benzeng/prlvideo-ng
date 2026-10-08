
ulong FUN_100c64e60(ulong *param_1)

{
  ulong uVar1;
  
  uVar1 = *param_1;
  uVar1 = uVar1 >> 0xc & 0xfff ^ uVar1 >> 0x18 & 0xff ^ uVar1;
  return (uVar1 % 0x13) * 0xd ^ uVar1;
}

