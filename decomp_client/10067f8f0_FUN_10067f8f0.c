
void FUN_10067f8f0(undefined8 param_1,undefined8 param_2,int param_3)

{
  uint local_20 [2];
  long local_18;
  
  if (param_3 == 3) {
    QVariant::toStringList();
    local_20[0] = QString::toInt((bool *)(local_18 + 0x18 + (long)*(int *)(local_18 + 8) * 8),0);
    local_20[0] = local_20[0] | 0xc;
    FUN_10067e380(param_1,local_18 + 0x10 + (long)*(int *)(local_18 + 8) * 8,local_20);
    FUN_100039a80(&local_18);
  }
  else if (param_3 == 1) {
    FUN_1006085d0(10,0);
    return;
  }
  return;
}

