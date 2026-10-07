
undefined8 FUN_100476240(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 in_RAX;
  undefined8 local_18;
  
  local_18._4_4_ = (undefined4)((ulong)in_RAX >> 0x20);
  local_18 = CONCAT44(local_18._4_4_,*param_3) & 0xffffffffffffff7e;
  FUN_100478080(param_1,param_2,&local_18);
  return 0;
}

