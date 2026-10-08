
undefined8 FUN_100ca71c0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 local_20;
  
  local_20 = param_3;
  FUN_100c9f380("Require Explicit Policy",*param_2,&local_20);
  FUN_100c9f380("Inhibit Policy Mapping",param_2[1],&local_20);
  return local_20;
}

