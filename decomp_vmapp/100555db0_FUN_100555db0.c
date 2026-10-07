
undefined1 FUN_100555db0(long param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  ushort *puVar7;
  ushort *puVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined4 *puVar11;
  long lVar12;
  ushort *puVar13;
  ushort *puVar14;
  size_t sVar15;
  ulong uVar16;
  uint uVar17;
  undefined4 *puVar18;
  bool bVar19;
  long local_50;
  ushort *local_40;
  int local_34;
  
  uVar5 = *(uint *)(*(long *)(param_1 + 0x10) + 0x10);
  uVar17 = uVar5 << 0xc;
  puVar18 = *(undefined4 **)(*(long *)(*(long *)(param_1 + 0x18) + 8) + 0x28);
  FUN_1008e3970("","TransMem",0,"CSnapshotEngineBase::restore_video() %u bytes",uVar17);
  if (puVar18 == (undefined4 *)0x0) {
    return 0;
  }
  lVar12 = (ulong)*(uint *)(*(long *)(param_1 + 0x10) + 0x18) << 0xc;
  lVar6 = FUN_1007616e0(*(undefined8 *)(param_1 + 8),lVar12,0);
  if (lVar6 != lVar12) {
    pcVar10 = "CSnapshotEngineBase::restore_video() seek failed";
    goto LAB_1005561c5;
  }
  cVar3 = *(char *)(*(long *)(param_1 + 0x10) + 2);
  if (cVar3 == '\x03') {
    puVar7 = _valloc(0x100000);
    if (puVar7 != (ushort *)0x0) {
      if ((uVar5 & 0xfffff) != 0) {
        local_50 = 0;
        do {
          iVar4 = FUN_100761880(*(undefined8 *)(param_1 + 8),FUN_1007617a0,0,puVar7,0x100000);
          if (iVar4 != 0x100000) goto LAB_1005562f7;
          uVar16 = 0x100000;
          puVar14 = puVar7;
          local_40 = puVar7;
          if (*(code **)(param_1 + 0x20) != (code *)0x0) {
            uVar16 = 0x100000;
            cVar3 = (**(code **)(param_1 + 0x20))
                              (*(undefined8 *)(param_1 + 0x28),puVar7,0x100000,local_50,0);
            if (cVar3 == '\0') {
              FUN_1008e3970("","TransMem",0,"CSnapshotEngineBase::restore_video() cancelled");
              goto LAB_1005562a2;
            }
          }
          while( true ) {
            uVar1 = *puVar14;
            uVar5 = uVar17;
            if (uVar1 == 1) break;
            if (uVar1 != 0) {
              local_34 = 0x1000;
              iVar4 = FUN_100744610(puVar14 + 1,uVar1,puVar18,&local_34);
              if (iVar4 == 0) {
                if (local_34 == 0x1000) {
                  puVar14 = (ushort *)((long)puVar14 + (ulong)uVar1 + 2);
                  uVar16 = (uVar16 & 0xffffffff) - ((ulong)uVar1 + 2);
                  goto LAB_1005560a6;
                }
                pcVar10 = 
                "CSnapshotEngineBase::restore_video() unexpected lzrw4 uncompressed size (%d)";
              }
              else {
                pcVar10 = "CSnapshotEngineBase::restore_video() lzrw4 uncompression failed (%d)";
              }
              FUN_1008e3970("","TransMem",0,pcVar10);
              goto LAB_1005562a2;
            }
            puVar14 = puVar14 + 1;
            uVar16 = (uVar16 & 0xffffffff) - 2;
LAB_1005560a6:
            puVar18 = puVar18 + 0x400;
            uVar5 = uVar17 - 0x1000;
            if (((int)uVar16 == 0) || (bVar19 = uVar17 == 0x1000, uVar17 = uVar5, bVar19)) break;
          }
          uVar17 = uVar5;
          local_50 = local_50 + 0x100000;
          bVar19 = true;
        } while (uVar17 != 0);
LAB_1005562a6:
        if (puVar7 != (ushort *)0x0) {
          _free(puVar7);
        }
        if (!bVar19) {
          return 0;
        }
        goto LAB_1005562c6;
      }
LAB_1005562be:
      _free(puVar7);
LAB_1005562c6:
      FUN_1008e3970("","TransMem",0,"CSnapshotEngineBase::restore_video() done");
      return 1;
    }
  }
  else if (cVar3 == '\x01') {
    puVar7 = _valloc(0x100000);
    if (puVar7 != (ushort *)0x0) {
      if ((uVar5 & 0xfffff) != 0) {
        local_40 = (ushort *)0x0;
LAB_100555e73:
        iVar4 = FUN_100761880(*(undefined8 *)(param_1 + 8),FUN_1007617a0,0,puVar7,0x100000);
        if (iVar4 == 0x100000) {
          if ((*(code **)(param_1 + 0x20) == (code *)0x0) ||
             (cVar3 = (**(code **)(param_1 + 0x20))
                                (*(undefined8 *)(param_1 + 0x28),puVar7,0x100000,local_40,0),
             cVar3 != '\0')) goto LAB_100555ebf;
          pcVar10 = "CSnapshotEngineBase::restore_video() cancelled";
          goto LAB_10055620f;
        }
LAB_1005562f7:
        bVar19 = false;
        FUN_1008e3970("","TransMem",0,
                      "CSnapshotEngineBase::restore_video() failed to read video memory (0x%x,0x%x)"
                      ,0x100000,iVar4);
        goto LAB_1005562a6;
      }
      goto LAB_1005562be;
    }
  }
  else {
    if (cVar3 != '\0') {
      FUN_1008e3970("","TransMem",0,
                    "CSnapshotEngineBase::restore_video() unsupported compression type %u");
      return 0;
    }
    if (*(long *)(param_1 + 0x20) == 0) {
      uVar5 = FUN_100761880(*(undefined8 *)(param_1 + 8),FUN_1007617a0,0,puVar18,uVar17);
      if (uVar17 != uVar5) {
        FUN_1008e3970("","TransMem",0,
                      "CSnapshotEngineBase::restore_video() failed to read video memory (0x%x,0x%x)"
                      ,uVar17);
        return 0;
      }
      goto LAB_1005562c6;
    }
    puVar7 = _valloc(0x100000);
    if (puVar7 != (ushort *)0x0) {
      if ((uVar5 & 0xfffff) != 0) {
        lVar6 = 0;
LAB_10055612a:
        sVar15 = (size_t)uVar17;
        if (0x100000 < uVar17) {
          sVar15 = 0x100000;
        }
        iVar4 = FUN_100761880(*(undefined8 *)(param_1 + 8),FUN_1007617a0,0,puVar7,sVar15);
        if ((int)sVar15 == iVar4) {
          cVar3 = (**(code **)(param_1 + 0x20))
                            (*(undefined8 *)(param_1 + 0x28),puVar7,sVar15,lVar6,0);
          if (cVar3 != '\0') goto code_r0x000100556189;
          bVar19 = false;
          FUN_1008e3970("","TransMem",0,"CSnapshotEngineBase::restore_video() cancelled");
        }
        else {
          FUN_1008e3970("","TransMem",0,
                        "CSnapshotEngineBase::restore_video() failed to read video memory (0x%x,0x%x)"
                        ,sVar15);
          local_40 = puVar7;
LAB_1005562a2:
          bVar19 = false;
          puVar7 = local_40;
        }
        goto LAB_1005562a6;
      }
      goto LAB_1005562be;
    }
  }
  pcVar10 = "CSnapshotEngineBase::restore_video() failed to allocate buffer";
LAB_1005561c5:
  FUN_1008e3970("","TransMem",0,pcVar10);
  return 0;
code_r0x000100556189:
  _memcpy(puVar18,puVar7,sVar15);
  puVar18 = (undefined4 *)((long)puVar18 + sVar15);
  lVar6 = lVar6 + sVar15;
  uVar17 = uVar17 - (int)sVar15;
  bVar19 = true;
  if (uVar17 == 0) goto LAB_1005562a6;
  goto LAB_10055612a;
LAB_100555ebf:
  puVar11 = (undefined4 *)((long)(int)uVar17 + (long)puVar18);
  puVar14 = puVar7;
  puVar9 = puVar18;
  while ((puVar8 = puVar14, puVar9 < puVar11 && (puVar8 + 4 <= puVar7 + 0x80000))) {
    iVar4 = *(int *)puVar8;
    if (iVar4 < 1) {
      puVar14 = puVar8 + 2;
      if (iVar4 < 0) {
        do {
          if ((puVar11 == puVar9) || (puVar14 == puVar7 + 0x80000)) goto LAB_1005561fa;
          puVar13 = puVar8 + 4;
          *puVar9 = *(undefined4 *)puVar14;
          puVar9 = puVar9 + 1;
          iVar4 = iVar4 + 1;
          puVar8 = puVar14;
          puVar14 = puVar13;
        } while (iVar4 != 0);
      }
    }
    else {
      uVar2 = *(undefined4 *)(puVar8 + 2);
      do {
        if (puVar11 == puVar9) goto LAB_1005561fa;
        *puVar9 = uVar2;
        puVar9 = puVar9 + 1;
        iVar4 = iVar4 + -1;
        puVar14 = puVar8 + 4;
      } while (iVar4 != 0);
    }
  }
  iVar4 = (int)((ulong)((long)puVar9 - (long)puVar18) >> 2);
  local_40 = (ushort *)((long)local_40 + 0x100000);
  puVar18 = (undefined4 *)((long)puVar18 + (((long)iVar4 << 0x22) >> 0x20));
  uVar17 = uVar17 + iVar4 * -4;
  bVar19 = true;
  if (uVar17 == 0) goto LAB_1005562a6;
  goto LAB_100555e73;
LAB_1005561fa:
  pcVar10 = "CSnapshotEngineBase::restore_video() failed to uncompress";
LAB_10055620f:
  bVar19 = false;
  FUN_1008e3970("","TransMem",0,pcVar10);
  goto LAB_1005562a6;
}

