
undefined8 FUN_1002df330(undefined4 *param_1)

{
  if (DAT_1011c568c < 3) {
    if (param_1 == (undefined4 *)0x0) {
      return 1;
    }
  }
  else {
    FUN_1008e3970("","USB",0,"IoDataCallback() ep = %02x  sts = %d  sz = %d/%d",*param_1,param_1[1],
                  param_1[3],param_1[2]);
  }
  operator_delete__(param_1);
  return 1;
}

