
undefined8 * FUN_100a61530(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = _TISGetInputSourceProperty
                    (param_2,*(undefined8 *)PTR__kTISPropertyInputSourceID_1021e1bc8);
  if (lVar1 == 0) {
    if (0 < DAT_10230ffd0) {
      FUN_100df99c0("","LayoutSyncCommon",1,"Failed to get input source Id for %p",param_2);
    }
    *param_1 = PTR_shared_null_1021e1288;
  }
  else {
    FUN_100a613e0(param_1,lVar1);
  }
  return param_1;
}

