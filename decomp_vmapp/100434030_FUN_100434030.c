
void FUN_100434030(long param_1,uint param_2,undefined4 param_3)

{
  if (0xf < param_2) {
    FUN_1008e3970("","IODesktopServer",0,
                  " Error: display \'%d\' is greater than PRL_IO_MAX_DISPLAYS",param_2);
    return;
  }
  QMutex::lock();
  *(undefined4 *)(param_1 + 0x3c + (ulong)param_2 * 0x424) = param_3;
  QMutex::unlock();
  FUN_100439700(param_1,param_2,param_3);
  return;
}

