
undefined4
FUN_10092370e(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,int *param_6,undefined8 *param_7)

{
  long lVar1;
  undefined4 local_4c;
  
  if ((param_1 == 0) || (param_6 == (int *)0x0)) {
    if (param_7 != (undefined8 *)0x0) {
      *param_7 = 0;
    }
    local_4c = 0xffffffff;
  }
  else if (*param_6 == 1) {
    lVar1 = FUN_100920729(param_4,param_5);
    if (lVar1 == 0) {
      if (param_7 != (undefined8 *)0x0) {
        *param_7 = 0;
      }
      local_4c = 0;
    }
    else {
      local_4c = FUN_100923679(param_1,param_2,param_3,lVar1,param_6,param_7);
    }
  }
  else {
    if (param_7 != (undefined8 *)0x0) {
      *param_7 = 0;
    }
    FUN_10091b9cb(param_1,param_4,0xbfd,
                  "Internal error: xmlSchemaPValAttr, the given type \'%s\' is not a built-in type.\n"
                  ,*(undefined8 *)(param_6 + 4),0);
    local_4c = 0xffffffff;
  }
  return local_4c;
}

