
undefined8 FUN_100879350(long param_1,undefined8 param_2,undefined8 *param_3)

{
  if (param_1 != 0) {
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = *(undefined8 *)(param_1 + 0x28);
    }
    *(undefined8 *)(param_1 + 0x28) = param_2;
    return 1;
  }
  FUN_100887ce0(0x25,0x7a,0x43,"dso_lib.c",0x145);
  return 0;
}

