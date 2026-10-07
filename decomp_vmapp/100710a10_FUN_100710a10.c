
undefined8 FUN_100710a10(void)

{
  undefined1 auVar1 [12];
  
  if (DAT_1011bdb1c != '\x01') {
    auVar1 = FUN_100710a60();
    DAT_1011bdb18 = auVar1._8_4_;
    DAT_1011bdb10._0_4_ = auVar1._0_4_;
    DAT_1011bdb10._4_4_ = auVar1._4_4_;
    DAT_1011bdb1c = '\x01';
  }
  return CONCAT44(DAT_1011bdb10._4_4_,(undefined4)DAT_1011bdb10);
}

