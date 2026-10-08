
undefined8 * FUN_1009ff930(undefined8 *param_1)

{
  undefined1 local_108 [24];
  long local_f0;
  
  FUN_100afa180(local_108);
  FUN_100aed250(local_108,0xffffffffffffffff);
  if (local_f0 == 0) {
    *param_1 = PTR_shared_null_1021e1288;
  }
  else {
    CBaseNode::toString(SUB81(param_1,0),SUB81(local_f0,0));
  }
  FUN_100afa2a0(local_108);
  return param_1;
}

