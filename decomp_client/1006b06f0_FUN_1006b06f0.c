
char * FUN_1006b06f0(char *param_1,long param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_10018f890(*(undefined8 *)(param_2 + 0x20));
  if (iVar2 == 0x80c) {
LAB_1006b071d:
    FUN_10018c2b0(*(undefined8 *)(param_2 + 0x20));
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmTools();
    CVmTools::getWin7Look();
    cVar1 = CVmWin7Look::isEnabled();
    if (cVar1 == '\0') {
      iVar2 = 0x1e0f605;
      goto LAB_1006b0768;
    }
  }
  else {
    iVar2 = FUN_10018f890(*(undefined8 *)(param_2 + 0x20));
    if (iVar2 == 0x80e) goto LAB_1006b071d;
  }
  iVar2 = 0x1dc61e3;
LAB_1006b0768:
  QMetaObject::tr(param_1,PTR_staticMetaObject_1021e1520,iVar2);
  return param_1;
}

