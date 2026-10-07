
void FUN_1001ea707(undefined8 param_1,undefined4 param_2,long param_3,long param_4,
                  undefined4 *param_5)

{
  undefined8 uVar1;
  long local_18;
  long local_10;
  
  local_18 = 0;
  local_10 = 0;
  FUN_1001ea2b7(&local_18,param_3,param_4,*(undefined8 *)(param_4 + 0x48));
  uVar1 = FUN_100208cf9(*param_5);
  FUN_1001e80a3(param_1,*(undefined8 *)(param_4 + 0x48),param_2,
                "%s: The facet \'%s\' is not allowed.\n",local_18,uVar1);
  if ((param_3 == 0) && (local_18 != 0)) {
    (*(code *)_xmlFree)(local_18);
    local_18 = 0;
  }
  if (local_10 != 0) {
    (*(code *)_xmlFree)(local_10);
  }
  return;
}

