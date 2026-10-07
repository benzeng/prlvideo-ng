
undefined8 FUN_1005ac8e0(long param_1,ulong param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_2;
  auVar2 = auVar2 / ZEXT416(*(uint *)(param_1 + 0x1c));
  uVar5 = auVar2._0_8_ >> 0xc;
  uVar4 = auVar2._0_4_ & 0xfff;
  if ((uint)uVar5 < *(uint *)(param_1 + 0x18)) {
    QMutex::lock();
    lVar1 = *(long *)(*(long *)(param_1 + 0x10) + (uVar5 & 0xffffffff) * 0x40);
    if (lVar1 != 0) {
      *(undefined1 *)(lVar1 + 0x10 + (ulong)uVar4 * 0x20) = 0xff;
    }
    QMutex::unlock();
    uVar3 = 0;
  }
  else {
    FUN_1008e3970("","vdisk",0,"Entry (offset = %llu, group = %u, block = %u) is out of groups %u",
                  param_2,uVar5 & 0xffffffff,uVar4,*(uint *)(param_1 + 0x18));
    uVar3 = 0x80021026;
  }
  return uVar3;
}

