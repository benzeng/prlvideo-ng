
void FUN_1001d7cf4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  if (param_1 != (undefined8 *)0x0) {
    local_10 = *param_1;
    *(undefined4 *)(param_1 + 2) = 2;
  }
  ___xmlRaiseError(0,0,0,0,0,0xe,2,3,0,0,param_2,local_10,0,0,0,"Memory allocation failed : %s\n",
                   param_2);
  return;
}

