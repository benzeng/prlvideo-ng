
undefined8 * FUN_10063a700(undefined8 *param_1)

{
  undefined1 local_108 [24];
  long local_f0;
  
  FUN_100651ac0(local_108);
  FUN_100645100(local_108,0xffffffffffffffff);
  if (local_f0 == 0) {
    *param_1 = PTR_shared_null_100ba20d0;
  }
  else {
    CBaseNode::toString(SUB81(param_1,0),SUB81(local_f0,0));
  }
  FUN_100651be0(local_108);
  return param_1;
}

