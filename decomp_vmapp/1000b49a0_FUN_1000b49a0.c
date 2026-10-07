
undefined8 FUN_1000b49a0(long param_1)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 local_20;
  ulong local_18;
  
  (**(code **)(**(long **)(param_1 + 0x1950) + 0x130))
            (*(long **)(param_1 + 0x1950),&local_18,&local_20);
  lVar3 = FUN_100778400();
  FUN_1008e3970("","vm",0,"TSC=%llu Hz, Bus=%llu Hz, self-calibrated TSC=%llu Hz",local_18,local_20,
                lVar3);
  uVar2 = (long)(local_18 - lVar3) / 1000000;
  uVar5 = -uVar2;
  if (-1000000 < (long)(local_18 - lVar3)) {
    uVar5 = uVar2;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_18;
  uVar4 = SUB168(auVar1 * ZEXT816(0xd6bf94d5e57a42bd),0);
  if (local_18 / 10000000 < uVar5) {
    uVar4 = FUN_1008e3970("","vm",0,"Big difference between TSC and self-calibrated TSC detected!");
  }
  return uVar4;
}

