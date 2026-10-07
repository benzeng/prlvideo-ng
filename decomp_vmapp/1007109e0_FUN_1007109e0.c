
void FUN_1007109e0(void)

{
  undefined1 auVar1 [12];
  
  if (DAT_1011bdb08 == 0) {
    auVar1 = FUN_100710a60();
    DAT_1011bdb08 = auVar1._0_4_ << 0x10 | auVar1._8_4_ | auVar1._3_4_ & 0xffffff00;
  }
  return;
}

