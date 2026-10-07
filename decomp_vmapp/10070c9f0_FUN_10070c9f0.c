
void FUN_10070c9f0(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  long *plVar12;
  long *local_48;
  long *plStack_40;
  
  lVar4 = *(long *)(param_1 + 0x10);
  uVar1 = *(uint *)(lVar4 + 0x274);
  local_48 = *(long **)(lVar4 + 0x90);
  if (local_48 == (long *)0x0) {
    return;
  }
  lVar5 = local_48[4];
  *(long *)(lVar4 + 0x90) = lVar5;
  if (lVar5 == 0) {
    *(undefined8 *)(lVar4 + 0x98) = 0;
  }
  local_48[4] = 0;
  lVar4 = *local_48;
  uVar2 = *(uint *)(local_48 + 1);
  iVar3 = (int)local_48[7];
  lVar5 = local_48[3];
  uVar11 = *(uint *)((long)local_48 + 0x54);
  uVar10 = (ulong)*(uint *)(local_48 + 10);
  local_48[7] = 0;
  lVar9 = *(long *)(param_1 + 0x10);
  plVar6 = *(long **)(lVar9 + 0x90);
  plStack_40 = local_48;
  if ((plVar6 != (long *)0x0) && (plStack_40 = local_48, (int)plVar6[7] == iVar3)) {
    lVar8 = uVar10 / *(ulong *)(lVar9 + 0x278) + lVar4;
    plStack_40 = local_48;
    do {
      plVar12 = plVar6;
      if ((((lVar8 != *plVar12) || (lVar5 != plVar12[3])) ||
          (((*(uint *)(plVar12 + 1) ^ uVar2) & 0x2001) != 0)) ||
         ((uVar11 = uVar11 + *(int *)((long)plVar12 + 0x54), 0x400 < uVar11 ||
          ((uVar1 != 0 && (uVar1 < (uint)((int)plVar12[10] + (int)uVar10))))))) break;
      plVar12[7] = 0;
      lVar7 = plVar12[4];
      lVar9 = *(long *)(param_1 + 0x10);
      *(long *)(lVar9 + 0x90) = lVar7;
      if (lVar7 == 0) {
        *(undefined8 *)(lVar9 + 0x98) = 0;
      }
      plVar12[4] = 0;
      plVar6 = plVar12;
      if (plStack_40 != (long *)0x0) {
        plStack_40[4] = (long)plVar12;
        plVar6 = local_48;
      }
      local_48 = plVar6;
      plVar6 = *(long **)(lVar9 + 0x90);
      plStack_40 = plVar12;
      if (plVar6 == (long *)0x0) break;
      uVar10 = (ulong)((int)uVar10 + *(uint *)(plVar12 + 10));
      lVar8 = lVar8 + (ulong)*(uint *)(plVar12 + 10) / *(ulong *)(lVar9 + 0x278);
    } while ((int)plVar6[7] == iVar3);
  }
  _pthread_mutex_unlock((pthread_mutex_t *)(lVar9 + 0x20));
  FUN_10070c640(param_1,&local_48,lVar4,uVar2,iVar3);
  _pthread_mutex_lock((pthread_mutex_t *)(*(long *)(param_1 + 0x10) + 0x20));
  return;
}

