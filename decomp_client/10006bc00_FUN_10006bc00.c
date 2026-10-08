
void FUN_10006bc00(long param_1,bool param_2)

{
  byte bVar1;
  
  bVar1 = MacUtils::isWindowPrimaryInFullScreen(*(QWidget **)(param_1 + 0x10));
  if ((bVar1 ^ param_2) == 1) {
    MacUtils::setWindowToBePrimaryInFullScreen(*(QWidget **)(param_1 + 0x10),param_2);
    return;
  }
  return;
}

