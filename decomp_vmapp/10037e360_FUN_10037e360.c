
undefined8 FUN_10037e360(undefined8 param_1,long param_2)

{
  double dVar1;
  double dVar2;
  
  if ((*(byte *)(param_2 + 0xbb6c) & 1) == 0) {
    dVar1 = (double)*(float *)(param_2 + 0x1a8);
    dVar2 = (double)*(float *)(param_2 + 0x1ac);
  }
  else {
    dVar1 = 0.0;
    dVar2 = DAT_100b44c90;
  }
  (*DAT_1011c5ba8)(dVar1,dVar2);
  return 0;
}

