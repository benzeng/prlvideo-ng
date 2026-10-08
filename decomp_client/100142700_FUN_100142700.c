
bool FUN_100142700(long param_1)

{
  int iVar1;
  bool bVar2;
  
  if ((*(byte *)(*(long *)(param_1 + 0x28) + 8) & 2) == 0) {
    bVar2 = false;
  }
  else {
    iVar1 = QGuiApplication::mouseButtons();
    bVar2 = iVar1 == 1;
  }
  return bVar2;
}

