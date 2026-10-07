
undefined8 FUN_1000d78b0(long *param_1)

{
  QMutex::lock();
  *(undefined1 *)(param_1 + 4) = 0;
  QMutex::unlock();
  FUN_100430570(*(undefined8 *)(*param_1 + 0xf0),100);
  return 1;
}

