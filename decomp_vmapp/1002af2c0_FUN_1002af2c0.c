
void FUN_1002af2c0(long param_1,char param_2)

{
  *(undefined1 *)(param_1 + 0x8d1) = 1;
  if (param_2 != '\0') {
    QWaitCondition::wakeOne();
    return;
  }
  return;
}

