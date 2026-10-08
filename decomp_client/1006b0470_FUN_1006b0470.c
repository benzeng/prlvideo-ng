
char * FUN_1006b0470(char *param_1,long param_2)

{
  int iVar1;
  
  iVar1 = FUN_10018a9d0(*(undefined8 *)(param_2 + 0x20));
  if (iVar1 == 0x30000009) {
    iVar1 = 0x1dc5141;
  }
  else {
    iVar1 = 0x1dc5151;
  }
  QMetaObject::tr(param_1,PTR_staticMetaObject_1021e1520,iVar1);
  return param_1;
}

