
undefined8 FUN_100522c50(long *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 == -0x8000000000000000) {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT71(0x80000000000000,param_1[1] != -0x8000000000000000);
  }
  return uVar1;
}

