
undefined1 FUN_100030750(long param_1,int param_2,char *param_3,int param_4)

{
  short sVar1;
  uint uVar2;
  ulong uVar3;
  char cVar4;
  uint uVar5;
  undefined4 *puVar6;
  QArrayData *pQVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined4 *puVar12;
  uint uVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined1 uVar17;
  QArrayData *pQVar18;
  ulong uVar19;
  char *pcVar20;
  QArrayData *local_68;
  QArrayData *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_31;
  
  puVar6 = (undefined4 *)FUN_1000e99d0(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x1158),0x67,0);
  if (puVar6 == (undefined4 *)0x0) {
    return 0;
  }
  local_60 = (QArrayData *)PTR_shared_null_100ba20d0;
  if (0 < param_2) {
    uVar13 = *(uint *)(PTR_shared_null_100ba20d0 + 4);
    lVar10 = 0;
    pQVar18 = (QArrayData *)PTR_shared_null_100ba20d0;
    pcVar20 = param_3;
    do {
      uVar5 = uVar13 + 1;
      uVar8 = *(uint *)(pQVar18 + 8) & 0x7fffffff;
      if ((*(uint *)pQVar18 < 2) && (uVar5 <= uVar8)) {
        pQVar7 = pQVar18 + *(long *)(pQVar18 + 0x10);
        lVar9 = (long)(int)uVar13 * 0x20;
        *(undefined8 *)(pQVar7 + lVar9 + 0x18) = *(undefined8 *)(pcVar20 + 0x18);
        *(undefined8 *)(pQVar7 + lVar9 + 0x10) = *(undefined8 *)(pcVar20 + 0x10);
        uVar14 = *(undefined8 *)pcVar20;
        uVar16 = *(undefined8 *)(pcVar20 + 8);
      }
      else {
        local_58 = *(undefined8 *)pcVar20;
        local_50 = *(undefined8 *)(pcVar20 + 8);
        local_48 = *(undefined8 *)(pcVar20 + 0x10);
        local_40 = *(undefined8 *)(pcVar20 + 0x18);
        uVar2 = uVar8;
        if (uVar8 < uVar5) {
          uVar2 = uVar5;
        }
        FUN_100032120(&local_60,uVar13,uVar2,(ulong)(uVar8 < uVar5) << 3);
        pQVar7 = local_60 + *(long *)(local_60 + 0x10);
        lVar9 = (long)(int)*(uint *)(local_60 + 4) * 0x20;
        *(undefined8 *)(pQVar7 + lVar9 + 0x18) = local_40;
        *(undefined8 *)(pQVar7 + lVar9 + 0x10) = local_48;
        pQVar18 = local_60;
        uVar14 = local_58;
        uVar16 = local_50;
      }
      *(undefined8 *)(pQVar7 + lVar9 + 8) = uVar16;
      *(undefined8 *)(pQVar7 + lVar9) = uVar14;
      uVar13 = *(uint *)(pQVar18 + 4) + 1;
      *(uint *)(pQVar18 + 4) = uVar13;
      lVar10 = lVar10 + 1;
      pcVar20 = pcVar20 + 0x20;
    } while (lVar10 < param_2);
  }
  if (1 < *(uint *)local_60) {
    if ((*(uint *)(local_60 + 8) & 0x7fffffff) == 0) {
      local_60 = (QArrayData *)QArrayData::allocate(0x20,8,0,2);
    }
    else {
      FUN_100032120(&local_60,*(uint *)(local_60 + 4),*(uint *)(local_60 + 8) & 0x7fffffff,0);
    }
  }
  pQVar18 = local_60 + *(long *)(local_60 + 0x10);
  if (1 < *(uint *)local_60) {
    if ((*(uint *)(local_60 + 8) & 0x7fffffff) == 0) {
      local_60 = (QArrayData *)QArrayData::allocate(0x20,8,0,2);
    }
    else {
      FUN_100032120(&local_60,*(uint *)(local_60 + 4),*(uint *)(local_60 + 8) & 0x7fffffff,0);
    }
  }
  pQVar7 = local_60;
  if (pQVar18 != local_60 + (long)(int)*(uint *)(local_60 + 4) * 0x20 + *(long *)(local_60 + 0x10))
  {
    FUN_100032300(pQVar18,local_60 +
                          (long)(int)*(uint *)(local_60 + 4) * 0x20 + *(long *)(local_60 + 0x10),
                  pQVar18,FUN_100031210);
  }
  uVar15 = (ulong)*(uint *)(pQVar7 + 4);
  lVar10 = 0;
  if (0 < (int)*(uint *)(pQVar7 + 4)) {
    lVar9 = 0;
    do {
      if (1 < *(uint *)pQVar7) {
        if ((*(uint *)(pQVar7 + 8) & 0x7fffffff) == 0) {
          pQVar7 = (QArrayData *)QArrayData::allocate(0x20,8,0,2);
          local_60 = pQVar7;
        }
        else {
          FUN_100032120(&local_60,uVar15,*(uint *)(pQVar7 + 8) & 0x7fffffff,0);
          pQVar7 = local_60;
        }
      }
      *(short *)(pQVar7 + lVar10 + *(long *)(pQVar7 + 0x10)) = (short)lVar9;
      lVar9 = lVar9 + 1;
      uVar15 = (ulong)(int)*(uint *)(local_60 + 4);
      lVar10 = lVar10 + 0x20;
      pQVar7 = local_60;
    } while (lVar9 < (long)uVar15);
  }
  cVar4 = FUN_100031110();
  if (cVar4 == '\0') {
    if (DAT_1011b55f8 < 1) {
      uVar17 = 0;
    }
    else {
      uVar17 = 0;
      FUN_1008e3970("DYNRESHOST","vm",1,
                    "Cannot set guest display configuration: input display cfg is invalid");
    }
    goto LAB_100030cd9;
  }
  QMutex::lock();
  if (*(int *)(param_1 + 0x44) == 0) {
    if (0 < DAT_1011b55f8) {
      FUN_1008e3970("DYNRESHOST","vm",1,
                    "Cannot set guest display configuration: DynRes tool disabled");
    }
    if (param_4 == 1) {
      if (0 < DAT_1011b55f8) {
        FUN_1008e3970("DYNRESHOST","vm",1,
                      "SAVE Coherence display config. It will be applied after DynRes becomes enabled"
                     );
      }
      QByteArray::QByteArray((QByteArray *)&local_68,param_3,param_2 << 5);
      QByteArray::operator=((QByteArray *)(param_1 + 0x268),(QByteArray *)&local_68);
      if (*(int *)local_68 == -1) {
        uVar17 = 0;
      }
      else {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_31) {
            uVar17 = 0;
            goto LAB_100030cc9;
          }
        }
        QArrayData::deallocate(local_68,1,8);
        uVar17 = 0;
      }
    }
    else {
      uVar17 = 0;
    }
  }
  else {
    uVar15 = (ulong)(int)*(uint *)(pQVar7 + 4);
    if ((long)uVar15 < 0x11) {
      lVar10 = *(long *)(pQVar7 + 0x10);
      *(uint *)(param_1 + 0x58) = *(uint *)(pQVar7 + 4);
      _memcpy((void *)(param_1 + 0x5c),pQVar7 + lVar10,uVar15 << 5);
      *(undefined1 *)(param_1 + 0x25c) = 0;
      *(int *)(param_1 + 0x260) = *(int *)(param_1 + 0x260) + 1;
      if (0 < DAT_1011b55f8) {
        FUN_1008e3970("DYNRESHOST","vm",1,
                      "Initiate guest display configuration changing (cfg Id = %d):");
        uVar15 = (ulong)*(uint *)(param_1 + 0x58);
      }
      uVar13 = 1;
      uVar11 = 0;
      if (0 < (int)uVar15) {
        puVar12 = (undefined4 *)(param_1 + 0x78);
        uVar19 = 0;
        uVar11 = 0;
        uVar13 = 0;
        do {
          sVar1 = *(short *)(puVar12 + -7);
          uVar3 = uVar19;
          if (sVar1 != 0) {
            uVar3 = uVar11;
          }
          uVar11 = uVar3 & 0xffffffff;
          if (0 < DAT_1011b55f8) {
            FUN_1008e3970("DYNRESHOST","vm",1,"  Display [%d]: Pos=[%d;%d] W=%d; H=%d DPI=%d",sVar1,
                          puVar12[-1],*puVar12,*(undefined2 *)(puVar12 + -6),
                          *(undefined2 *)((long)puVar12 + -0x16),
                          *(undefined2 *)((long)puVar12 + -10));
            uVar15 = (ulong)*(uint *)(param_1 + 0x58);
          }
          uVar13 = uVar13 | 1 << ((byte)sVar1 & 0x1f);
          uVar19 = uVar19 + 1;
          puVar12 = puVar12 + 8;
        } while ((long)uVar19 < (long)(int)uVar15);
        uVar13 = uVar13 | 1;
      }
      lVar10 = FUN_100097250(*(undefined8 *)(param_1 + 0x38));
      *(uint *)(lVar10 + 0x9834) = uVar13;
      puVar6[1] = CONCAT22(*(undefined2 *)(param_3 + uVar11 * 0x20 + 4),
                           *(undefined2 *)(param_3 + uVar11 * 0x20 + 6));
      *puVar6 = 1;
      *(int *)(param_1 + 0x280) = param_4;
      uVar17 = 1;
    }
    else {
      uVar17 = 0;
    }
  }
LAB_100030cc9:
  QMutex::unlock();
  pQVar7 = local_60;
LAB_100030cd9:
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      local_31 = *(int *)pQVar7 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return uVar17;
      }
    }
    QArrayData::deallocate(pQVar7,0x20,8);
  }
  return uVar17;
}

