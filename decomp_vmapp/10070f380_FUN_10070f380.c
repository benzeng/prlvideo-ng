
undefined8 * FUN_10070f380(void)

{
  if (DAT_1011bdad0 == (undefined8 *)0x0) {
    DAT_1011bdad0 = operator_new(0x40);
    DAT_1011bdad0[7] = DAT_100b4a468;
    DAT_1011bdad0[6] = DAT_100b4a460;
    DAT_1011bdad0[5] = DAT_100b4a458;
    DAT_1011bdad0[4] = DAT_100b4a450;
    DAT_1011bdad0[3] = DAT_100b4a448;
    DAT_1011bdad0[2] = DAT_100b4a440;
    DAT_1011bdad0[1] = DAT_100b4a438;
    *DAT_1011bdad0 = DAT_100b4a430;
  }
  LOCK();
  DAT_1011bdad8 = DAT_1011bdad8 + 1;
  UNLOCK();
  return DAT_1011bdad0;
}

