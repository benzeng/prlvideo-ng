
char * FUN_10079a020(char *param_1,long param_2)

{
  int iVar1;
  undefined **ppuVar2;
  
  iVar1 = *(int *)(*(long *)(param_2 + 0x40) + 0x160);
  if (iVar1 == 5) {
    ppuVar2 = &PTR_s_Cancel_operation_1022708f0;
  }
  else if (iVar1 == 4) {
    ppuVar2 = &PTR_s_Cancel_operation_1022708e8;
  }
  else {
    if (iVar1 != 3) {
      *(undefined **)param_1 = PTR_shared_null_1021e1288;
      return param_1;
    }
    ppuVar2 = &PTR_s_Pause_download_1022708e0;
  }
  QMetaObject::tr(param_1,PTR_staticMetaObject_1021e1520,(int)*ppuVar2);
  return param_1;
}

