
char * FUN_1006b01d0(char *param_1,long param_2)

{
  int iVar1;
  undefined **ppuVar2;
  
  iVar1 = FUN_10018a9d0(*(undefined8 *)(param_2 + 0x20));
  if (iVar1 != 0x30000009) {
    iVar1 = FUN_10018a9d0(*(undefined8 *)(param_2 + 0x20));
    if (iVar1 != 0x30000010) {
      iVar1 = FUN_10018a9d0(*(undefined8 *)(param_2 + 0x20));
      if (iVar1 != 0x30000005) {
        iVar1 = FUN_10018a9d0(*(undefined8 *)(param_2 + 0x20));
        if (iVar1 != 0x3000000d) {
          ppuVar2 = &PTR_s_Start_10226df40;
          goto LAB_1006b0224;
        }
      }
    }
  }
  ppuVar2 = &PTR_s_Resume_10226df70;
LAB_1006b0224:
  QMetaObject::tr(param_1,PTR_staticMetaObject_1021e1520,(int)*ppuVar2);
  return param_1;
}

