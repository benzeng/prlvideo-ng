
undefined8 FUN_100c6f7e0(long *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  lVar2 = *param_1;
  if (*(code **)(lVar2 + 0x38) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100c6f80c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(lVar2 + 0x38))(param_1,param_2);
    return uVar3;
  }
  uVar3 = 0xffffffff;
  if (((((*(ulong *)(lVar2 + 0x10) & 0x1000) != 0) &&
       (uVar4 = *(ulong *)(lVar2 + 0x10) & 0xf0007, 1 < uVar4 - 6)) && (uVar4 != 0x10001)) &&
     (uVar3 = 0, param_2 != 0)) {
    uVar1 = *(uint *)(lVar2 + 0xc);
    if (0x10 < uVar1) {
      FUN_100bf2cd0("evp_lib.c",0x87,"j <= sizeof(c->iv)");
    }
    uVar3 = FUN_100c8c030(param_2,param_1 + 3,uVar1);
    return uVar3;
  }
  return uVar3;
}

