
void FUN_10056e550(long *param_1,uint param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  long local_58;
  ulong local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  uVar11 = (ulong)param_2;
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  if ((param_1[0x242] == 0) || (param_1[0x243] == 0)) {
    FUN_1008e3970("","vdisk",0,"Error: disk was not opened correctly!");
    return;
  }
  plVar8 = param_1 + 0x233;
  if (((ulong)plVar8 & 1) == 0) {
    QReadWriteLock::lockForRead();
    plVar8 = (long *)((ulong)plVar8 | 1);
  }
  uVar10 = *(uint *)(param_1 + 0x22b);
  uVar1 = *(uint *)(param_1 + 0x224);
  lVar4 = (**(code **)(*param_1 + 0x2e0))();
  uVar7 = (ulong)uVar10 + param_3;
  uVar5 = (**(code **)(*param_1 + 0x2e0))(param_1);
  uVar9 = param_1[0x22a];
  if (uVar9 < uVar11 / uVar5 + uVar7) {
    if (uVar9 < uVar7) goto LAB_10056e7c8;
    iVar3 = (**(code **)(*param_1 + 0x2e0))(param_1);
    uVar11 = (ulong)(uint)(iVar3 * ((int)uVar9 - (int)uVar7));
  }
  if ((int)uVar11 != 0) {
    uVar9 = (uVar7 % (ulong)uVar1) * lVar4;
    do {
      lVar4 = param_1[0x224];
      iVar3 = (**(code **)(*param_1 + 0x2e0))(param_1);
      uVar10 = iVar3 * (int)lVar4 - (int)uVar9;
      uVar5 = (ulong)uVar10;
      if ((uint)uVar11 < uVar10) {
        uVar5 = uVar11;
      }
      local_50 = 0xffffffffffffffff;
      local_58 = -1;
      local_40 = 0;
      local_48 = 0;
      iVar3 = (**(code **)(*param_1 + 0x358))(param_1,0xffffffff,uVar7,&local_58);
      lVar4 = local_58;
      if (iVar3 < 0) {
        FUN_1008e3970("","vdisk",0,"Prefetch: failed to get group element ptr.");
        break;
      }
      if (local_50 >> 0x20 != 0xffffffff) {
        uVar2 = *(undefined8 *)(param_1[0x225] + (local_50 >> 0x20) * 8);
        uVar6 = (**(code **)(*param_1 + 0x2e0))(param_1);
        FUN_1005924e0(uVar2,uVar5,lVar4 + (uVar9 & 0xffffffff) / uVar6,local_50 & 0xffffffff);
      }
      lVar4 = (**(code **)(*param_1 + 0x2e0))(param_1);
      uVar9 = (**(code **)(*param_1 + 0x2e0))(param_1);
      uVar7 = uVar7 + ((uVar5 - 1) + lVar4) / uVar9;
      uVar10 = (uint)uVar11 - (int)uVar5;
      uVar11 = (ulong)uVar10;
      uVar9 = 0;
    } while (uVar10 != 0);
  }
LAB_10056e7c8:
  if (((ulong)plVar8 & 1) != 0) {
    QReadWriteLock::unlock();
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

