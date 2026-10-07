
void FUN_10029c730(long param_1,int param_2)

{
  if (param_2 == 0) {
    FUN_1008e3970("AudioF","LocalDevices",0,"[CAudioFormat] Invalid new rate, adjust to default");
    param_2 = 48000;
  }
  *(int *)(param_1 + 8) = param_2;
  return;
}

