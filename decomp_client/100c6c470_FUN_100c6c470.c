
undefined8 FUN_100c6c470(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 in_RAX;
  undefined8 uVar2;
  int local_24;
  
  local_24 = (int)((ulong)in_RAX >> 0x20);
  uVar2 = 0;
  if (param_2 != 0) {
    FUN_100c665a0(param_1,2,0,&local_24);
    uVar2 = 0x3a;
    if (local_24 == 0x28) {
      uVar2 = 0xa0;
    }
    else if (local_24 != 0x80) {
      if (local_24 == 0x40) {
        uVar2 = 0x78;
      }
      else {
        uVar2 = 0;
      }
    }
    uVar1 = FUN_100c6fa50(param_1);
    uVar2 = FUN_100c8c100(param_2,uVar2,param_1 + 0x18,uVar1);
  }
  return uVar2;
}

