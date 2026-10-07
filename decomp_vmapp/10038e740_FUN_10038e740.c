
undefined4 FUN_10038e740(uint param_1,undefined8 param_2)

{
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 *local_30;
  uint local_28 [4];
  undefined8 local_18;
  undefined4 local_c;
  
  local_c = 0;
  local_28[2] = 1;
  local_28[1] = 1;
  local_28[3] = (uint)(byte)(&DAT_100b3e8a7)[(ulong)param_1 * 8];
  local_40 = 0;
  local_38 = 1;
  local_3c = 1;
  local_34 = 4;
  local_30 = &local_c;
  local_28[0] = param_1;
  local_18 = param_2;
  FUN_1003c6660(local_28,0,&local_40,0,1);
  return local_c;
}

