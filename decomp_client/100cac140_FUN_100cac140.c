
void FUN_100cac140(undefined8 *param_1,undefined8 param_2)

{
  if (param_1[1] != 0) {
    FUN_100c5c0c0(param_2,"[%s] %s=%s\n",*param_1,param_1[1],param_1[2]);
    return;
  }
  FUN_100c5c0c0(param_2,"[[%s]]\n",*param_1);
  return;
}

