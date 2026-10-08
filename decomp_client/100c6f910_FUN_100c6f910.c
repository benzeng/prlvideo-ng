
ulong FUN_100c6f910(long *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  
  lVar2 = *param_1;
  if (*(code **)(lVar2 + 0x40) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100c6f93b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(lVar2 + 0x40))(param_1,param_2);
    return uVar4;
  }
  uVar4 = 0xffffffff;
  if (((((*(ulong *)(lVar2 + 0x10) & 0x1000) != 0) &&
       (uVar5 = *(ulong *)(lVar2 + 0x10) & 0xf0007, 1 < uVar5 - 6)) && (uVar5 != 0x10001)) &&
     (uVar4 = 0, param_2 != 0)) {
    uVar1 = *(uint *)(lVar2 + 0xc);
    uVar5 = (ulong)uVar1;
    if (0x10 < uVar5) {
      FUN_100bf2cd0("evp_lib.c",0x76,"l <= sizeof(c->iv)");
    }
    uVar3 = FUN_100c8c0a0(param_2,param_1 + 3,uVar5);
    uVar4 = 0xffffffff;
    if (uVar3 == uVar1) {
      if (0 < (int)uVar1) {
        _memcpy(param_1 + 5,param_1 + 3,uVar5);
      }
      uVar4 = (ulong)uVar1;
    }
  }
  return uVar4;
}

