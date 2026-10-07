
void FUN_1001ea19e(undefined8 param_1,undefined4 param_2,long *param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  long local_18;
  long local_10;
  
  local_10 = 0;
  local_18 = 0;
  if (param_3 == (long *)0x0) {
    FUN_1001e7432(&local_10,0,param_4,*(undefined8 *)(param_5 + 0x28));
  }
  else if (*param_3 == 0) {
    FUN_1001e7432(param_3,0,param_4,*(undefined8 *)(param_5 + 0x28));
    local_10 = *param_3;
  }
  else {
    local_10 = *param_3;
  }
  uVar1 = FUN_1001e6e3d(&local_18,*(undefined8 *)(param_5 + 0x48),*(undefined8 *)(param_5 + 0x10));
  FUN_1001e80a3(param_1,param_5,param_2,"%s: The attribute \'%s\' is not allowed.\n",local_10,uVar1)
  ;
  if ((param_3 == (long *)0x0) && (local_10 != 0)) {
    (*(code *)_xmlFree)(local_10);
    local_10 = 0;
  }
  if (local_18 != 0) {
    (*(code *)_xmlFree)(local_18);
  }
  return;
}

