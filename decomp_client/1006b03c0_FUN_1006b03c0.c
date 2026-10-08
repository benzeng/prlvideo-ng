
char * FUN_1006b03c0(char *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  
  uVar2 = FUN_10018c280(*(undefined8 *)(param_2 + 0x20));
  iVar1 = FUN_10031bd60(uVar2);
  if (iVar1 == 1) {
    ppuVar3 = &PTR_s_Installing_Parallels_Tools____10226dfe0;
  }
  else {
    iVar1 = FUN_10018f5b0(*(undefined8 *)(param_2 + 0x20));
    if (iVar1 == 1) {
      ppuVar3 = &PTR_s_Install_Parallels_Tools____10226dfd8;
    }
    else {
      iVar1 = FUN_10018f5b0(*(undefined8 *)(param_2 + 0x20));
      if ((iVar1 == 0) || (iVar1 = FUN_10018f5b0(*(undefined8 *)(param_2 + 0x20)), iVar1 == 2)) {
        ppuVar3 = &PTR_s_Reinstall_Parallels_Tools_10226e000;
      }
      else {
        iVar1 = FUN_10018f5b0(*(undefined8 *)(param_2 + 0x20));
        if (iVar1 != 3) {
          *(undefined **)param_1 = PTR_shared_null_1021e1288;
          return param_1;
        }
        ppuVar3 = &PTR_s_Update_Parallels_Tools_10226dff8;
      }
    }
  }
  QMetaObject::tr(param_1,PTR_staticMetaObject_1021e1520,(int)*ppuVar3);
  return param_1;
}

