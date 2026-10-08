
void FUN_10090b6dd(undefined8 *param_1,undefined8 param_2)

{
  undefined8 local_18;
  int local_c;
  
  local_18 = 0;
  local_c = 0;
  if (param_1 != (undefined8 *)0x0) {
    local_18 = *param_1;
    local_c = (int)param_1[1] - (int)*param_1;
    *(undefined4 *)(param_1 + 2) = 0x5aa;
  }
  ___xmlRaiseError(0,0,0,0,0,0xe,0x5aa,3,0,0,param_2,local_18,0,local_c,0,"failed to compile: %s\n",
                   param_2);
  return;
}

