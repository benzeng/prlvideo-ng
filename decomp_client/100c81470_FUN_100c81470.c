
undefined8 FUN_100c81470(uint param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 < 0x1f) {
    uVar1 = *(undefined8 *)(&DAT_101daea50 + (long)(int)param_1 * 8);
  }
  return uVar1;
}

