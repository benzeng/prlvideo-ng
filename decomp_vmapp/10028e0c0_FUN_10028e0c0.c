
void FUN_10028e0c0(long param_1)

{
  uint *puVar1;
  uint uVar2;
  ushort uVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  plVar8 = *(long **)(param_1 + 0x1048);
  lVar4 = *(long *)(*(long *)(param_1 + 0xff8) + 8);
  if ((plVar8 != (long *)(param_1 + 0x1048)) || (*(long *)(param_1 + 0x1058) != param_1 + 0x1058)) {
    if (*(long *)(param_1 + 0x1038) != lVar4) {
      FUN_10008d2d0((long *)(param_1 + 0x1030),lVar4,0x60);
      plVar8 = *(long **)(param_1 + 0x1048);
    }
    uVar10 = 1 << (*(byte *)((long)plVar8 + -0x1b) & 0x1f);
    if (*(char *)((long)plVar8 + -0x1a) == '\0') {
      lVar4 = *(long *)(param_1 + 0x1030);
      lVar7 = *plVar8;
      plVar5 = (long *)plVar8[1];
      *(long **)(lVar7 + 8) = plVar5;
      *plVar5 = lVar7;
      *plVar8 = (long)plVar8;
      plVar8[1] = (long)plVar8;
      *(undefined2 *)(lVar4 + 0x40) = 0x34;
      *(undefined1 *)(lVar4 + 0x4b) = 0;
      *(undefined2 *)(lVar4 + 0x52) = 0;
      *(undefined4 *)(lVar4 + 0x4e) = 0;
      *(char *)(lVar4 + 0x42) = (char)plVar8[2];
      *(undefined1 *)(lVar4 + 0x43) = *(undefined1 *)((long)plVar8 + 0x11);
      *(undefined1 *)(lVar4 + 0x44) = *(undefined1 *)((long)plVar8 + 0x15);
      *(undefined1 *)(lVar4 + 0x45) = *(undefined1 *)((long)plVar8 + 0x16);
      *(undefined1 *)(lVar4 + 0x46) = *(undefined1 *)((long)plVar8 + 0x17);
      *(undefined1 *)(lVar4 + 0x47) = *(undefined1 *)((long)plVar8 + 0x13);
      *(undefined1 *)(lVar4 + 0x48) = *(undefined1 *)((long)plVar8 + 0x1a);
      *(undefined1 *)(lVar4 + 0x49) = *(undefined1 *)((long)plVar8 + 0x1b);
      *(undefined1 *)(lVar4 + 0x4a) = *(undefined1 *)((long)plVar8 + 0x1c);
      *(undefined1 *)(lVar4 + 0x4c) = *(undefined1 *)((long)plVar8 + 0x14);
      *(undefined1 *)(lVar4 + 0x4d) = *(undefined1 *)((long)plVar8 + 0x19);
      if ((*(byte *)((long)plVar8 + 0x12) & 2) == 0) {
        *(undefined1 *)(lVar4 + 0x41) = 0x40;
      }
      uVar3 = *(ushort *)(param_1 + 0xff0);
      lVar7 = (ulong)*(ushort *)(param_1 + 0xfee) * 0x80 + *(long *)(param_1 + 0x1000);
      uVar9 = *(uint *)(lVar7 + 0x4510 + (ulong)uVar3 * 4);
      do {
        puVar1 = (uint *)(lVar7 + 0x4510 + (ulong)uVar3 * 4);
        LOCK();
        uVar2 = *puVar1;
        bVar11 = uVar9 == uVar2;
        if (bVar11) {
          *puVar1 = uVar10 | uVar9;
          uVar2 = uVar9;
        }
        uVar9 = uVar2;
        UNLOCK();
      } while (!bVar11);
      if ((*(byte *)((long)plVar8 + 0x12) & 2) == 0) {
        uVar9 = (uint)(*(byte *)(plVar8 + 2) & 1) << 0x1e | 1;
      }
      else {
        iVar6 = FUN_1008e38f0(&DAT_101115f20);
        if (iVar6 != 0) {
          FUN_1008e3970("","LocalDevices",0,"[AHCI] %d NIEN",*(undefined2 *)(param_1 + 0xff0));
        }
        plVar5 = (long *)(*(long *)(param_1 + 0xfe0) + 0xf0);
        *plVar5 = *plVar5 + 1;
        uVar9 = 0;
      }
      if (((*(int *)(param_1 + 0xfe8) == 5) && ((*(byte *)(plVar8 + 2) & 1) != 0)) &&
         ((DAT_101115f1c & 0xffffff00) == 0x700)) {
        puVar1 = (uint *)(*(long *)(param_1 + 0xff8) + 0x34);
        *puVar1 = *puVar1 | uVar10;
      }
      *(uint *)(*(long *)(param_1 + 0xff8) + 0x20) = (uint)*(ushort *)(lVar4 + 0x42);
      FUN_10028e310(param_1,uVar9);
      return;
    }
    FUN_1008e3970("","LocalDevices",0,"ASSERT( %s ) occured in %s:%d [%s]","FALSE",
                  "../Ahci/sata_dev.cpp",0xea,"send_reg_d2h_fis");
  }
  return;
}

