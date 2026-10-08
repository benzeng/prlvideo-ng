
char * FUN_1006b0170(char *param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  
  uVar2 = FUN_10069dca0(param_2);
  cVar1 = FUN_1006ad8b0(uVar2,*(undefined8 *)(param_2 + 0x20));
  if (cVar1 == '\0') {
    ppuVar3 = &PTR_s_View_Configuration____10226dfc0;
  }
  else {
    ppuVar3 = &PTR_s_Configure____10226dfc8;
  }
  QMetaObject::tr(param_1,PTR_staticMetaObject_1021e1520,(int)*ppuVar3);
  return param_1;
}

