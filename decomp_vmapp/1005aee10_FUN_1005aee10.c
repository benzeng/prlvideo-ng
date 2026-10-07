
undefined1 FUN_1005aee10(long param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 uVar2;
  int local_24;
  undefined8 local_20;
  
  *(undefined8 *)(param_1 + 0xb4) = param_2;
  local_24 = 0;
  local_20 = param_2;
  cVar1 = FUN_1007080a0(param_1 + 0x28,param_1 + 0xa4,0x1000,&local_24,0);
  if ((cVar1 == '\0') || (uVar2 = 1, local_24 != 0x1000)) {
    uVar2 = 0;
    FUN_1008e3970("","vdisk",0,"Unable to write \'%s\' header(written %u, expected %u), err = %u",
                  &local_20,local_24,0x1000,*(undefined4 *)(param_1 + 0x3c));
  }
  return uVar2;
}

