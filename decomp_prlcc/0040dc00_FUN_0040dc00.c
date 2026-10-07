
undefined4 FUN_0040dc00(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_28 [16];
  
  uVar2 = 0xffffffff;
  if (param_1 != 0) {
    uVar2 = 0xfffffffb;
    iVar1 = FUN_0040e780(auStack_28);
    if (iVar1 == 0) {
      uVar2 = FUN_0040deb0(auStack_28,param_1,2);
      FUN_0040e6c0(auStack_28);
    }
  }
  return uVar2;
}

