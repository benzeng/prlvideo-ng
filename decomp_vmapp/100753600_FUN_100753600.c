
bool FUN_100753600(int *param_1,uint param_2)

{
  bool bVar1;
  
  if (param_2 < 4) {
    bVar1 = false;
  }
  else {
    bVar1 = *param_1 == 0x4742444b;
  }
  return bVar1;
}

