
void FUN_10049aac0(long param_1)

{
  undefined8 *puVar1;
  string sVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  char cVar5;
  byte bVar6;
  short sVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  void *pvVar14;
  uint *puVar15;
  QArrayData *pQVar16;
  byte bVar17;
  ulong uVar18;
  QArrayData *pQVar19;
  string *psVar20;
  ulong uVar21;
  int *piVar22;
  ulong uVar23;
  undefined4 local_128 [2];
  undefined8 local_120;
  undefined8 local_118;
  long local_110;
  string local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined4 local_c0;
  byte local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  QArrayData *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long local_40;
  undefined1 local_31;
  
  local_90 = (QArrayData *)PTR_shared_null_100ba20d0;
  if ((*(uint *)(PTR_shared_null_100ba20d0 + 8) & 0x7fffff00) < 0x100) {
    FUN_10049bdd0(&local_90,*(undefined4 *)(PTR_shared_null_100ba20d0 + 4),0x100,0);
  }
  if (*(uint *)local_90 < 2) {
    local_90[0xb] = (QArrayData)((byte)local_90[0xb] | 0x80);
  }
  local_98 = 0;
  sVar7 = _GetNextProcess(&local_98);
  uVar3 = *(undefined8 *)PTR__kCFAllocatorDefault_100ba23b0;
  do {
    if (sVar7 != 0) {
      puVar1 = (undefined8 *)(param_1 + 0x18);
      puVar15 = *(uint **)(param_1 + 0x18);
      if (1 < *puVar15) {
        if ((puVar15[2] & 0x7fffffff) == 0) {
          puVar15 = (uint *)QArrayData::allocate(0x40,8,0,2);
          *puVar1 = puVar15;
        }
        else {
          FUN_10049c090(puVar1,puVar15[1],puVar15[2] & 0x7fffffff,0);
          puVar15 = (uint *)*puVar1;
        }
      }
      piVar22 = (int *)((long)puVar15 + *(long *)(puVar15 + 4));
      do {
        if (1 < *puVar15) {
          if ((puVar15[2] & 0x7fffffff) == 0) {
            puVar15 = (uint *)QArrayData::allocate(0x40,8,0,2);
            *puVar1 = puVar15;
          }
          else {
            FUN_10049c090(puVar1,puVar15[1],puVar15[2] & 0x7fffffff,0);
            puVar15 = (uint *)*puVar1;
          }
        }
        if (piVar22 ==
            (int *)((long)puVar15 + (long)(int)puVar15[1] * 0x40 + *(long *)(puVar15 + 4))) {
          if (1 < *(uint *)local_90) {
            if ((*(uint *)(local_90 + 8) & 0x7fffffff) == 0) {
              local_90 = (QArrayData *)QArrayData::allocate(0x28,8,0,2);
            }
            else {
              FUN_10049bdd0(&local_90,*(uint *)(local_90 + 4),*(uint *)(local_90 + 8) & 0x7fffffff,0
                           );
            }
          }
          psVar20 = (string *)(local_90 + *(long *)(local_90 + 0x10) + 0x10);
          pQVar16 = local_90;
          while( true ) {
            if (1 < *(uint *)pQVar16) {
              if ((*(uint *)(pQVar16 + 8) & 0x7fffffff) == 0) {
                pQVar16 = (QArrayData *)QArrayData::allocate(0x28,8,0,2);
                local_90 = pQVar16;
              }
              else {
                FUN_10049bdd0(&local_90,*(uint *)(pQVar16 + 4),*(uint *)(pQVar16 + 8) & 0x7fffffff,0
                             );
                pQVar16 = local_90;
              }
            }
            if (psVar20 + -0x10 ==
                (string *)(pQVar16 + (long)*(int *)(pQVar16 + 4) * 0x28 + *(long *)(pQVar16 + 0x10))
               ) break;
            local_110 = 0;
            local_118 = 0;
            local_120 = 0;
            local_f0 = 0;
            local_f8 = 0;
            local_100 = 0;
            cVar5 = FUN_10049c870(psVar20 + -0x10,(string *)&local_120);
            if (cVar5 != '\0') {
              local_128[0] = *(undefined4 *)(psVar20 + -8);
              local_108 = psVar20[-4];
              std::string::operator=((string *)&local_100,psVar20);
              FUN_10049b960(puVar1,local_128);
              if (2 < DAT_1011b55f8) {
                lVar9 = local_110;
                if ((local_120 & 1) == 0) {
                  lVar9 = (long)&local_120 + 1;
                }
                FUN_1008e3970("PROCMON","prl_sharedapps",3,"Process added: %d, %s",local_128[0],
                              lVar9);
              }
              puVar4 = *(undefined8 **)(param_1 + 0x10);
              if (puVar4 != (undefined8 *)0x0) {
                (**(code **)*puVar4)(puVar4,1,local_128);
              }
            }
            std::string::~string((string *)&local_100);
            std::string::~string((string *)&local_120);
            psVar20 = psVar20 + 0x28;
          }
          if (*(int *)pQVar16 != -1) {
            if (*(int *)pQVar16 != 0) {
              LOCK();
              *(int *)pQVar16 = *(int *)pQVar16 + -1;
              local_31 = *(int *)pQVar16 != 0;
              UNLOCK();
              if ((bool)local_31) {
                return;
              }
            }
            lVar9 = (long)*(int *)(pQVar16 + 4) * 0x28;
            if (lVar9 != 0) {
              psVar20 = (string *)(pQVar16 + *(long *)(pQVar16 + 0x10) + 0x10);
              do {
                std::string::~string(psVar20);
                psVar20 = psVar20 + 0x28;
                lVar9 = lVar9 + -0x28;
              } while (lVar9 != 0);
            }
            QArrayData::deallocate(pQVar16,0x28,8);
          }
          return;
        }
        if (1 < *(uint *)local_90) {
          if ((*(uint *)(local_90 + 8) & 0x7fffffff) == 0) {
            local_90 = (QArrayData *)QArrayData::allocate(0x28,8,0,2);
          }
          else {
            FUN_10049bdd0(&local_90,*(uint *)(local_90 + 4),*(uint *)(local_90 + 8) & 0x7fffffff,0);
          }
        }
        pQVar19 = local_90 + *(long *)(local_90 + 0x10);
        pQVar16 = local_90;
        while( true ) {
          if (1 < *(uint *)pQVar16) {
            if ((*(uint *)(pQVar16 + 8) & 0x7fffffff) == 0) {
              pQVar16 = (QArrayData *)QArrayData::allocate(0x28,8,0,2);
              local_90 = pQVar16;
            }
            else {
              FUN_10049bdd0(&local_90,*(uint *)(pQVar16 + 4),*(uint *)(pQVar16 + 8) & 0x7fffffff,0);
              pQVar16 = local_90;
            }
          }
          if (pQVar19 ==
              pQVar16 + (long)(int)*(uint *)(pQVar16 + 4) * 0x28 + *(long *)(pQVar16 + 0x10)) {
            puVar4 = *(undefined8 **)(param_1 + 0x10);
            if (puVar4 != (undefined8 *)0x0) {
              (**(code **)*puVar4)(puVar4,2,piVar22);
            }
            piVar22 = (int *)FUN_10049c590(puVar1,piVar22,piVar22 + 0x10);
            goto LAB_10049aec0;
          }
          if (*(int *)(pQVar19 + 8) == *piVar22) break;
          pQVar19 = pQVar19 + 0x28;
        }
        if (pQVar19[0xc] != *(QArrayData *)(piVar22 + 8)) {
          *(QArrayData *)(piVar22 + 8) = pQVar19[0xc];
          puVar4 = *(undefined8 **)(param_1 + 0x10);
          if (puVar4 != (undefined8 *)0x0) {
            (**(code **)*puVar4)(puVar4,3,piVar22);
          }
        }
        bVar6 = (byte)pQVar19[0x10] & 1;
        if (bVar6 == 0) {
          uVar21 = (ulong)((byte)pQVar19[0x10] >> 1);
        }
        else {
          uVar21 = *(ulong *)(pQVar19 + 0x18);
        }
        sVar2 = *(string *)(piVar22 + 10);
        bVar17 = (byte)sVar2 & 1;
        if (bVar17 == 0) {
          uVar23 = (ulong)((byte)sVar2 >> 1);
        }
        else {
          uVar23 = *(ulong *)(piVar22 + 0xc);
        }
        if (bVar6 == 0) {
          pQVar16 = pQVar19 + 0x11;
        }
        else {
          pQVar16 = *(QArrayData **)(pQVar19 + 0x20);
        }
        if (bVar17 == 0) {
          pvVar14 = (void *)((long)piVar22 + 0x29);
        }
        else {
          pvVar14 = *(void **)(piVar22 + 0xe);
        }
        uVar18 = uVar21;
        if (uVar23 < uVar21) {
          uVar18 = uVar23;
        }
        if ((((uVar18 != 0) && (iVar8 = _memcmp(pQVar16,pvVar14,uVar18), iVar8 != 0)) ||
            (uVar21 < uVar23)) || (uVar23 < uVar21)) {
          std::string::operator=((string *)(piVar22 + 10),(string *)(pQVar19 + 0x10));
          puVar4 = *(undefined8 **)(param_1 + 0x10);
          if (puVar4 != (undefined8 *)0x0) {
            (**(code **)*puVar4)(puVar4,4,piVar22);
          }
        }
        FUN_10049c3b0(&local_90,pQVar19,pQVar19 + 0x28);
        piVar22 = piVar22 + 0x10;
LAB_10049aec0:
        puVar15 = (uint *)*puVar1;
      } while( true );
    }
    iVar8 = _GetProcessPID(&local_98,&local_9c);
    if (iVar8 == 0) {
      local_a8 = 0;
      local_b0 = 0;
      local_b8 = 0;
      local_c8 = local_98;
      local_c0 = local_9c;
      local_58 = 0;
      uStack_50 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_78 = 0;
      uStack_70 = 0;
      uStack_80 = 0;
      local_48 = 0;
      local_88 = 0x48;
      sVar7 = _GetProcessInformation(&local_98,&local_88);
      local_bc = 1;
      if (sVar7 == 0) {
        local_bc = (uStack_70._5_1_ & 4) >> 2;
      }
      lVar9 = (*DAT_1011ccf28)(uVar3,local_9c);
      lVar10 = (*DAT_1011ccf40)(0xfffffffffffffffe,lVar9,&cf_StatusLabel);
      if (lVar10 == 0) {
        local_e8 = 0;
        uStack_e0 = 0;
        local_d8 = 0;
      }
      else {
        local_40 = 0;
        cVar5 = _CFDictionaryGetValueIfPresent(lVar10,&cf_label,&local_40);
        if ((cVar5 == '\0') || (local_40 == 0)) {
LAB_10049acda:
          local_e8 = 0;
          uStack_e0 = 0;
          local_d8 = 0;
        }
        else {
          lVar11 = _CFStringGetTypeID();
          lVar12 = _CFGetTypeID(local_40);
          if ((lVar11 != lVar12) ||
             (lVar12 = _CFStringGetLength(local_40), lVar11 = local_40, lVar12 < 1))
          goto LAB_10049acda;
          local_e8 = 0;
          uStack_e0 = 0;
          local_d8 = 0;
          lVar12 = _CFStringGetCStringPtr(local_40,0x8000100);
          if (lVar12 == 0) {
            uVar13 = _CFStringGetLength(lVar11);
            lVar12 = _CFStringGetMaximumSizeForEncoding(uVar13,0x8000100);
            pvVar14 = _malloc(lVar12 + 1U);
            if (pvVar14 != (void *)0x0) {
              cVar5 = _CFStringGetCString(lVar11,pvVar14,lVar12 + 1U);
              if (cVar5 != '\0') {
                std::string::assign((char *)&local_e8);
              }
              _free(pvVar14);
            }
          }
          else {
            std::string::assign((char *)&local_e8);
          }
        }
        _CFRelease(lVar10);
      }
      if (lVar9 != 0) {
        _CFRelease(lVar9);
      }
      std::string::operator=((string *)&local_b8,(string *)&local_e8);
      std::string::~string((string *)&local_e8);
      FUN_10049b830(&local_90,&local_c8);
      std::string::~string((string *)&local_b8);
    }
    sVar7 = _GetNextProcess(&local_98);
  } while( true );
}

