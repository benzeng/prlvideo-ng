
undefined8 FUN_10087cb70(long *param_1,undefined8 param_2,undefined4 param_3)

{
  long local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 local_20;
  
  local_38 = 0;
  uStack_30 = 0;
  local_28 = param_2;
  local_20 = param_3;
  FUN_10081d010(9,0x1e,"tb_asnmth.c",0xec);
  FUN_10087b440(DAT_1011c08e0,FUN_10087cc00,&local_38);
  if (local_38 != 0) {
    *(int *)(local_38 + 0xac) = *(int *)(local_38 + 0xac) + 1;
  }
  *param_1 = local_38;
  FUN_10081d010(10,0x1e,"tb_asnmth.c",0xf4);
  return uStack_30;
}

