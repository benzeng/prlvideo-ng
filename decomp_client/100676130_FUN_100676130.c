
void FUN_100676130(long param_1,uint param_2)

{
  if ((0xb < param_2) || ((0x818U >> (param_2 & 0x1f) & 1) == 0)) {
    *(uint *)(param_1 + 0x164) = param_2;
  }
  return;
}

