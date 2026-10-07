
undefined8
FUN_1008de160(int *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6)

{
  undefined8 *puVar1;
  
  if (*param_1 != 2) {
    FUN_100887ce0(0x2e,0x89,0x7b,"cms_env.c",0x231);
    return 0;
  }
  puVar1 = *(undefined8 **)(*(long *)(param_1 + 2) + 8);
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(*(long *)(param_1 + 2) + 0x10);
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = *puVar1;
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = puVar1[1];
  }
  if (param_5 != (undefined8 *)0x0) {
    if ((undefined8 *)puVar1[2] == (undefined8 *)0x0) {
      *param_5 = 0;
    }
    else {
      *param_5 = *(undefined8 *)puVar1[2];
    }
  }
  if (param_6 != (undefined8 *)0x0) {
    if (puVar1[2] != 0) {
      *param_6 = *(undefined8 *)(puVar1[2] + 8);
      return 1;
    }
    *param_6 = 0;
  }
  return 1;
}

