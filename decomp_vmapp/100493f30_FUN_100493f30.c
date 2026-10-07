
void FUN_100493f30(long param_1,undefined8 *param_2)

{
  long *plVar1;
  uint *puVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  Data *pDVar9;
  long lVar10;
  undefined8 *puVar11;
  QArrayData *pQVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  uint *puVar17;
  QArrayData *pQVar18;
  uint *puVar19;
  QArrayData *local_40;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_31;
  
  QMutex::lock();
  local_40 = (QArrayData *)PTR_shared_null_100ba20d0;
  iVar13 = *(int *)(*(long *)(param_1 + 0x48) + 0xc) - *(int *)(*(long *)(param_1 + 0x48) + 8);
  if ((int)(*(uint *)(PTR_shared_null_100ba20d0 + 8) & 0x7fffffff) < iVar13) {
    FUN_100496bd0(&local_40,*(undefined4 *)(PTR_shared_null_100ba20d0 + 4),iVar13,0);
  }
  pQVar12 = local_40;
  plVar1 = (long *)(param_1 + 0x48);
  if (*(uint *)local_40 < 2) {
    local_40[0xb] = (QArrayData)((byte)local_40[0xb] | 0x80);
  }
  puVar19 = (uint *)*plVar1;
  if (1 < *puVar19) {
    uVar3 = puVar19[2];
    pDVar9 = (Data *)QListData::detach((int)plVar1);
    lVar4 = *plVar1;
    lVar10 = (long)*(int *)(lVar4 + 8);
    puVar17 = (uint *)(lVar4 + 0x10 + lVar10 * 8);
    if ((puVar19 + (long)(int)uVar3 * 2 + 4 != puVar17) &&
       (lVar16 = *(int *)(lVar4 + 0xc) - lVar10, lVar16 != 0 && lVar10 <= *(int *)(lVar4 + 0xc))) {
      _memcpy(puVar17,puVar19 + (long)(int)uVar3 * 2 + 4,lVar16 * 8);
    }
    if (*(int *)pDVar9 != -1) {
      if (*(int *)pDVar9 != 0) {
        LOCK();
        *(int *)pDVar9 = *(int *)pDVar9 + -1;
        local_34 = *(int *)pDVar9 != 0;
        UNLOCK();
        if ((bool)local_34) goto LAB_10049402e;
      }
      QListData::dispose(pDVar9);
    }
  }
LAB_10049402e:
  puVar17 = (uint *)*plVar1;
  puVar19 = puVar17 + (long)(int)puVar17[2] * 2 + 4;
  bVar7 = false;
  do {
    if (1 < *puVar17) {
      uVar3 = puVar17[2];
      pDVar9 = (Data *)QListData::detach((int)plVar1);
      lVar4 = *plVar1;
      lVar10 = (long)*(int *)(lVar4 + 8);
      puVar2 = (uint *)(lVar4 + 0x10 + lVar10 * 8);
      if ((puVar17 + (long)(int)uVar3 * 2 + 4 != puVar2) &&
         (lVar16 = *(int *)(lVar4 + 0xc) - lVar10, lVar16 != 0 && lVar10 <= *(int *)(lVar4 + 0xc)))
      {
        _memcpy(puVar2,puVar17 + (long)(int)uVar3 * 2 + 4,lVar16 * 8);
      }
      if (*(int *)pDVar9 != -1) {
        if (*(int *)pDVar9 != 0) {
          LOCK();
          *(int *)pDVar9 = *(int *)pDVar9 + -1;
          local_33 = *(int *)pDVar9 != 0;
          UNLOCK();
          if ((bool)local_33) goto LAB_1004940d0;
        }
        QListData::dispose(pDVar9);
      }
    }
LAB_1004940d0:
    if ((uint *)(*plVar1 + 0x10 + (long)*(int *)(*plVar1 + 0xc) * 8) == puVar19) {
      FUN_100036f60(plVar1);
      if (!bVar7) {
        FUN_100494530(param_1,param_2);
      }
      QMutex::unlock();
      if (1 < *(uint *)pQVar12) {
        if ((*(uint *)(pQVar12 + 8) & 0x7fffffff) == 0) {
          pQVar12 = (QArrayData *)QArrayData::allocate(0x10,8,0,2);
          local_40 = pQVar12;
        }
        else {
          FUN_100496bd0(&local_40,*(uint *)(pQVar12 + 4),*(uint *)(pQVar12 + 8) & 0x7fffffff,0);
          pQVar12 = local_40;
        }
      }
      pQVar18 = pQVar12 + *(long *)(pQVar12 + 0x10);
      while( true ) {
        if (1 < *(uint *)pQVar12) {
          if ((*(uint *)(pQVar12 + 8) & 0x7fffffff) == 0) {
            pQVar12 = (QArrayData *)QArrayData::allocate(0x10,8,0,2);
            local_40 = pQVar12;
          }
          else {
            FUN_100496bd0(&local_40,*(uint *)(pQVar12 + 4),*(uint *)(pQVar12 + 8) & 0x7fffffff,0);
            pQVar12 = local_40;
          }
        }
        if (pQVar18 == pQVar12 + (long)*(int *)(pQVar12 + 4) * 0x10 + *(long *)(pQVar12 + 0x10))
        break;
        FUN_1004c07d0(param_1 + 0x10,*(undefined8 *)pQVar18,*(undefined4 *)(pQVar18 + 8));
        pQVar18 = pQVar18 + 0x10;
      }
      if (*(int *)pQVar12 != -1) {
        if (*(int *)pQVar12 != 0) {
          LOCK();
          *(int *)pQVar12 = *(int *)pQVar12 + -1;
          local_31 = *(int *)pQVar12 != 0;
          UNLOCK();
          if ((bool)local_31) {
            return;
          }
        }
        QArrayData::deallocate(pQVar12,0x10,8);
      }
      return;
    }
    uVar5 = *(undefined8 *)puVar19;
    puVar11 = (undefined8 *)FUN_1002a6010(uVar5);
    if (puVar11 == (undefined8 *)0x0) {
      uVar3 = *(uint *)(pQVar12 + 4);
      uVar8 = uVar3 + 1;
      uVar14 = *(uint *)(pQVar12 + 8) & 0x7fffffff;
      if ((*(uint *)pQVar12 < 2) && (uVar8 <= uVar14)) {
        lVar4 = *(long *)(pQVar12 + 0x10);
        lVar10 = (long)(int)uVar3 * 0x10;
        *(undefined8 *)(pQVar12 + lVar10 + lVar4) = uVar5;
        *(undefined4 *)(pQVar12 + lVar10 + 8 + lVar4) = 0xf0000000;
      }
      else {
        uVar15 = uVar14;
        if (uVar14 < uVar8) {
          uVar15 = uVar8;
        }
        FUN_100496bd0(&local_40,(long)(int)uVar3,uVar15,(ulong)(uVar14 < uVar8) << 3);
        lVar4 = *(long *)(local_40 + 0x10);
        uVar3 = *(uint *)(local_40 + 4);
        *(undefined8 *)(local_40 + (long)(int)uVar3 * 0x10 + lVar4) = uVar5;
        *(undefined4 *)(local_40 + (long)(int)uVar3 * 0x10 + 8 + lVar4) = 0xf0000000;
      }
      *(uint *)(local_40 + 4) = *(uint *)(local_40 + 4) + 1;
    }
    else {
      uVar6 = *param_2;
      puVar11[1] = param_2[1];
      *puVar11 = uVar6;
      uVar3 = *(uint *)(pQVar12 + 4);
      uVar8 = uVar3 + 1;
      uVar14 = *(uint *)(pQVar12 + 8) & 0x7fffffff;
      if ((*(uint *)pQVar12 < 2) && (uVar8 <= uVar14)) {
        lVar4 = *(long *)(pQVar12 + 0x10);
        lVar10 = (long)(int)uVar3 * 0x10;
        *(undefined8 *)(pQVar12 + lVar10 + lVar4) = uVar5;
        *(undefined4 *)(pQVar12 + lVar10 + 8 + lVar4) = 0;
      }
      else {
        uVar15 = uVar14;
        if (uVar14 < uVar8) {
          uVar15 = uVar8;
        }
        FUN_100496bd0(&local_40,(long)(int)uVar3,uVar15,(ulong)(uVar14 < uVar8) << 3);
        lVar4 = *(long *)(local_40 + 0x10);
        uVar3 = *(uint *)(local_40 + 4);
        *(undefined8 *)(local_40 + (long)(int)uVar3 * 0x10 + lVar4) = uVar5;
        *(undefined4 *)(local_40 + (long)(int)uVar3 * 0x10 + 8 + lVar4) = 0;
      }
      *(uint *)(local_40 + 4) = *(uint *)(local_40 + 4) + 1;
      bVar7 = true;
    }
    puVar19 = puVar19 + 2;
    puVar17 = (uint *)*plVar1;
    pQVar12 = local_40;
  } while( true );
}

