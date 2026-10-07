
undefined8 FUN_1002b4140(int param_1,char param_2)

{
  LOCK();
  UNLOCK();
  if ((DAT_1011c4a90 != param_1) || (DAT_1011c4a90 = param_1, param_2 != '\0')) {
    DAT_1011c4a90 = param_1;
    FUN_100430030(*(undefined8 *)(DAT_1011c3698 + 0xf0),param_1);
  }
  return 1;
}

