
undefined8 FUN_1008dde50(int *param_1,undefined8 param_2)

{
  if (*param_1 != 0) {
    FUN_100887ce0(0x2e,0x91,0x7c,"cms_env.c",0x115);
    return 0;
  }
  *(undefined8 *)(*(long *)(param_1 + 2) + 0x28) = param_2;
  return 1;
}

