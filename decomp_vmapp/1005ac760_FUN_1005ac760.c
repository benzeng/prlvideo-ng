
undefined8 FUN_1005ac760(long param_1,ulong param_2,undefined8 *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar6;
  long lVar7;
  
  uVar6 = (undefined4)((ulong)in_stack_ffffffffffffffb8 >> 0x20);
  uVar2 = param_2 / *(uint *)(param_1 + 0x1c);
  uVar4 = uVar2 >> 0xc;
  if ((uint)uVar4 < *(uint *)(param_1 + 0x18)) {
    lVar7 = param_1 + 8;
    QMutex::lock();
    lVar1 = *(long *)(*(long *)(param_1 + 0x10) + (uVar4 & 0xffffffff) * 0x40);
    if (lVar1 != 0) {
      lVar5 = (uVar2 & 0xfff) * 0x20;
      if (*(int *)(lVar1 + 0xc + lVar5) == -2) {
        FUN_1008e3970("","vdisk",0,
                      "Error: set offset \'%llu\' for unaligned block, stor_id %u, snap_id %u",
                      param_2,*(undefined4 *)(param_3 + 1),
                      CONCAT44(uVar6,*(undefined4 *)((long)param_3 + 0xc)));
        FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","0","BlockGroup.cpp",0x23e,
                      "SetElement",lVar7);
      }
      else {
        *(undefined8 *)(lVar1 + 0x18 + lVar5) = param_3[3];
        *(undefined8 *)(lVar1 + 0x10 + lVar5) = param_3[2];
        uVar3 = *param_3;
        *(undefined8 *)(lVar1 + 8 + lVar5) = param_3[1];
        *(undefined8 *)(lVar1 + lVar5) = uVar3;
      }
    }
    QMutex::unlock();
    uVar3 = 0;
  }
  else {
    FUN_1008e3970("","vdisk",0,"Try to get element %u out of all groups %u (Off %llu) SE",
                  uVar4 & 0xffffffff,*(uint *)(param_1 + 0x18),param_2);
    uVar3 = 0x80021026;
  }
  return uVar3;
}

