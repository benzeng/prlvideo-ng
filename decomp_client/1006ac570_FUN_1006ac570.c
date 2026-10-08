
char * FUN_1006ac570(char *param_1)

{
  char cVar1;
  undefined **ppuVar2;
  
  cVar1 = FUN_10011d760(0,0);
  if (cVar1 == '\0') {
    ppuVar2 = &PTR_s_Install_Antivirus_for_Mac____1022707c8;
  }
  else {
    ppuVar2 = &PTR_s_Uninstall_Antivirus_for_Mac____1022707d8;
  }
  QMetaObject::tr(param_1,PTR_staticMetaObject_1021e1520,(int)*ppuVar2);
  return param_1;
}

