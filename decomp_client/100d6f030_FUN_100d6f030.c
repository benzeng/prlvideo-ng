
void FUN_100d6f030(long param_1)

{
  if (0 < DAT_10230ffd0) {
    FUN_100df99c0("","PrlPsConverter",1,"[PrlPostscript] PSConverter::abort started.");
  }
  *(undefined1 *)(param_1 + 0x30) = 1;
  QProcess::kill();
  return;
}

