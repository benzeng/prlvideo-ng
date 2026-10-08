
void FUN_1001ce100(long param_1)

{
  void *pvVar1;
  
  FUN_1001cbbe0();
  *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x78) = 1;
  pvVar1 = operator_new(0x30);
  FUN_1001c8350(pvVar1);
  *(void **)(*(long *)(param_1 + 0x10) + 0x70) = pvVar1;
  QMenu::setAsDockMenu();
  return;
}

