
void FUN_100ac63b0(long param_1)

{
  undefined8 in_RAX;
  undefined8 local_18;
  
  local_18 = in_RAX;
  _GetFrontProcess(&local_18);
  if ((((*(int *)(param_1 + 0xab0) != 0) || (*(int *)(param_1 + 0xaac) != 0)) &&
      (*(int *)(param_1 + 0xab0) == local_18._4_4_)) && (*(int *)(param_1 + 0xaac) == (int)local_18)
     ) {
    FUN_100ac91b0(*(undefined8 *)(param_1 + 0xa30),*(undefined8 *)(param_1 + 0xaac));
  }
  return;
}

