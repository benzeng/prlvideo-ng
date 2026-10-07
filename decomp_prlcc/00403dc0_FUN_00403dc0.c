
undefined8 FUN_00403dc0(long param_1)

{
  ssize_t sVar1;
  undefined4 local_c;
  
  local_c = 1;
  sVar1 = write(*(int *)(param_1 + 4),&local_c,4);
  if (-1 < sVar1) {
    return 1;
  }
  FUN_0040fffa(&DAT_0041913e,"prlcc",0,"Error: Control Center: Write to pipe %d service %s",
               *(undefined4 *)(param_1 + 4),**(undefined8 **)(param_1 + 8));
  return 0;
}

