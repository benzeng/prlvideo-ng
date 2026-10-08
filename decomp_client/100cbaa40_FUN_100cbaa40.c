
undefined8 FUN_100cbaa40(int *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  if (*param_1 == 2) {
    lVar1 = *(long *)(param_1 + 2);
    *(undefined8 *)(lVar1 + 0x20) = param_2;
    *(undefined8 *)(lVar1 + 0x28) = param_3;
    return 1;
  }
  FUN_100c62ee0(0x2e,0x90,0x7b,"cms_env.c",0x24f);
  return 0;
}

