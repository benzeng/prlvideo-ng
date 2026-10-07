
undefined2 FUN_100753360(short *param_1,uint param_2)

{
  undefined2 uVar1;
  
  if (param_2 < 2) {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT11((char)((ushort)*param_1 >> 8),*param_1 == 0xf);
  }
  return uVar1;
}

