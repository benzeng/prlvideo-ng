
void FUN_100273900(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x48;
  lVar2 = FUN_1002584f0(lVar1);
  while (lVar2 != 0) {
    FUN_100273980(param_1,*(long *)(DAT_1011c3698 + 0x1938) + 0x3d828 +
                          (ulong)*(uint *)(param_1 + 0x150) * 0x10);
    FUN_100258470(lVar1,lVar2);
    lVar2 = FUN_1002584f0(lVar1);
  }
  return;
}

