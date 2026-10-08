
undefined8 FUN_100df2630(void)

{
  undefined1 auVar1 [12];
  
  if (DAT_102319794 != '\x01') {
    auVar1 = FUN_100df2680();
    DAT_102319790 = auVar1._8_4_;
    DAT_102319788._0_4_ = auVar1._0_4_;
    DAT_102319788._4_4_ = auVar1._4_4_;
    DAT_102319794 = '\x01';
  }
  return CONCAT44(DAT_102319788._4_4_,(undefined4)DAT_102319788);
}

