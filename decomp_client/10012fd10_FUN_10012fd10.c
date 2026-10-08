
undefined8 * FUN_10012fd10(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  if (param_2 == 0) {
LAB_10012fd5b:
    *param_1 = PTR_shared_null_1021e1288;
  }
  else {
    lVar1 = FUN_100b41700(param_2);
    if (lVar1 == 0) {
      lVar1 = FUN_100b41520(param_2);
      if (lVar1 == 0) {
        lVar1 = FUN_100b41470(param_2,0xffffffff);
        if (lVar1 == 0) goto LAB_10012fd5b;
      }
    }
    CVirtualNetwork::getNetworkID();
  }
  return param_1;
}

