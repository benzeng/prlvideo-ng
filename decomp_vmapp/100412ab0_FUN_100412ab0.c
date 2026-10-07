
void FUN_100412ab0(long param_1)

{
  if (0 < DAT_1011b55f8) {
    FUN_1008e3970("","PrlPsConverter",1,"[PrlPostscript] PSConverter::abort started.");
  }
  *(undefined1 *)(param_1 + 0x30) = 1;
  QProcess::kill();
  return;
}

