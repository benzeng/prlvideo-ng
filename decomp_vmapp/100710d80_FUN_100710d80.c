
undefined8
FUN_100710d80(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_1007127b0(&DAT_1011ccb30);
  cVar1 = FUN_100711ee0(uVar2);
  uVar2 = 1;
  if (cVar1 == '\0') {
    if (param_1 != 0) {
      uVar2 = FUN_1007127b0(&DAT_1011ccb30);
      cVar1 = FUN_100711eb0(uVar2,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      if (cVar1 == '\0') {
        return 0;
      }
    }
    uVar2 = FUN_1007127b0(&DAT_1011ccb30);
    uVar2 = FUN_100711e10(uVar2);
  }
  return uVar2;
}

