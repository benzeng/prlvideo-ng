
void FUN_10036bd80(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = MacUtils::isWindowInNativeFullScreen(*(QWidget **)(param_1 + 0x10));
  if (cVar2 != '\0') {
    return;
  }
  uVar1 = FUN_100370280();
  FUN_100372fc0(uVar1,*(undefined8 *)(param_1 + 0x10));
  return;
}

