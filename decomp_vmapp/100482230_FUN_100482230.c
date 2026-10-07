
undefined1 FUN_100482230(long param_1,long param_2,long *param_3)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  void *pvVar8;
  undefined8 *puVar9;
  long lVar10;
  uint *puVar11;
  char *pcVar12;
  long lVar13;
  void *pvVar14;
  ulong uVar15;
  QArrayData *pQVar16;
  long lVar17;
  int iVar18;
  undefined8 *local_50;
  undefined4 local_48;
  int iStack_44;
  long *local_40;
  undefined1 local_31;
  
  uVar2 = *(ushort *)(param_2 + 0x14);
  local_40 = param_3;
  if (*(short *)(param_2 + 0x16) != 0) {
    if (0x30 < uVar2) {
      lVar7 = FUN_1002a6120(param_2,0,0);
      if (lVar7 == 0) {
        pcVar12 = "Corrupted guest buffer!";
LAB_100482401:
        FUN_1008e3970("TCHOST","ToolsCenterHost",0,pcVar12);
        return 0;
      }
      if (*(uint *)(lVar7 + 8) < 8) {
        pcVar12 = "Too small guest buffer!";
        goto LAB_100482401;
      }
      puVar9 = (undefined8 *)FUN_1002a6010(param_2);
      lVar10 = *param_3;
      lVar17 = *(long *)(lVar10 + 0x10);
      puVar9[5] = *(undefined8 *)(lVar10 + 0x28 + lVar17);
      puVar9[4] = *(undefined8 *)(lVar10 + 0x20 + lVar17);
      puVar9[3] = *(undefined8 *)(lVar10 + 0x18 + lVar17);
      puVar9[2] = *(undefined8 *)(lVar10 + 0x10 + lVar17);
      uVar4 = *(undefined8 *)(lVar10 + lVar17);
      puVar9[1] = *(undefined8 *)(lVar10 + 8 + lVar17);
      *puVar9 = uVar4;
      lVar10 = *param_3;
      uVar6 = *(int *)(lVar10 + 4) - 0x30;
      lVar10 = *(long *)(lVar10 + 0x10) + 0x30 + lVar10;
      if (*(uint *)(lVar7 + 8) <= uVar6) {
        FUN_1002a5a50(lVar7,0,lVar10);
        iVar3 = *(int *)(lVar7 + 8);
        iVar18 = iVar3 + -8;
        lVar10 = FUN_1002a6010(param_2);
        *(int *)(lVar10 + 0x28) = iVar3;
        puVar11 = (uint *)*param_3;
        if ((1 < *puVar11) || (*(long *)(puVar11 + 4) != 0x18)) {
          QByteArray::reallocData(param_3,puVar11[1] + 1,puVar11[2] >> 0x1f);
          puVar11 = (uint *)*param_3;
        }
        _local_48 = CONCAT44(iVar18,(int)*(undefined8 *)
                                          (*(long *)(puVar11 + 4) + 0x30 + (long)puVar11));
        FUN_1002a5a50(lVar7,0,&local_48,8);
        goto LAB_10048252b;
      }
      FUN_1002a5a50(lVar7,0,lVar10,uVar6);
      goto LAB_1004826f5;
    }
    FUN_100495ce0(param_1 + 0x58,&local_40);
    if (param_3 == (long *)0x0) {
      return 0;
    }
    pQVar16 = (QArrayData *)param_3[1];
    if (*(int *)pQVar16 != -1) {
      if (*(int *)pQVar16 != 0) {
        LOCK();
        *(int *)pQVar16 = *(int *)pQVar16 + -1;
        local_31 = *(int *)pQVar16 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1004822b1;
        pQVar16 = (QArrayData *)param_3[1];
      }
      QArrayData::deallocate(pQVar16,2,8);
    }
LAB_1004822b1:
    pQVar16 = (QArrayData *)*param_3;
    if (*(int *)pQVar16 != -1) {
      if (*(int *)pQVar16 != 0) {
        LOCK();
        *(int *)pQVar16 = *(int *)pQVar16 + -1;
        local_31 = *(int *)pQVar16 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100482371;
        pQVar16 = (QArrayData *)*param_3;
      }
      QArrayData::deallocate(pQVar16,1,8);
    }
LAB_100482371:
    operator_delete(param_3);
    return 0;
  }
  if (uVar2 < 0x39) {
    FUN_100495ce0(param_1 + 0x58,&local_40);
    if (param_3 == (long *)0x0) {
      return 0;
    }
    pQVar16 = (QArrayData *)param_3[1];
    if (*(int *)pQVar16 != -1) {
      if (*(int *)pQVar16 != 0) {
        LOCK();
        *(int *)pQVar16 = *(int *)pQVar16 + -1;
        local_31 = *(int *)pQVar16 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100482341;
        pQVar16 = (QArrayData *)param_3[1];
      }
      QArrayData::deallocate(pQVar16,2,8);
    }
LAB_100482341:
    pQVar16 = (QArrayData *)*param_3;
    if (*(int *)pQVar16 != -1) {
      if (*(int *)pQVar16 != 0) {
        LOCK();
        *(int *)pQVar16 = *(int *)pQVar16 + -1;
        local_31 = *(int *)pQVar16 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100482371;
        pQVar16 = (QArrayData *)*param_3;
      }
      QArrayData::deallocate(pQVar16,1,8);
    }
    goto LAB_100482371;
  }
  iVar18 = *(int *)(*param_3 + 4);
  pvVar8 = (void *)FUN_1002a6010(param_2);
  lVar7 = *param_3;
  pvVar14 = (void *)(*(long *)(lVar7 + 0x10) + lVar7);
  if (iVar18 < (int)(uint)uVar2) {
    _memcpy(pvVar8,pvVar14,(long)*(int *)(lVar7 + 4));
LAB_1004826f5:
    FUN_100495ce0(param_1 + 0x58,&local_40);
  }
  else {
    _memcpy(pvVar8,pvVar14,(ulong)*(ushort *)(param_2 + 0x14));
    uVar2 = *(ushort *)(param_2 + 0x14);
    iVar18 = uVar2 - 0x38;
    lVar7 = FUN_1002a6010(param_2);
    *(uint *)(lVar7 + 0x28) = uVar2 - 0x30;
    *(int *)(lVar7 + 0x34) = iVar18;
LAB_10048252b:
    if (iVar18 == 0) goto LAB_1004826f5;
    puVar11 = (uint *)*param_3;
    if ((1 < *puVar11) || (*(long *)(puVar11 + 4) != 0x18)) {
      QByteArray::reallocData(param_3,puVar11[1] + 1,puVar11[2] >> 0x1f);
      puVar11 = (uint *)*param_3;
    }
    lVar7 = *(long *)(puVar11 + 4);
    piVar1 = (int *)(lVar7 + 0x28 + (long)puVar11);
    *piVar1 = *piVar1 - iVar18;
    piVar1 = (int *)(lVar7 + 0x34 + (long)puVar11);
    *piVar1 = *piVar1 - iVar18;
    iVar3 = *(int *)(*param_3 + 4);
    puVar9 = operator_new(0x10);
    puVar5 = PTR_shared_null_100ba20d0;
    *puVar9 = PTR_shared_null_100ba20d0;
    puVar9[1] = puVar5;
    local_50 = puVar9;
    QByteArray::resize((int)puVar9);
    QString::operator=((QString *)(puVar9 + 1),(QString *)(param_3 + 1));
    puVar11 = (uint *)*puVar9;
    if ((1 < *puVar11) || (*(long *)(puVar11 + 4) != 0x18)) {
      QByteArray::reallocData(puVar9,puVar11[1] + 1,puVar11[2] >> 0x1f);
      puVar11 = (uint *)*puVar9;
    }
    lVar7 = *(long *)(puVar11 + 4);
    lVar10 = *param_3;
    lVar17 = *(long *)(lVar10 + 0x10);
    *(undefined8 *)((long)puVar11 + lVar7 + 0x30) = *(undefined8 *)(lVar10 + 0x30 + lVar17);
    *(undefined8 *)((long)puVar11 + lVar7 + 0x28) = *(undefined8 *)(lVar10 + 0x28 + lVar17);
    *(undefined8 *)((long)puVar11 + lVar7 + 0x20) = *(undefined8 *)(lVar10 + 0x20 + lVar17);
    *(undefined8 *)((long)puVar11 + lVar7 + 0x18) = *(undefined8 *)(lVar10 + 0x18 + lVar17);
    *(undefined8 *)((long)puVar11 + lVar7 + 0x10) = *(undefined8 *)(lVar10 + 0x10 + lVar17);
    uVar4 = *(undefined8 *)(lVar10 + lVar17);
    *(undefined8 *)((long)puVar11 + lVar7 + 8) = *(undefined8 *)(lVar10 + 8 + lVar17);
    *(undefined8 *)((long)puVar11 + lVar7) = uVar4;
    puVar11 = (uint *)*puVar9;
    if ((1 < *puVar11) || (*(long *)(puVar11 + 4) != 0x18)) {
      QByteArray::reallocData(puVar9,puVar11[1] + 1,puVar11[2] >> 0x1f);
      puVar11 = (uint *)*puVar9;
    }
    _memcpy((void *)(*(long *)(puVar11 + 4) + 0x38 + (long)puVar11),
            (void *)((ulong)*(ushort *)(param_2 + 0x14) + *(long *)(*param_3 + 0x10) + *param_3),
            (ulong)((iVar3 - iVar18) - 0x38));
    lVar7 = *(long *)(param_1 + 0x58);
    lVar10 = (long)*(int *)(lVar7 + 8);
    uVar15 = 0xffffffff;
    if (*(int *)(lVar7 + 8) < *(int *)(lVar7 + 0xc)) {
      lVar17 = lVar7 + 8 + lVar10 * 8;
      lVar13 = (long)*(int *)(lVar7 + 0xc) * 8 + lVar10 * -8;
      do {
        if (lVar13 == 0) goto LAB_1004826d1;
        lVar13 = lVar13 + -8;
        puVar9 = (undefined8 *)(lVar17 + 8);
        lVar17 = lVar17 + 8;
      } while ((long *)*puVar9 != param_3);
      uVar15 = (ulong)(lVar17 - (lVar7 + 0x10 + lVar10 * 8)) >> 3 & 0xffffffff;
    }
LAB_1004826d1:
    FUN_100495e30(param_1 + 0x58,uVar15,&local_50);
    FUN_100495ce0(param_1 + 0x58,&local_40);
    if (param_3 == (long *)0x0) {
      return 1;
    }
  }
  pQVar16 = (QArrayData *)param_3[1];
  if (*(int *)pQVar16 != -1) {
    if (*(int *)pQVar16 != 0) {
      LOCK();
      *(int *)pQVar16 = *(int *)pQVar16 + -1;
      local_31 = *(int *)pQVar16 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10048273b;
      pQVar16 = (QArrayData *)param_3[1];
    }
    QArrayData::deallocate(pQVar16,2,8);
  }
LAB_10048273b:
  pQVar16 = (QArrayData *)*param_3;
  if (*(int *)pQVar16 != -1) {
    if (*(int *)pQVar16 != 0) {
      LOCK();
      *(int *)pQVar16 = *(int *)pQVar16 + -1;
      local_31 = *(int *)pQVar16 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10048276b;
      pQVar16 = (QArrayData *)*param_3;
    }
    QArrayData::deallocate(pQVar16,1,8);
  }
LAB_10048276b:
  operator_delete(param_3);
  return 1;
}

