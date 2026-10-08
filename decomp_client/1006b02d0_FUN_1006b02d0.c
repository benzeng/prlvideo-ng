
char * FUN_1006b02d0(char *param_1,long param_2)

{
  undefined8 uVar1;
  int *piVar2;
  undefined **ppuVar3;
  
  uVar1 = FUN_10018c280(*(undefined8 *)(param_2 + 0x20));
  uVar1 = FUN_100319c60(uVar1);
  piVar2 = (int *)FUN_10033c600(uVar1);
  if (*piVar2 == 0) {
    ppuVar3 = &PTR_s_Show_Windows_Desktop_10226e100;
  }
  else {
    ppuVar3 = &PTR_s_Hide_Windows_Desktop_10226e108;
  }
  QMetaObject::tr(param_1,PTR_staticMetaObject_1021e1520,(int)*ppuVar3);
  return param_1;
}

