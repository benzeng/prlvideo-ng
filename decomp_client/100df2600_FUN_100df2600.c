
void FUN_100df2600(void)

{
  undefined1 auVar1 [12];
  
  if (DAT_102319780 == 0) {
    auVar1 = FUN_100df2680();
    DAT_102319780 = auVar1._0_4_ << 0x10 | auVar1._8_4_ | auVar1._3_4_ & 0xffffff00;
  }
  return;
}

