
undefined8 FUN_100c36810(undefined8 *param_1,long param_2,long param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (param_1 != (undefined8 *)0x0) {
    for (puVar1 = (undefined8 *)*param_1; puVar1 != (undefined8 *)0x0;
        puVar1 = (undefined8 *)*puVar1) {
      if (((puVar1[2] == param_3) && (puVar1[3] == param_4)) && (puVar1[4] == param_5)) {
        FUN_100c62ee0(0x10,0xd3,0x6c,"ec_lib.c",0x215);
        return 0;
      }
    }
    if (param_2 != 0) {
      puVar1 = (undefined8 *)FUN_100bf3540(0x28,"ec_lib.c",0x21e);
      if (puVar1 == (undefined8 *)0x0) {
        return 0;
      }
      puVar1[1] = param_2;
      puVar1[2] = param_3;
      puVar1[3] = param_4;
      puVar1[4] = param_5;
      *puVar1 = *param_1;
      *param_1 = puVar1;
    }
    uVar2 = 1;
  }
  return uVar2;
}

