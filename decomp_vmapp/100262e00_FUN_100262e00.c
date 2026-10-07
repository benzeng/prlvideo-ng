
undefined8 FUN_100262e00(long param_1)

{
  *(undefined1 *)(param_1 + 0x128) = 0;
  if (-1 < *(int *)(param_1 + 0x118)) {
    _tcflush(*(int *)(param_1 + 0x118),3);
    _close(*(int *)(param_1 + 0x118));
    *(undefined4 *)(param_1 + 0x118) = 0xffffffff;
  }
  QFile::remove((QString *)(param_1 + 0x120));
  QThread::wait(param_1 + 8);
  return 0;
}

