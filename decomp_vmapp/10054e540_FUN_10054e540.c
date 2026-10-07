
/* WARNING: Type propagation algorithm not settling */

undefined1 FUN_10054e540(long param_1,long param_2)

{
  undefined4 uVar1;
  ushort *puVar2;
  ulong uVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  char *pcVar11;
  undefined8 uVar12;
  undefined1 uVar13;
  ushort *puVar14;
  ulong uVar15;
  undefined ***pppuVar16;
  undefined **local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  QSemaphore local_150 [8];
  undefined8 *******local_148;
  undefined8 *******local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  int local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined **local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  QSemaphore local_e0 [8];
  undefined8 *******local_d8;
  undefined8 *******local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined **local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  QSemaphore local_88 [8];
  undefined8 *******local_80;
  undefined8 *******local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  int local_48;
  undefined8 local_40;
  undefined4 local_38;
  
  if ((*(char *)(param_1 + 0x20) == '\0') || (*(char *)(param_2 + 0x20) == '\0')) {
    pcVar11 = "CGuestMemoryCompressor::copy() not valid";
  }
  else if ((*(long *)(param_1 + 0x48) == 0) && (*(long *)(param_2 + 0x48) == 0)) {
    puVar14 = *(ushort **)(param_1 + 0x28);
    if (*(long *)(puVar14 + 0xc) == 0) {
      pcVar11 = "CGuestMemoryCompressor::copy() existing file required";
    }
    else {
      puVar2 = *(ushort **)(param_2 + 0x28);
      if (*(long *)(puVar2 + 0xc) == 0) {
        if ((*(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10)) &&
           (*(long *)(param_1 + 0x18) == *(long *)(param_2 + 0x18))) {
          if ((((*puVar14 <= *puVar2) && ((char)puVar14[1] == (char)puVar2[1])) &&
              (*(char *)((long)puVar14 + 3) == *(char *)((long)puVar2 + 3))) &&
             (*(int *)(puVar14 + 2) == *(int *)(puVar2 + 2))) {
            *puVar2 = *puVar14;
            if (1 < DAT_1011b55f8) {
              FUN_1008e3970("","TransMem",2,"CGuestMemoryCompressor::copy() v.%d",*puVar14);
              puVar14 = *(ushort **)(param_1 + 0x28);
            }
            if (*puVar14 != 2) {
              plVar8 = (long *)FUN_10054c8a0(param_1,1,0);
              plVar9 = (long *)FUN_10054c8a0(param_2,1,0);
              if ((plVar8 != (long *)0x0) && (plVar9 != (long *)0x0)) {
                cVar4 = *(char *)(*(long *)(param_1 + 0x28) + 2);
                iVar5 = 5;
                if (cVar4 != '\x04') {
                  iVar5 = (uint)(cVar4 == '\x03') * 3 + 1;
                }
                uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x28) + 4);
                local_94 = FUN_100752170(iVar5);
                local_a0 = &PTR_FUN_100bceab8;
                local_90 = 0;
                local_8c = 0;
                local_98 = uVar1;
                QSemaphore::QSemaphore(local_88,0);
                local_80 = &local_80;
                local_50 = 0;
                local_58 = 0;
                local_60 = 0;
                local_68 = 0;
                local_70 = 0;
                local_a0 = &PTR_FUN_100bcebb0;
                local_40 = 0;
                local_38 = 0;
                local_78 = local_80;
                local_48 = iVar5;
                cVar4 = FUN_1007517b0(&local_a0,plVar8);
                if (cVar4 == '\0') {
                  FUN_1008e3970("","TransMem",0,
                                "CGuestMemoryCompressor::copy() main memory copy failed");
                  (**(code **)(*plVar8 + 8))(plVar8);
                  (**(code **)(*plVar9 + 8))();
LAB_10054eba0:
                  *(undefined1 *)(param_2 + 0x20) = 0;
                  *(undefined1 *)(param_1 + 0x20) = 0;
                  FUN_10054fb50(&local_a0);
                  return 0;
                }
                iVar5 = (**(code **)(*plVar8 + 0x28))(plVar8);
                if ((iVar5 != *(int *)(param_1 + 0x30)) ||
                   (iVar5 = (**(code **)(*plVar9 + 0x30))(), iVar5 != *(int *)(param_2 + 0x30))) {
                  FUN_1008e3970("","TransMem",0,
                                "CGuestMemoryCompressor::copy() not all main blocks processed");
                  (**(code **)(*plVar8 + 8))(plVar8);
                  (**(code **)(*plVar9 + 8))();
                  goto LAB_10054eba0;
                }
                lVar7 = *(long *)(param_1 + 0x48);
                lVar10 = (**(code **)(*plVar8 + 0x38))(plVar8);
                *(ulong *)(param_1 + 0x48) = lVar7 + 0xffff + lVar10 & 0xffffffffffff0000;
                lVar7 = *(long *)(param_2 + 0x48);
                lVar10 = (**(code **)(*plVar9 + 0x40))();
                *(ulong *)(param_2 + 0x48) = lVar7 + 0xffff + lVar10 & 0xffffffffffff0000;
                (**(code **)(*plVar8 + 8))(plVar8);
                (**(code **)(*plVar9 + 8))();
                lVar7 = *(long *)(param_1 + 0x48);
                lVar10 = FUN_1007616e0(*(undefined8 *)(param_1 + 8),lVar7,0);
                if ((lVar10 != lVar7) ||
                   (lVar7 = *(long *)(param_2 + 0x48),
                   lVar10 = FUN_1007616e0(*(undefined8 *)(param_2 + 8),lVar7,0), lVar10 != lVar7))
                goto LAB_10054eba0;
                FUN_10054fb50(&local_a0);
                goto LAB_10054e779;
              }
              if (plVar8 != (long *)0x0) {
                (**(code **)(*plVar8 + 8))(plVar8);
              }
joined_r0x00010054ead4:
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))();
              }
LAB_10054ec40:
              *(undefined1 *)(param_2 + 0x20) = 0;
              *(undefined1 *)(param_1 + 0x20) = 0;
              return 0;
            }
            pvVar6 = _valloc(0x400000);
            if (pvVar6 == (void *)0x0) {
              pcVar11 = "CGuestMemoryCompressor::copy() failed to allocate buffer";
            }
            else {
              uVar3 = *(ulong *)(puVar14 + 0x14);
              if (uVar3 != 0) {
                uVar15 = 0;
                do {
                  lVar7 = FUN_100761880(*(undefined8 *)(param_1 + 8),FUN_1007617a0,0,pvVar6,0x400000
                                       );
                  if ((((lVar7 != 0x400000) ||
                       (cVar4 = FUN_10054e010(param_1,pvVar6,0x400000,uVar15,0), cVar4 == '\0')) ||
                      (cVar4 = FUN_10054e010(param_2,pvVar6,0x400000,uVar15,1), cVar4 == '\0')) ||
                     (lVar7 = FUN_100761880(*(undefined8 *)(param_2 + 8),FUN_100761810,0,pvVar6,
                                            0x400000), lVar7 != 0x400000)) {
                    _free(pvVar6);
                    pcVar11 = "CGuestMemoryCompressor::copy() main memory copy failed";
                    goto LAB_10054eb16;
                  }
                  uVar15 = uVar15 + 0x400000;
                } while (uVar15 < uVar3);
              }
              _free(pvVar6);
              *(ulong *)(*(long *)(param_2 + 0x28) + 0x28) = uVar3;
              *(ulong *)(param_2 + 0x48) = uVar3;
              *(ulong *)(param_1 + 0x48) = uVar3;
LAB_10054e779:
              if (*(int *)(param_1 + 0x34) != 0) {
                plVar8 = (long *)FUN_10054c8a0(param_1,0,0);
                plVar9 = (long *)FUN_10054c8a0(param_2,0,0);
                if ((plVar8 != (long *)0x0) && (plVar9 != (long *)0x0)) {
                  lVar7 = *(long *)(param_1 + 0x28);
                  cVar4 = *(char *)(lVar7 + 3);
                  if (cVar4 == '\x01') {
                    uVar1 = *(undefined4 *)(lVar7 + 4);
                    local_ec = FUN_100751d60(uVar1);
                    local_f8 = &PTR_FUN_100bceab8;
                    local_e8 = 0;
                    local_e4 = 0;
                    local_f0 = uVar1;
                    QSemaphore::QSemaphore(local_e0,0);
                    local_d8 = &local_d8;
                    local_a8 = 0;
                    local_b0 = 0;
                    local_b8 = 0;
                    local_c0 = 0;
                    local_c8 = 0;
                    local_f8 = &PTR_FUN_100bceb30;
                    local_d0 = local_d8;
                    cVar4 = FUN_1007517b0(&local_f8,plVar8,plVar9);
                    pppuVar16 = &local_f8;
                  }
                  else {
                    iVar5 = 5;
                    if (cVar4 != '\x04') {
                      iVar5 = (uint)(cVar4 == '\x03') * 3 + 1;
                    }
                    uVar1 = *(undefined4 *)(lVar7 + 4);
                    local_15c = FUN_100752170(iVar5);
                    local_168 = &PTR_FUN_100bceab8;
                    local_158 = 0;
                    local_154 = 0;
                    local_160 = uVar1;
                    QSemaphore::QSemaphore(local_150,0);
                    local_148 = &local_148;
                    local_118 = 0;
                    local_120 = 0;
                    local_128 = 0;
                    local_130 = 0;
                    local_138 = 0;
                    local_168 = &PTR_FUN_100bcebb0;
                    local_108 = 0;
                    local_100 = 0;
                    local_140 = local_148;
                    local_110 = iVar5;
                    cVar4 = FUN_1007517b0(&local_168,plVar8,plVar9);
                    pppuVar16 = &local_168;
                  }
                  FUN_10054fb50(pppuVar16);
                  if (cVar4 == '\0') {
                    pcVar11 = "CGuestMemoryCompressor::copy() video memory copy failed";
                  }
                  else {
                    iVar5 = (**(code **)(*plVar8 + 0x28))(plVar8);
                    if ((iVar5 == *(int *)(param_1 + 0x34)) &&
                       (iVar5 = (**(code **)(*plVar9 + 0x30))(), iVar5 == *(int *)(param_2 + 0x34)))
                    {
                      lVar7 = *(long *)(param_1 + 0x48);
                      lVar10 = (**(code **)(*plVar8 + 0x38))(plVar8);
                      *(ulong *)(param_1 + 0x48) = lVar7 + 0xffff + lVar10 & 0xffffffffffff0000;
                      lVar7 = *(long *)(param_2 + 0x48);
                      lVar10 = (**(code **)(*plVar9 + 0x40))(plVar9);
                      *(ulong *)(param_2 + 0x48) = lVar7 + 0xffff + lVar10 & 0xffffffffffff0000;
                      (**(code **)(*plVar8 + 8))(plVar8);
                      (**(code **)(*plVar9 + 8))(plVar9);
                      lVar7 = *(long *)(param_1 + 0x48);
                      lVar10 = FUN_1007616e0(*(undefined8 *)(param_1 + 8),lVar7,0);
                      if ((lVar10 != lVar7) ||
                         (lVar7 = *(long *)(param_2 + 0x48),
                         lVar10 = FUN_1007616e0(*(undefined8 *)(param_2 + 8),lVar7,0),
                         lVar10 != lVar7)) goto LAB_10054ec40;
                      goto LAB_10054ebdb;
                    }
                    pcVar11 = "CGuestMemoryCompressor::copy() not all video blocks processed";
                  }
                  FUN_1008e3970("","TransMem",0,pcVar11);
                  (**(code **)(*plVar8 + 8))(plVar8);
                  (**(code **)(*plVar9 + 8))();
                  goto LAB_10054eb21;
                }
                if (plVar8 != (long *)0x0) {
                  (**(code **)(*plVar8 + 8))(plVar8);
                }
                goto joined_r0x00010054ead4;
              }
              FUN_1008e3970("","TransMem",0,
                            "CGuestMemoryCompressor::copy() video memory not processed");
LAB_10054ebdb:
              if (*(long *)(param_1 + 0x48) == *(long *)(*(long *)(param_1 + 0x28) + 0x18)) {
                uVar13 = 1;
                if (DAT_1011b55f8 < 2) {
                  return 1;
                }
                pcVar11 = "CGuestMemoryCompressor::copy() completed";
                uVar12 = 2;
                goto LAB_10054e5a6;
              }
              pcVar11 = "CGuestMemoryCompressor::copy() index offset mismatch";
            }
LAB_10054eb16:
            FUN_1008e3970("","TransMem",0,pcVar11);
LAB_10054eb21:
            *(undefined1 *)(param_2 + 0x20) = 0;
            *(undefined1 *)(param_1 + 0x20) = 0;
            return 0;
          }
          pcVar11 = "CGuestMemoryCompressor::copy() format mismatch";
        }
        else {
          pcVar11 = "CGuestMemoryCompressor::copy() size mismatch";
        }
      }
      else {
        pcVar11 = "CGuestMemoryCompressor::copy() new file required";
      }
    }
  }
  else {
    pcVar11 = "CGuestMemoryCompressor::copy() not clear";
  }
  uVar13 = 0;
  uVar12 = 0;
LAB_10054e5a6:
  FUN_1008e3970("","TransMem",uVar12,pcVar11);
  return uVar13;
}

