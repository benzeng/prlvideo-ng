
undefined8 FUN_10027b430(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  uint uVar8;
  int local_68 [2];
  undefined8 *local_60;
  undefined8 local_58 [5];
  long local_30;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar7 = 1;
  if ((*(byte *)(param_2 + 0x10) & 1) == 0) {
    puVar6 = local_58;
  }
  else {
    local_58[0] = *(undefined8 *)(param_2 + 8);
    local_58[1] = *(undefined8 *)(param_2 + 0x10);
    puVar6 = local_58 + 2;
    lVar7 = 2;
  }
  if ((*(byte *)(param_2 + 0x20) & 1) != 0) {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    puVar6[1] = *(undefined8 *)(param_2 + 0x20);
    *puVar6 = uVar3;
    puVar6 = local_58 + lVar7 * 2;
  }
  local_60 = local_58;
  local_68[0] = (int)((ulong)((long)puVar6 - (long)local_60) >> 4);
  local_30 = lVar2;
  if ((local_68[0] != 0) &&
     (plVar4 = *(long **)(*(long *)(param_1 + 8) + 0x170),
     iVar5 = (**(code **)(*plVar4 + 0xa0))(plVar4,local_68), iVar5 != 0)) {
    FUN_1008e3970("","LocalDevices",0,
                  "net_resume: failed to setup offloading-context descriptors: err 0x%x");
  }
  uVar1 = *(uint *)(param_2 + 4);
  lVar7 = *(long *)(param_1 + 0x18);
  uVar8 = (uint)*(ushort *)(lVar7 + 0x3810);
  if ((uVar1 & 1) != 0) {
    plVar4 = (long *)(*(long *)(param_1 + 0x178) + 0xf4);
    *plVar4 = *plVar4 + 1;
    *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(param_1 + 0x164);
    *(undefined2 *)(param_1 + 0x168) = 0;
    *(uint *)(param_1 + 0x170) = uVar8;
    *(undefined1 *)(param_1 + 0x16a) = 1;
  }
  *(uint *)(param_1 + 0x170) = uVar8;
  uVar8 = (uint)*(ushort *)(lVar7 + 0x3910);
  if ((uVar1 & 2) != 0) {
    plVar4 = (long *)(*(long *)(param_1 + 0x29c8) + 0xf4);
    *plVar4 = *plVar4 + 1;
    *(undefined4 *)(param_1 + 0x29b0) = *(undefined4 *)(param_1 + 0x29b4);
    *(undefined2 *)(param_1 + 0x29b8) = 0;
    *(uint *)(param_1 + 0x29c0) = uVar8;
    *(undefined1 *)(param_1 + 0x29ba) = 1;
  }
  *(uint *)(param_1 + 0x29c0) = uVar8;
  if ((int)DAT_1011c37a0 != 0) {
    FUN_1008e3970("","LocalDevices",0,"CNetE1000::ResumeState");
    FUN_1008e3970("","LocalDevices",0,"skip_condition = 0x%x",*(undefined4 *)(param_2 + 4));
    FUN_1008e3970("","LocalDevices",0,"descr[0]: %08x %08x %08x %08x",*(undefined4 *)(param_2 + 8),
                  *(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0x10),
                  *(undefined4 *)(param_2 + 0x14));
    FUN_1008e3970("","LocalDevices",0,"descr[1]: %08x %08x %08x %08x",
                  *(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c),
                  *(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x24));
  }
  if (lVar2 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return 0;
}

