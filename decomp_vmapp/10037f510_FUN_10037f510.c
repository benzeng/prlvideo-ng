
uint FUN_10037f510(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = FUN_100398280(*(undefined8 *)(param_1 + 0x10),param_2 + 0x8270,
                        *(undefined8 *)(param_1 + 8));
  return (uVar1 & 2) << 6 | (int)(uVar1 << 0x1f) >> 0x1f & 3U;
}

