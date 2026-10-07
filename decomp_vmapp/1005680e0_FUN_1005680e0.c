
void FUN_1005680e0(long *param_1)

{
  int iVar1;
  
  *param_1 = (long)&PTR_FUN_100bc5f78;
  FUN_1005b6600(param_1 + 1);
  FUN_1005aabe0(param_1 + 2,param_1);
  param_1[0x227] = 0;
  param_1[0x226] = 0;
  param_1[0x225] = 0;
  FUN_1007d6870(param_1 + 0x22d);
  QReadWriteLock::QReadWriteLock((QReadWriteLock *)(param_1 + 0x233),0);
  QMutex::QMutex((QMutex *)(param_1 + 0x23a),1);
  FUN_1007d6870((long)param_1 + 0x11d9);
  param_1[0x23e] = (long)PTR_shared_null_100ba20d0;
  *(undefined1 *)(param_1 + 0x244) = 0;
  param_1[0x243] = 0;
  param_1[0x242] = 0;
  param_1[0x249] = (long)(param_1 + 0x249);
  param_1[0x24a] = (long)(param_1 + 0x249);
  param_1[0x24b] = 0;
  *(undefined4 *)(param_1 + 0x24c) = 0;
  *(undefined4 *)(param_1 + 0x24f) = 0;
  QMutex::QMutex((QMutex *)(param_1 + 0x250),0);
  *(undefined4 *)(param_1 + 0x251) = 0;
  param_1[0x252] = 0;
  *(undefined4 *)(param_1 + 0x224) = 0;
  *(undefined4 *)(param_1 + 0x25a) = 0;
  param_1[0x259] = 0;
  param_1[600] = 0;
  param_1[599] = 0;
  *(undefined1 *)(param_1 + 0x25d) = 0;
  param_1[0x25c] = 0;
  param_1[0x25b] = 0;
  *(undefined4 *)(param_1 + 0x234) = 1;
  *(undefined4 *)(param_1 + 0x22b) = 0;
  *(undefined1 *)((long)param_1 + 0x11a4) = 0;
  *(undefined4 *)((long)param_1 + 0x118c) = 0;
  *(undefined4 *)(param_1 + 0x232) = 0;
  param_1[0x239] = 0;
  *(undefined1 *)(param_1 + 0x23b) = 0;
  param_1[0x23f] = 0;
  param_1[0x230] = 0;
  param_1[0x22f] = 0;
  *(undefined4 *)(param_1 + 0x238) = 0;
  param_1[0x237] = 0;
  param_1[0x236] = 0;
  LOCK();
  UNLOCK();
  iVar1 = DAT_1011bc598 + 1;
  *(int *)(param_1 + 0x235) = DAT_1011bc598;
  DAT_1011bc598 = iVar1;
  param_1[0x245] = (long)(param_1 + 0x245);
  param_1[0x246] = (long)(param_1 + 0x245);
  param_1[0x247] = (long)(param_1 + 0x247);
  param_1[0x248] = (long)(param_1 + 0x247);
  param_1[0x24d] = (long)(param_1 + 0x24d);
  param_1[0x24e] = (long)(param_1 + 0x24d);
  param_1[0x253] = (long)(param_1 + 0x253);
  param_1[0x254] = (long)(param_1 + 0x253);
  param_1[0x255] = (long)(param_1 + 0x255);
  param_1[0x256] = (long)(param_1 + 0x255);
  param_1[0x240] = (long)(param_1 + 0x240);
  param_1[0x241] = (long)(param_1 + 0x240);
  ___bzero(param_1 + 0x25e,200);
  (**(code **)(*param_1 + 0x20))(param_1);
  return;
}

