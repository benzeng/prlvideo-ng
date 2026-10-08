
undefined8 * FUN_100db8780(void)

{
  if (DAT_1023191c0 == (undefined8 *)0x0) {
    DAT_1023191c0 = operator_new(0x40);
    DAT_1023191c0[7] = DAT_101db38f8;
    DAT_1023191c0[6] = DAT_101db38f0;
    DAT_1023191c0[5] = DAT_101db38e8;
    DAT_1023191c0[4] = DAT_101db38e0;
    DAT_1023191c0[3] = DAT_101db38d8;
    DAT_1023191c0[2] = DAT_101db38d0;
    DAT_1023191c0[1] = DAT_101db38c8;
    *DAT_1023191c0 = DAT_101db38c0;
  }
  LOCK();
  DAT_1023191c8 = DAT_1023191c8 + 1;
  UNLOCK();
  return DAT_1023191c0;
}

