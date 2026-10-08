
undefined8 * FUN_10041f060(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong *puVar8;
  int *piVar9;
  QMapNodeBase *local_40;
  
  if (DAT_102273fe4 == 0) {
    DAT_102273fe4 = FUN_10041f4a0("CMemoryEditor::InitMemParams",0xffffffffffffffff,1);
  }
  uVar3 = DAT_102273fe4;
  uVar5 = QVariant::userType();
  puVar2 = PTR_shared_null_1021e12f0;
  if (uVar3 == uVar5) {
    puVar6 = (undefined8 *)QVariant::constData();
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(puVar6 + 2);
    uVar1 = *puVar6;
    param_1[1] = puVar6[1];
    *param_1 = uVar1;
    piVar9 = (int *)puVar6[3];
    if (*piVar9 != 0) {
      if (*piVar9 != -1) {
        LOCK();
        *piVar9 = *piVar9 + 1;
        UNLOCK();
        piVar9 = (int *)puVar6[3];
      }
      param_1[3] = piVar9;
      return param_1;
    }
    lVar7 = QMapDataBase::createData();
    param_1[3] = lVar7;
    if (*(long *)(puVar6[3] + 0x10) == 0) {
      return param_1;
    }
    puVar8 = (ulong *)FUN_1001411c0(*(long *)(puVar6[3] + 0x10),lVar7);
    *(ulong **)(lVar7 + 0x10) = puVar8;
    *puVar8 = *puVar8 & 3 | lVar7 + 8U;
    QMapDataBase::recalcMostLeftNode();
    return param_1;
  }
  if (*(int *)PTR_shared_null_1021e12f0 == -1) {
LAB_10041f204:
    local_40 = (QMapNodeBase *)puVar2;
  }
  else {
    if (*(int *)PTR_shared_null_1021e12f0 != 0) {
      LOCK();
      *(int *)PTR_shared_null_1021e12f0 = *(int *)PTR_shared_null_1021e12f0 + 1;
      UNLOCK();
      goto LAB_10041f204;
    }
    local_40 = (QMapNodeBase *)QMapDataBase::createData();
    if (*(long *)(puVar2 + 0x10) != 0) {
      puVar8 = (ulong *)FUN_1001411c0(*(long *)(puVar2 + 0x10),local_40);
      *(ulong **)(local_40 + 0x10) = puVar8;
      *puVar8 = *puVar8 & 3 | (ulong)(local_40 + 8);
      QMapDataBase::recalcMostLeftNode();
    }
  }
  if (*(int *)puVar2 != -1) {
    if (*(int *)puVar2 != 0) {
      LOCK();
      *(int *)puVar2 = *(int *)puVar2 + -1;
      UNLOCK();
      if (*(int *)puVar2 != 0) goto LAB_10041f24c;
    }
    if (*(long *)(puVar2 + 0x10) != 0) {
      QMapDataBase::freeTree
                ((QMapNodeBase *)PTR_shared_null_1021e12f0,(int)*(long *)(puVar2 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)PTR_shared_null_1021e12f0);
  }
LAB_10041f24c:
  cVar4 = QVariant::convert(param_2,(void *)(ulong)uVar3);
  if (cVar4 != '\0') {
    *(undefined4 *)(param_1 + 2) = 0;
    param_1[1] = 0;
    *param_1 = 0;
    if (*(int *)local_40 == 0) {
      lVar7 = QMapDataBase::createData();
      param_1[3] = lVar7;
      if (*(long *)(local_40 + 0x10) != 0) {
        puVar8 = (ulong *)FUN_1001411c0(*(long *)(local_40 + 0x10),lVar7);
        *(ulong **)(lVar7 + 0x10) = puVar8;
        *puVar8 = *puVar8 & 3 | lVar7 + 8U;
        QMapDataBase::recalcMostLeftNode();
      }
    }
    else {
      if (*(int *)local_40 != -1) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + 1;
        UNLOCK();
      }
      param_1[3] = local_40;
    }
    goto LAB_10041f3f9;
  }
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[1] = 0;
  *param_1 = 0;
  if (*(int *)puVar2 == -1) {
LAB_10041f3b1:
    param_1[3] = puVar2;
  }
  else {
    if (*(int *)puVar2 != 0) {
      LOCK();
      *(int *)puVar2 = *(int *)puVar2 + 1;
      UNLOCK();
      goto LAB_10041f3b1;
    }
    lVar7 = QMapDataBase::createData();
    param_1[3] = lVar7;
    if (*(long *)(puVar2 + 0x10) != 0) {
      puVar8 = (ulong *)FUN_1001411c0(*(long *)(puVar2 + 0x10),lVar7);
      *(ulong **)(lVar7 + 0x10) = puVar8;
      *puVar8 = *puVar8 & 3 | lVar7 + 8U;
      QMapDataBase::recalcMostLeftNode();
    }
  }
  if (*(int *)puVar2 != -1) {
    if (*(int *)puVar2 != 0) {
      LOCK();
      *(int *)puVar2 = *(int *)puVar2 + -1;
      UNLOCK();
      if (*(int *)puVar2 != 0) goto LAB_10041f3f9;
    }
    if (*(long *)(puVar2 + 0x10) != 0) {
      QMapDataBase::freeTree
                ((QMapNodeBase *)PTR_shared_null_1021e12f0,(int)*(long *)(puVar2 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)PTR_shared_null_1021e12f0);
  }
LAB_10041f3f9:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return param_1;
      }
    }
    if (*(long *)(local_40 + 0x10) != 0) {
      QMapDataBase::freeTree(local_40,(int)*(long *)(local_40 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)local_40);
  }
  return param_1;
}

