
void FUN_1003043e0(long param_1,int param_2,undefined4 *param_3)

{
  undefined4 local_2c;
  
  if (0 < param_2) {
    do {
      (**(code **)(param_1 + 0x18))(1,&local_2c);
      FUN_100305f50(param_1,local_2c,local_2c);
      *param_3 = local_2c;
      param_3 = param_3 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

