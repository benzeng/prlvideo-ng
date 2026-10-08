
bool FUN_100122280(void)

{
  uint uVar1;
  
  uVar1 = FUN_10018f890();
  return uVar1 - 0x80e < 3 || (uVar1 & 0xffffff00) == 0x700;
}

