
void FUN_10046ded0(long param_1)

{
  *(undefined1 *)(param_1 + 0x40) = 0;
  FUN_10046df00(param_1,param_1 + 0x48);
  QThread::start(param_1 + 0x20,7);
  return;
}

