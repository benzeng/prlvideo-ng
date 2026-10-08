
void FUN_100378cb0(long param_1)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  
  *(undefined1 *)(param_1 + 100) = 0;
  cVar2 = *(char *)(param_1 + 0x66);
  cVar1 = MacUtils::isWindowInFullScreenTiling(*(QWidget **)(param_1 + 0x10));
  *(char *)(param_1 + 0x66) = cVar1;
  if (cVar2 != cVar1) {
    FUN_100378a30(param_1);
  }
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
  }
  cVar2 = FUN_100325f80(uVar3);
  if (cVar2 != '\0') {
    FUN_100378d10(param_1);
    return;
  }
  return;
}

