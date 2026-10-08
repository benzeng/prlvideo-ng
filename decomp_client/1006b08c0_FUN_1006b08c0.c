
char * FUN_1006b08c0(char *param_1,long param_2)

{
  char cVar1;
  int iVar2;
  
  FUN_10018c2b0(*(undefined8 *)(param_2 + 0x20));
  CVmConfiguration::getVmSettings();
  CVmSettings::getTravelOptions();
  cVar1 = CVmTravelOptions::isEnabled();
  if (cVar1 != '\0') {
    iVar2 = FUN_10018a9d0(*(undefined8 *)(param_2 + 0x20));
    if (iVar2 != 0x30000001) {
      iVar2 = 0x1e0f61a;
      goto LAB_1006b0920;
    }
  }
  iVar2 = 0x1de7ac1;
LAB_1006b0920:
  QMetaObject::tr(param_1,PTR_staticMetaObject_1021e1520,iVar2);
  return param_1;
}

