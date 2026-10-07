
undefined8 FUN_1000915d0(long param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_2 < 0x10) {
    uVar1 = *(undefined8 *)(param_1 + 0x1990 + (long)param_2 * 8);
  }
  return uVar1;
}

