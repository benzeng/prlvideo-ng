
undefined4 FUN_1004c28a0(long *param_1,long param_2)

{
  long *plVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  void *pvVar6;
  uint *puVar7;
  int *piVar8;
  long lVar9;
  uint *puVar10;
  uint *puVar11;
  int iVar12;
  bool bVar13;
  uint uVar14;
  uint *puVar15;
  void **ppvVar16;
  undefined4 uVar17;
  undefined8 local_60;
  long local_58;
  uint *local_40;
  uint *local_38;
  
  if ((char)param_1[6] == '\0') {
    (**(code **)(*param_1 + 0x38))(param_1);
  }
  uVar2 = *(ushort *)(param_2 + 0x14);
  if (uVar2 < 0x10) {
    return 0xf0000002;
  }
  piVar8 = (int *)FUN_1002a6010(param_2);
  if (piVar8 == (int *)0x0) {
    return 0xf0000004;
  }
  if (*piVar8 != 1) {
    return 0xf0000016;
  }
  QMutex::lock();
  bVar13 = true;
  iVar12 = piVar8[1];
  if (iVar12 == 2) {
    plVar1 = param_1 + 7;
    iVar12 = 0;
    if (0x1f < uVar2) {
      iVar12 = piVar8[4];
    }
    puVar10 = (uint *)*plVar1;
    if (1 < *puVar10) {
      FUN_1004c3740(plVar1);
      puVar10 = (uint *)*plVar1;
    }
    puVar7 = *(uint **)(puVar10 + 4);
    puVar15 = (uint *)0x0;
    if (*(uint **)(puVar10 + 4) == (uint *)0x0) {
LAB_1004c2b61:
      puVar11 = puVar10 + 2;
    }
    else {
      do {
        while (puVar11 = puVar7, uVar14 = puVar11[6], (int)uVar14 < iVar12) {
          puVar7 = *(uint **)(puVar11 + 4);
          if (*(uint **)(puVar11 + 4) == (uint *)0x0) {
            if (puVar15 == (uint *)0x0) goto LAB_1004c2b61;
            uVar14 = puVar15[6];
            puVar11 = puVar15;
            goto LAB_1004c2b5c;
          }
        }
        puVar7 = *(uint **)(puVar11 + 2);
        puVar15 = puVar11;
      } while (*(uint **)(puVar11 + 2) != (uint *)0x0);
LAB_1004c2b5c:
      if (iVar12 < (int)uVar14) goto LAB_1004c2b61;
    }
    if (1 < *puVar10) {
      FUN_1004c3740(plVar1);
      puVar10 = (uint *)*plVar1;
    }
    if (puVar10 + 2 == puVar11) {
      if (1 < *puVar10) {
        FUN_1004c3740(plVar1);
        puVar10 = (uint *)*plVar1;
      }
      puVar7 = *(uint **)(puVar10 + 4);
      puVar15 = (uint *)0x0;
      if (*(uint **)(puVar10 + 4) != (uint *)0x0) {
        do {
          while (puVar11 = puVar7, uVar14 = puVar11[6], (int)uVar14 < 1) {
            puVar7 = *(uint **)(puVar11 + 4);
            if (*(uint **)(puVar11 + 4) == (uint *)0x0) {
              if (puVar15 == (uint *)0x0) goto LAB_1004c2cf7;
              uVar14 = puVar15[6];
              puVar11 = puVar15;
              goto LAB_1004c2cf2;
            }
          }
          puVar7 = *(uint **)(puVar11 + 2);
          puVar15 = puVar11;
        } while (*(uint **)(puVar11 + 2) != (uint *)0x0);
LAB_1004c2cf2:
        if ((int)uVar14 < 2) goto LAB_1004c2cfe;
      }
LAB_1004c2cf7:
      puVar11 = puVar10 + 2;
    }
LAB_1004c2cfe:
    if (1 < *puVar10) {
      FUN_1004c3740(plVar1);
      puVar10 = (uint *)*plVar1;
    }
    uVar17 = 0;
    if (puVar10 + 2 == puVar11) goto LAB_1004c2e15;
    local_58 = *(long *)(puVar11 + 8);
    FUN_1004c33b0(plVar1,puVar11);
    QMutex::unlock();
    uVar17 = 0;
    local_60 = 0xf0000000;
  }
  else {
    uVar17 = 0xf000001c;
    if (iVar12 == 1) {
      (**(code **)(*param_1 + 0x48))(&local_40,param_1,piVar8,uVar2);
      puVar10 = (uint *)param_1[5];
      ppvVar16 = (void **)(param_1 + 5);
      if (1 < *puVar10) {
        FUN_1004c35a0(ppvVar16,puVar10[1]);
        puVar10 = *ppvVar16;
      }
      if (puVar10 + (long)(int)puVar10[3] * 2 + 4 != local_40) {
        piVar5 = *(int **)local_40;
        iVar12 = *piVar5;
        pvVar6 = *(void **)(piVar5 + 2);
        uVar14 = piVar5[4];
        uVar3 = 0;
        lVar9 = FUN_1002a6120(param_2,0,1);
        if (lVar9 != 0) {
          uVar3 = *(uint *)(lVar9 + 8);
        }
        if (uVar14 <= uVar3) {
          puVar10 = *ppvVar16;
          if (1 < *puVar10) {
            uVar4 = puVar10[2];
            FUN_1004c35a0(ppvVar16,puVar10[1]);
            local_40 = (uint *)((long)*ppvVar16 +
                               ((long)(int)((ulong)((long)local_40 -
                                                   (long)(puVar10 + (long)(int)uVar4 * 2 + 4)) >> 3)
                               + (long)*(int *)((long)*ppvVar16 + 8)) * 8 + 0x10);
          }
          if (*(void **)local_40 != (void *)0x0) {
            operator_delete(*(void **)local_40);
          }
          QListData::erase(ppvVar16);
        }
        bVar13 = false;
        QMutex::unlock();
        uVar17 = 0xf0000009;
        if (uVar14 <= uVar3) {
          piVar8[2] = iVar12;
          piVar8[3] = uVar14;
          if (lVar9 != 0) {
            FUN_1002a5a50(lVar9,0,pvVar6);
            *(uint *)(lVar9 + 0x10) = uVar14;
          }
          uVar17 = 0;
          if ((pvVar6 != (void *)0x0) && (uVar14 != 0)) {
            operator_delete__(pvVar6);
            uVar17 = 0;
          }
        }
      }
      goto LAB_1004c2e15;
    }
    if (iVar12 != 0) goto LAB_1004c2e15;
    iVar12 = 0;
    if (0x1f < uVar2) {
      iVar12 = piVar8[4];
    }
    plVar1 = param_1 + 7;
    puVar10 = (uint *)param_1[7];
    if (1 < *puVar10) {
      FUN_1004c3740();
      puVar10 = (uint *)*plVar1;
    }
    puVar7 = *(uint **)(puVar10 + 4);
    puVar15 = (uint *)0x0;
    if (*(uint **)(puVar10 + 4) == (uint *)0x0) {
LAB_1004c2c30:
      puVar11 = puVar10 + 2;
    }
    else {
      do {
        while (puVar11 = puVar7, uVar14 = puVar11[6], (int)uVar14 < iVar12) {
          puVar7 = *(uint **)(puVar11 + 4);
          if (*(uint **)(puVar11 + 4) == (uint *)0x0) {
            if (puVar15 == (uint *)0x0) goto LAB_1004c2c30;
            uVar14 = puVar15[6];
            puVar11 = puVar15;
            goto LAB_1004c2c2c;
          }
        }
        puVar7 = *(uint **)(puVar11 + 2);
        puVar15 = puVar11;
      } while (*(uint **)(puVar11 + 2) != (uint *)0x0);
LAB_1004c2c2c:
      if (iVar12 < (int)uVar14) goto LAB_1004c2c30;
    }
    if (1 < *puVar10) {
      FUN_1004c3740();
      puVar10 = (uint *)*plVar1;
    }
    local_60 = 0;
    local_58 = 0;
    if (puVar10 + 2 != puVar11) {
      local_58 = *(long *)(puVar11 + 8);
      local_60 = 0xf0000000;
      FUN_1004c33b0(plVar1,puVar11);
    }
    (**(code **)(*param_1 + 0x48))(&local_38,param_1,piVar8,uVar2);
    puVar10 = (uint *)param_1[5];
    if (1 < *puVar10) {
      FUN_1004c35a0(param_1 + 5,puVar10[1]);
      puVar10 = (uint *)param_1[5];
    }
    if (puVar10 + (long)(int)puVar10[3] * 2 + 4 == local_38) {
      puVar10 = (uint *)*plVar1;
      if (1 < *puVar10) {
        FUN_1004c3740(plVar1);
        puVar10 = (uint *)*plVar1;
      }
      puVar7 = *(uint **)(puVar10 + 4);
      puVar15 = (uint *)0x0;
      if (*(uint **)(puVar10 + 4) == (uint *)0x0) {
        puVar11 = puVar10 + 2;
LAB_1004c2dcc:
        lVar9 = QMapDataBase::createNode
                          ((int)puVar10,0x28,(QMapNodeBase *)&DAT_00000008,SUB81(puVar11,0));
        *(int *)(lVar9 + 0x18) = iVar12;
        *(long *)(lVar9 + 0x20) = param_2;
      }
      else {
        do {
          while (puVar11 = puVar7, uVar14 = puVar11[6], (int)uVar14 < iVar12) {
            puVar7 = *(uint **)(puVar11 + 4);
            if (*(uint **)(puVar11 + 4) == (uint *)0x0) {
              if (puVar15 == (uint *)0x0) goto LAB_1004c2dcc;
              uVar14 = puVar15[6];
              goto LAB_1004c2db5;
            }
          }
          puVar7 = *(uint **)(puVar11 + 2);
          puVar15 = puVar11;
        } while (*(uint **)(puVar11 + 2) != (uint *)0x0);
LAB_1004c2db5:
        if (iVar12 < (int)uVar14) goto LAB_1004c2dcc;
        *(long *)(puVar15 + 8) = param_2;
      }
      uVar17 = 0xffffffff;
    }
    else {
      piVar8[3] = *(int *)(*(long *)local_38 + 0x10);
      uVar17 = 0;
    }
    QMutex::unlock();
  }
  bVar13 = false;
  if (local_58 != 0) {
    FUN_1004c07d0(param_1,local_58,local_60);
  }
LAB_1004c2e15:
  if (bVar13) {
    QMutex::unlock();
  }
  return uVar17;
}

