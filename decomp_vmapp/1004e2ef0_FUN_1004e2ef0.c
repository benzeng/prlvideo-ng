
void FUN_1004e2ef0(QString *param_1)

{
  QDir::toNativeSeparators(param_1);
  QString::toUtf8_helper(param_1 + 1);
  *(undefined4 *)&param_1[2].field0_0x0 = 0xffffffff;
  *(undefined1 *)((long)&param_1[2].field0_0x0 + 4) = 0;
  return;
}

