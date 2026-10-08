
char * FUN_1006b0510(char *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_10018c280(*(undefined8 *)(param_2 + 0x20));
  iVar1 = FUN_100319ae0(uVar2);
  if (iVar1 == 3) {
    iVar1 = 0x1dc61f6;
  }
  else {
    iVar1 = 0x1e0f5b0;
  }
  QMetaObject::tr(param_1,PTR_staticMetaObject_1021e1520,iVar1);
  return param_1;
}

