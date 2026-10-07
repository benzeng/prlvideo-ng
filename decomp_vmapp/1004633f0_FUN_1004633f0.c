
void FUN_1004633f0(long param_1)

{
  int *piVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  ushort uVar10;
  ushort uVar11;
  int iVar12;
  ulong uVar13;
  bool bVar14;
  bool bVar15;
  undefined1 local_bc [4];
  uint local_b8 [34];
  
  iVar12 = (int)param_1 + 0x20;
  QSemaphore::acquire(iVar12);
  *(undefined8 *)(param_1 + 0x14) = 0;
  if (*(long *)(param_1 + 0x30) == *(long *)(param_1 + 0x28)) {
    return;
  }
  piVar1 = (int *)(param_1 + 0x40);
  iVar4 = _notify_register_file_descriptor
                    ("com.apple.system.powersources.timeremaining",piVar1,0,param_1 + 0x44);
  if (iVar4 == 0) {
    FUN_1008e3970("","BattWatcher",0,"BattWatcher: using notifications");
    local_b8[0x1c] = 0;
    local_b8[0x1d] = 0;
    local_b8[0x1e] = 0;
    local_b8[0x1f] = 0;
    local_b8[0x18] = 0;
    local_b8[0x19] = 0;
    local_b8[0x1a] = 0;
    local_b8[0x1b] = 0;
    local_b8[0x14] = 0;
    local_b8[0x15] = 0;
    local_b8[0x16] = 0;
    local_b8[0x17] = 0;
    local_b8[0x10] = 0;
    local_b8[0x11] = 0;
    local_b8[0x12] = 0;
    local_b8[0x13] = 0;
    local_b8[0xc] = 0;
    local_b8[0xd] = 0;
    local_b8[0xe] = 0;
    local_b8[0xf] = 0;
    local_b8[8] = 0;
    local_b8[9] = 0;
    local_b8[10] = 0;
    local_b8[0xb] = 0;
    local_b8[4] = 0;
    local_b8[5] = 0;
    local_b8[6] = 0;
    local_b8[7] = 0;
    local_b8[0] = 0;
    local_b8[1] = 0;
    local_b8[2] = 0;
    local_b8[3] = 0;
    local_b8[(ulong)(long)*piVar1 >> 5] =
         local_b8[(ulong)(long)*piVar1 >> 5] | 1 << ((byte)*piVar1 & 0x1f);
  }
  else {
    FUN_1008e3970("","BattWatcher",0);
  }
LAB_1004634e4:
  uVar7 = 0;
  bVar14 = false;
  do {
    while( true ) {
      lVar5 = *(long *)(param_1 + 0x28);
      lVar8 = *(long *)(param_1 + 0x30);
      if ((ulong)(lVar8 - lVar5 >> 3) <= (ulong)uVar7) break;
      iVar4 = (**(code **)(**(long **)(lVar5 + (ulong)uVar7 * 8) + 8))();
      bVar14 = (bool)(iVar4 != 0 | bVar14);
      uVar7 = uVar7 + 1;
    }
    iVar4 = *(int *)(param_1 + 0x14);
    if (iVar4 == 0) {
      *(uint *)(param_1 + 0x14) = 2 - (uint)!bVar14;
LAB_100463568:
      FUN_100465710(param_1);
      lVar5 = *(long *)(param_1 + 0x28);
      lVar8 = *(long *)(param_1 + 0x30);
    }
    else {
      bVar15 = bVar14;
      if (iVar4 == 1) {
LAB_10046353f:
        *(uint *)(param_1 + 0x14) = 2 - (uint)!bVar14;
        if (bVar15) goto LAB_100463568;
      }
      else {
        if (iVar4 == 2) {
          bVar15 = (bool)(bVar14 ^ 1);
          goto LAB_10046353f;
        }
        *(uint *)(param_1 + 0x14) = 2 - (uint)!bVar14;
      }
    }
    uVar13 = 1;
    uVar9 = 0;
    uVar11 = 0;
    uVar10 = 0;
    if (lVar8 != lVar5) {
      do {
        uVar3 = (**(code **)(**(long **)(lVar5 + uVar9 * 8) + 0x48))();
        uVar10 = uVar11;
        if (uVar11 < uVar3) {
          uVar10 = uVar3;
        }
        lVar5 = *(long *)(param_1 + 0x28);
        bVar14 = uVar13 < (ulong)(*(long *)(param_1 + 0x30) - lVar5 >> 3);
        uVar9 = uVar13;
        uVar13 = (ulong)((int)uVar13 + 1);
        uVar11 = uVar10;
      } while (bVar14);
    }
    if (*(uint *)(param_1 + 0x18) != (uint)uVar10) {
      FUN_100465780(param_1,(uint)uVar10);
      *(uint *)(param_1 + 0x18) = (uint)uVar10;
    }
    FUN_100465760(param_1);
    if (*(int *)(param_1 + 0x44) == -1) {
      cVar2 = QSemaphore::tryAcquire(iVar12,1);
      bVar15 = cVar2 == '\0';
    }
    else {
      iVar4 = _select_1050(*piVar1 + 1,local_b8,0,0,0);
      if (-1 < iVar4) break;
      piVar6 = ___error();
      bVar15 = *piVar6 == 4;
    }
    uVar7 = 0;
    bVar14 = false;
    if (!bVar15) {
      *(undefined8 *)(param_1 + 0x14) = 0;
      return;
    }
  } while( true );
  _read(*piVar1,local_bc,4);
  goto LAB_1004634e4;
}

