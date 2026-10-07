
undefined1 FUN_1005aeeb0(long param_1)

{
  char cVar1;
  undefined1 uVar2;
  int local_1c;
  
  local_1c = 0;
  cVar1 = FUN_100707fb0(param_1 + 0x28,param_1 + 0xa4,0x1000,&local_1c,0);
  if ((cVar1 == '\0') || (uVar2 = 1, local_1c != 0x1000)) {
    uVar2 = 0;
    FUN_1008e3970("","vdisk",0,"Unable to read header (readed %u, expected %u), err = %u",local_1c,
                  0x1000,*(undefined4 *)(param_1 + 0x3c));
  }
  return uVar2;
}

