
undefined4 FUN_100c6d830(undefined4 param_1)

{
  long in_RAX;
  undefined4 *puVar1;
  undefined4 uVar2;
  long local_18;
  
  local_18 = in_RAX;
  puVar1 = (undefined4 *)FUN_100c84e30(&local_18,param_1);
  uVar2 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = *puVar1;
  }
  if (local_18 != 0) {
    FUN_100c557e0();
  }
  return uVar2;
}

