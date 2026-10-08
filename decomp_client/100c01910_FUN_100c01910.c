
void FUN_100c01910(undefined8 *param_1,long param_2,undefined4 param_3,long param_4)

{
  if ((param_2 != 0) && (param_4 != 0)) {
    FUN_100c65850(param_1 + 7);
    FUN_100c65850(param_1 + 0xd);
    FUN_100c65850(param_1 + 1);
    *param_1 = 0;
  }
  FUN_100c015e0(param_1,param_2,param_3,param_4,0);
  return;
}

