
uint FUN_100c6f9d0(long *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar3 = 0;
  if (param_2 != 0) {
    uVar1 = *(uint *)(*param_1 + 0xc);
    uVar4 = (ulong)uVar1;
    if (0x10 < uVar4) {
      FUN_100bf2cd0("evp_lib.c",0x76,"l <= sizeof(c->iv)");
    }
    uVar2 = FUN_100c8c0a0(param_2,param_1 + 3,uVar4);
    uVar3 = 0xffffffff;
    if ((uVar2 == uVar1) && (uVar3 = uVar1, 0 < (int)uVar1)) {
      _memcpy(param_1 + 5,param_1 + 3,uVar4);
    }
  }
  return uVar3;
}

