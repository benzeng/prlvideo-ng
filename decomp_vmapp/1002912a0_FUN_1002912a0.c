
void FUN_1002912a0(long *param_1)

{
  long *plVar1;
  uint *puVar2;
  ushort uVar3;
  long *plVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  byte bVar9;
  long *plVar10;
  uint uVar11;
  bool bVar12;
  
  if (*(int *)((ulong)*(ushort *)((long)param_1 + 0xfee) * 0x80 + param_1[0x200] + 0x4310 +
              (ulong)*(ushort *)(param_1 + 0x1fe) * 4) != 0) {
    (**(code **)(*param_1 + 0x100))(param_1);
    plVar1 = param_1 + 0x209;
    plVar10 = (long *)param_1[0x209];
    if ((plVar10 != plVar1) || ((long *)param_1[0x20b] != param_1 + 0x20b)) {
      uVar5 = 0;
      if (plVar10 == plVar1) {
        uVar7 = 0;
        uVar5 = 0;
      }
      else {
        uVar7 = 0;
        do {
          uVar11 = 1 << (*(byte *)((long)plVar10 + -0x1b) & 0x1f);
          bVar9 = *(byte *)((long)plVar10 + -0x14) & 0xc;
          uVar6 = uVar11;
          if (bVar9 == 0) {
            uVar6 = 0;
          }
          uVar7 = uVar7 | uVar6;
          if (bVar9 != 0) {
            uVar11 = 0;
          }
          uVar5 = uVar5 | uVar11;
          plVar10 = (long *)*plVar10;
        } while (plVar10 != plVar1);
      }
      plVar10 = param_1 + 0x20b;
      for (plVar4 = (long *)param_1[0x20b]; plVar4 != plVar10; plVar4 = (long *)*plVar4) {
        uVar11 = 1 << (*(byte *)((long)plVar4 + -0x1b) & 0x1f);
        bVar9 = *(byte *)((long)plVar4 + -0x14) & 0xc;
        uVar6 = uVar11;
        if (bVar9 == 0) {
          uVar6 = 0;
        }
        uVar7 = uVar7 | uVar6;
        if (bVar9 != 0) {
          uVar11 = 0;
        }
        uVar5 = uVar5 | uVar11;
      }
      *(uint *)((long)param_1 + 0x1014) = *(uint *)((long)param_1 + 0x1014) & ~(uVar5 | uVar7);
      uVar3 = *(ushort *)(param_1 + 0x1fe);
      lVar8 = (ulong)*(ushort *)((long)param_1 + 0xfee) * 0x80 + param_1[0x200];
      uVar6 = *(uint *)(lVar8 + 0x4310 + (ulong)uVar3 * 4);
      do {
        puVar2 = (uint *)(lVar8 + 0x4310 + (ulong)uVar3 * 4);
        LOCK();
        uVar11 = *puVar2;
        bVar12 = uVar6 == uVar11;
        if (bVar12) {
          *puVar2 = ~(uVar5 | uVar7) & uVar6;
          uVar11 = uVar6;
        }
        uVar6 = uVar11;
        UNLOCK();
      } while (!bVar12);
      if ((((long *)param_1[0x209] != plVar1) &&
          (FUN_10028e0c0(param_1), (long *)param_1[0x209] != plVar1)) ||
         ((long *)*plVar10 != plVar10)) {
        FUN_10028e3e0(param_1);
        return;
      }
    }
  }
  return;
}

