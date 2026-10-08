
undefined8 FUN_100c59d70(undefined8 param_1,int param_2)

{
  if (param_2 - 1U < 0xc) {
    return *(undefined8 *)(&DAT_101dae6d0 + (long)(int)(param_2 - 1U) * 8);
  }
  return 0;
}

