
undefined8 FUN_100cba5b0(int *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  
  if (*param_1 != 0) {
    FUN_100c62ee0(0x2e,0x8e,0x7c,"cms_env.c",0xe9);
    return 0;
  }
  lVar1 = *(long *)(param_1 + 2);
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(lVar1 + 0x28);
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = *(undefined8 *)(lVar1 + 0x20);
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = *(undefined8 *)(lVar1 + 0x10);
  }
  return 1;
}

