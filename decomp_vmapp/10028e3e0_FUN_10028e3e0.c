
void FUN_10028e3e0(long *param_1)

{
  long *plVar1;
  uint *puVar2;
  uint uVar3;
  ushort uVar4;
  long *plVar5;
  long *plVar6;
  byte bVar7;
  undefined2 uVar8;
  uint uVar9;
  long lVar10;
  undefined8 uVar11;
  bool bVar12;
  uint local_3c;
  uint local_38;
  
  bVar7 = 1;
  if ((int)param_1[0x202] == 0) {
    bVar7 = *(byte *)((ulong)*(ushort *)((long)param_1 + 0xfee) * 0x40 + param_1[0x200] + 0x4610 +
                     (ulong)*(ushort *)(param_1 + 0x1fe) * 2) & 1;
  }
  plVar1 = param_1 + 0x20b;
  plVar6 = (long *)param_1[0x20b];
  bVar12 = false;
  if (plVar6 == plVar1) {
    local_3c = 0;
  }
  else {
    local_38 = 0;
    local_3c = 0;
    do {
      while( true ) {
        lVar10 = *plVar6;
        plVar5 = (long *)plVar6[1];
        *(long **)(lVar10 + 8) = plVar5;
        *plVar5 = lVar10;
        *plVar6 = (long)plVar6;
        plVar6[1] = (long)plVar6;
        if (*(char *)((long)plVar6 + -0x1a) != '\0') break;
        FUN_1008e3970("","LocalDevices",0,"ASSERT( %s ) occured in %s:%d [%s]","false",
                      "../Ahci/sata_dev.cpp",0x13e,"send_sdb_d2h_fis");
LAB_10028e4ed:
        plVar6 = (long *)*plVar1;
        if (plVar6 == plVar1) {
          if (local_38 == 0) {
            bVar12 = false;
            goto LAB_10028e52b;
          }
          goto LAB_10028e506;
        }
      }
      uVar9 = 1 << (*(byte *)((long)plVar6 + -0x1b) & 0x1f);
      if ((*(byte *)((long)plVar6 + -0x14) & 0xc) == 0) {
        local_3c = local_3c | uVar9;
        goto LAB_10028e4ed;
      }
      local_38 = local_38 | uVar9;
      plVar6 = (long *)*plVar1;
    } while (plVar6 != plVar1);
LAB_10028e506:
    (**(code **)(*param_1 + 0xf0))(param_1);
    *(uint *)(param_1 + 0x202) = *(uint *)(param_1 + 0x202) | local_38;
    bVar12 = true;
  }
LAB_10028e52b:
  if (bVar7 == 0) {
    uVar11 = 8;
    if (bVar12) {
      uVar11 = 0x40000008;
    }
    uVar8 = 0x50;
    if (bVar12) {
      uVar8 = 0x4041;
    }
    lVar10 = param_1[0x200];
    *(undefined2 *)
     ((ulong)*(ushort *)((long)param_1 + 0xfee) * 0x40 + lVar10 + 0x4610 +
     (ulong)*(ushort *)(param_1 + 0x1fe) * 2) = uVar8;
    uVar4 = *(ushort *)(param_1 + 0x1fe);
    lVar10 = (ulong)*(ushort *)((long)param_1 + 0xfee) * 0x80 + lVar10;
    uVar9 = *(uint *)(lVar10 + 0x4410 + (ulong)uVar4 * 4);
    do {
      puVar2 = (uint *)(lVar10 + 0x4410 + (ulong)uVar4 * 4);
      LOCK();
      uVar3 = *puVar2;
      bVar12 = uVar9 == uVar3;
      if (bVar12) {
        *puVar2 = local_3c | uVar9;
        uVar3 = uVar9;
      }
      uVar9 = uVar3;
      UNLOCK();
    } while (!bVar12);
    FUN_10028e310(param_1,uVar11);
    return;
  }
  return;
}

