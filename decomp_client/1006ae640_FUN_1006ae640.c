
bool FUN_1006ae640(long param_1)

{
  int iVar1;
  bool bVar2;
  
  FUN_10018c2b0(*(undefined8 *)(param_1 + 0x20));
  iVar1 = CVmConfiguration::getValidRc();
  if (iVar1 == -0x7ffffd7d) {
    bVar2 = false;
  }
  else {
    FUN_10018c2b0(*(undefined8 *)(param_1 + 0x20));
    iVar1 = CVmConfiguration::getValidRc();
    bVar2 = iVar1 != -0x7ffffbac;
  }
  return bVar2;
}

