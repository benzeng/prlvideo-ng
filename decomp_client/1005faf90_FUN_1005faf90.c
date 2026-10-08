
void FUN_1005faf90(long param_1,undefined1 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_1005ec990(param_1 + 0x38);
  FUN_1005bf410(uVar2,param_2);
  FUN_1005ec990(param_1 + 0x38);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  bVar1 = (bool)CVmTools::getWin7Look();
  CVmWin7Look::setEnabled(bVar1);
  return;
}

