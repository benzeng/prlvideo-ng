
void FUN_10091df11(undefined8 param_1,undefined4 param_2,long param_3,long param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long local_28;
  long local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  FUN_10091dbdf(local_20,param_3,param_4,*(undefined8 *)(param_4 + 0x48));
  uVar1 = FUN_10091ad5a(&local_28,0,param_5,0);
  uVar2 = FUN_10093c621(*param_6);
  FUN_10091bb4c(param_1,*(undefined8 *)(param_4 + 0x48),param_2,0,0,0,
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

