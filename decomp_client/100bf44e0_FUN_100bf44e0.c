
long FUN_100bf44e0(ulong *param_1)

{
  ulong uVar1;
  
  uVar1 = *param_1;
  return (uVar1 >> 4) * 0xfb + (uVar1 >> 0xe) * 7 + uVar1 * 0x45bb;
}

