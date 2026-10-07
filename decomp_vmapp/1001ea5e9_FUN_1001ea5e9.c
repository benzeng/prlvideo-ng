
void FUN_1001ea5e9(undefined8 param_1,undefined4 param_2,long param_3,long param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long local_28;
  long local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  FUN_1001ea2b7(local_20,param_3,param_4,*(undefined8 *)(param_4 + 0x48));
  uVar1 = FUN_1001e7432(&local_28,0,param_5,0);
  uVar2 = FUN_100208cf9(*param_6);
  FUN_1001e8224(param_1,*(undefined8 *)(param_4 + 0x48),param_2,0,0,0,
                "%s: The facet \'%s\' is not allowed on types derived from the type %s.\n",
                local_20[0],uVar2,uVar1,0,0);
  if ((param_3 == 0) && (local_20[0] != 0)) {
    (*(code *)_xmlFree)(local_20[0]);
    local_20[0] = 0;
  }
  if (local_28 != 0) {
    (*(code *)_xmlFree)(local_28);
  }
  return;
}

