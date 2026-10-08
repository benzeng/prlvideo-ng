
char * FUN_10038a010(char *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 2) {
    iVar1 = 0x1dc6d42;
  }
  else {
    if (param_2 != 1) {
      *(undefined **)param_1 = PTR_shared_null_1021e1288;
      return param_1;
    }
    iVar1 = 0x1df0102;
  }
  QMetaObject::tr(param_1,PTR_staticMetaObject_1021e1520,iVar1);
  return param_1;
}

