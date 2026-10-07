
ssize_t FUN_0040bac0(undefined8 param_1)

{
  ssize_t sVar1;
  undefined8 local_8;
  
  sVar1 = 0;
  if (0 < DAT_0061d8f8) {
    local_8 = param_1;
    sVar1 = write(DAT_0061d8f8,&local_8,8);
  }
  return sVar1;
}

