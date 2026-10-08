
void FUN_10038d0f0(long param_1)

{
  byte extraout_var;
  
  QGuiApplication::keyboardModifiers();
  *(byte *)(*(long *)(param_1 + 0x30) + 0x24) = extraout_var >> 3 & 1;
  QDialog::done((int)param_1);
  return;
}

