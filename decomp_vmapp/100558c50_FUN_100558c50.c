
undefined1 FUN_100558c50(long param_1,long param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  ushort *puVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  undefined1 uVar16;
  bool bVar17;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  code *local_48;
  uint local_40;
  undefined4 uStack_3c;
  long local_38;
  
  QMutex::lock();
  puVar6 = *(ushort **)(param_1 + 0x10);
  if (puVar6 == (ushort *)0x0) {
    uVar16 = 1;
    if (2 < DAT_1011b55f8) {
      FUN_1008e3970("","TransMem",3,"Failed to process blocks: the engine is stopped");
    }
  }
  else {
    local_50 = (undefined8 *)0x0;
    local_58 = (undefined8 *)0x0;
    local_60 = (undefined8 *)0x0;
    cVar1 = **(char **)(param_1 + 0x18);
    if ((cVar1 == '\0') && (uVar8 = (ulong)*(uint *)(puVar6 + 4), uVar8 != 0)) {
      local_58 = operator_new(uVar8 * 0x10);
      local_50 = local_58 + uVar8 * 2;
    }
    uVar2 = *(uint *)(puVar6 + 0x12);
    uVar14 = param_3 << 3;
    if (*(int *)(puVar6 + 4) * uVar2 <= (uint)(param_3 << 3)) {
      uVar14 = *(int *)(puVar6 + 4) * uVar2;
    }
    local_60 = local_58;
    if (uVar14 == 0) {
LAB_100558fd8:
      uVar16 = 1;
      if (1 < DAT_1011b55f8) {
        FUN_1008e3970("","TransMem",2,"No blocks to process");
      }
    }
    else {
      uVar8 = 0;
      bVar17 = false;
      do {
        while ((*(uint *)(param_2 + (uVar8 >> 5) * 4) >> ((uint)uVar8 & 0x1f) & 1) == 0) {
          uVar8 = (ulong)((uint)uVar8 + 1);
LAB_100558da3:
          if (uVar14 <= (uint)uVar8) {
            if (!bVar17) goto LAB_100558fd8;
            goto LAB_100558e5f;
          }
        }
        uVar12 = uVar8 / uVar2;
        uVar7 = (uint)uVar12;
        uVar15 = (uVar7 + 1) * uVar2;
        uVar8 = (ulong)uVar15;
        if ((*(uint *)(*(long *)(param_1 + 0x78) + (uVar12 >> 5) * 4) >> (uVar7 & 0x1f) & 1) != 0)
        goto LAB_100558da3;
        lVar11 = *(long *)(param_1 + 0x60);
        if ((*(int *)(lVar11 + uVar12 * 0x10) < -2) || (*(int *)(lVar11 + 4 + uVar12 * 0x10) < -2))
        {
          if (cVar1 == '\0') {
            local_38 = -1;
            if ((uVar7 < *(uint *)(puVar6 + 4)) &&
               (uVar3 = *(uint *)(*(long *)(puVar6 + 0x20) + uVar12 * 4),
               uVar3 < *(uint *)(puVar6 + 6))) {
              iVar10 = 1;
              if (*puVar6 < 0x201) {
                iVar10 = *(int *)(puVar6 + 0x12);
              }
              local_38 = (ulong)(iVar10 * uVar3 + *(int *)(puVar6 + 10)) << 0xc;
            }
            local_40 = uVar7;
            if (local_58 == local_50) {
              FUN_10055a1f0(&local_60,&local_40);
            }
            else {
              local_58[1] = local_38;
              *local_58 = CONCAT44(uStack_3c,uVar7);
              local_58 = local_58 + 2;
            }
          }
          else {
            *(undefined4 *)(lVar11 + 4 + (long)(int)uVar7 * 0x10) = 0xffffffff;
            *(undefined4 *)(lVar11 + (long)(int)uVar7 * 0x10) = *(undefined4 *)(param_1 + 0x88);
            iVar10 = *(int *)(param_1 + 0x88);
            if ((long)iVar10 < 0) {
              lVar11 = 0;
              if (iVar10 == -1) {
                lVar11 = param_1 + 0x88;
              }
            }
            else {
              lVar11 = lVar11 + (long)iVar10 * 0x10;
            }
            *(uint *)(lVar11 + 4) = uVar7;
            *(uint *)(param_1 + 0x88) = uVar7;
          }
        }
        bVar17 = true;
      } while (uVar15 < uVar14);
LAB_100558e5f:
      if (cVar1 == '\0') {
        local_48 = FUN_100559b20;
        FUN_10055a320(local_60,local_58,&local_48);
        if ((long)local_58 - (long)local_60 != 0) {
          lVar11 = *(long *)(param_1 + 0x60);
          uVar8 = 0;
          uVar12 = 1;
          uVar13 = (ulong)*(uint *)(param_1 + 0x88);
          do {
            iVar10 = *(int *)(local_60 + uVar8 * 2);
            lVar9 = (long)iVar10 * 0x10;
            *(undefined4 *)(lVar11 + 4 + lVar9) = 0xffffffff;
            *(int *)(lVar11 + lVar9) = (int)uVar13;
            iVar4 = *(int *)(param_1 + 0x88);
            if ((long)iVar4 < 0) {
              lVar9 = 0;
              if (iVar4 == -1) {
                lVar9 = param_1 + 0x88;
              }
            }
            else {
              lVar9 = (long)iVar4 * 0x10 + lVar11;
            }
            *(int *)(lVar9 + 4) = iVar10;
            *(int *)(param_1 + 0x88) = iVar10;
            bVar17 = uVar12 < (ulong)((long)local_58 - (long)local_60 >> 4);
            uVar8 = uVar12;
            uVar12 = (ulong)((int)uVar12 + 1);
            uVar13 = (long)iVar10;
          } while (bVar17);
        }
      }
      uVar5 = *(undefined4 *)(*(long *)(param_1 + 0x10) + 8);
      FUN_1008e3970("","TransMem",0,"Start processing blocks (%u / %u already processed)",
                    *(undefined4 *)(param_1 + 0x80));
      QWaitCondition::wakeAll();
      uVar7 = 0;
      while (*(long *)(param_1 + 0x10) != 0) {
        if (*(char *)(param_1 + 0x68) != '\0') {
          uVar16 = 0;
          FUN_1008e3970("","TransMem",0,"Failed to process blocks");
          goto LAB_1005590a3;
        }
        while( true ) {
          while( true ) {
            if (uVar14 <= uVar7) goto LAB_100559074;
            if ((*(uint *)(param_2 + (ulong)(uVar7 >> 5) * 4) >> (uVar7 & 0x1f) & 1) != 0) break;
            uVar7 = uVar7 + 1;
          }
          uVar15 = (uint)((ulong)uVar7 / (ulong)uVar2);
          if ((*(uint *)(*(long *)(param_1 + 0x78) + ((ulong)uVar7 / (ulong)uVar2 >> 5) * 4) >>
               (uVar15 & 0x1f) & 1) == 0) break;
          uVar7 = (uVar15 + 1) * uVar2;
        }
        QWaitCondition::wait((QMutex *)(param_1 + 0x70),param_1 + 0x50);
      }
      FUN_1008e3970("","TransMem",0,"Stopped processing blocks");
LAB_100559074:
      uVar16 = 1;
      FUN_1008e3970("","TransMem",0,"Finished processing blocks (%u / %u processed)",
                    *(undefined4 *)(param_1 + 0x80),uVar5);
    }
LAB_1005590a3:
    if (local_60 != (undefined8 *)0x0) {
      if (local_58 != local_60) {
        local_58 = (undefined8 *)
                   ((~((long)local_58 + (-0x10 - (long)local_60)) & 0xfffffffffffffff0U) +
                   (long)local_58);
      }
      operator_delete(local_60);
    }
  }
  QMutex::unlock();
  return uVar16;
}

