
undefined8 FUN_10050e7c0(undefined8 param_1,long param_2)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  undefined8 local_18;
  
  local_18 = in_RAX;
  uVar1 = FUN_10050e7f0(param_1,&local_18);
  if ((int)uVar1 == 0) {
    _CFArrayAppendValue(local_18,*(undefined8 *)(param_2 + 8));
    uVar1 = 0;
  }
  return uVar1;
}

