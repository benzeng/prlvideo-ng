
char * FUN_1004aaf10(char *param_1,long param_2)

{
  int iVar1;
  
  if (*(char *)(param_2 + 0x52) == '\0') {
    if (*(char *)(param_2 + 0x51) == '\0') {
      if (*(char *)(param_2 + 0x50) == '\0') {
        *(undefined **)param_1 = PTR_shared_null_1021e1288;
        return param_1;
      }
      iVar1 = 0x1df8b5e;
    }
    else {
      iVar1 = 0x1df8b1d;
    }
  }
  else if (*(char *)(param_2 + 0x51) == '\0') {
    if (*(char *)(param_2 + 0x50) == '\0') {
      iVar1 = 0x1df8adc;
    }
    else {
      iVar1 = 0x1df8a5f;
    }
  }
  else {
    iVar1 = 0x1df89ea;
  }
  QMetaObject::tr(param_1,PTR_staticMetaObject_1021e1520,iVar1);
  return param_1;
}

