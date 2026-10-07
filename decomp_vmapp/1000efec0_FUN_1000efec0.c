
char * FUN_1000efec0(byte param_1)

{
  uint uVar1;
  
  uVar1 = (1 << (param_1 & 0x1f)) - 1;
  if (uVar1 < 8) {
    return (&PTR_s_SAVEOPT_100ba9050)[(int)uVar1];
  }
  return "UNK";
}

