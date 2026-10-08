
long * FUN_10041e950(long *param_1,int param_2)

{
  undefined *puVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  ulong *puVar7;
  int *piVar8;
  QMapNodeBase *local_38;
  
  if (DAT_102273fe0 == 0) {
    DAT_102273fe0 = FUN_10041ed50("CSupportedOses",0xffffffffffffffff,1);
  }
  uVar2 = DAT_102273fe0;
  uVar4 = QVariant::userType();
  puVar1 = PTR_shared_null_1021e12f0;
  if (uVar2 == uVar4) {
    plVar5 = (long *)QVariant::constData();
    piVar8 = (int *)*plVar5;
    if (*piVar8 != 0) {
      if (*piVar8 != -1) {
        LOCK();
        *piVar8 = *piVar8 + 1;
        UNLOCK();
        piVar8 = (int *)*plVar5;
      }
      *param_1 = (long)piVar8;
      return param_1;
    }
    lVar6 = QMapDataBase::createData();
    *param_1 = lVar6;
    if (*(long *)(*plVar5 + 0x10) == 0) {
      return param_1;
    }
    puVar7 = (ulong *)FUN_100137920(*(long *)(*plVar5 + 0x10),lVar6);
    *(ulong **)(lVar6 + 0x10) = puVar7;
    *puVar7 = *puVar7 & 3 | lVar6 + 8U;
    QMapDataBase::recalcMostLeftNode();
    return param_1;
  }
  if (*(int *)PTR_shared_null_1021e12f0 == -1) {
LAB_10041eacb:
    local_38 = (QMapNodeBase *)puVar1;
  }
  else {
    if (*(int *)PTR_shared_null_1021e12f0 != 0) {
      LOCK();
      *(int *)PTR_shared_null_1021e12f0 = *(int *)PTR_shared_null_1021e12f0 + 1;
      UNLOCK();
      goto LAB_10041eacb;
    }
    local_38 = (QMapNodeBase *)QMapDataBase::createData();
    if (*(long *)(puVar1 + 0x10) != 0) {
      puVar7 = (ulong *)FUN_100137920(*(long *)(puVar1 + 0x10),local_38);
      *(ulong **)(local_38 + 0x10) = puVar7;
      *puVar7 = *puVar7 & 3 | (ulong)(local_38 + 8);
      QMapDataBase::recalcMostLeftNode();
    }
  }
  if (*(int *)puVar1 != -1) {
    if (*(int *)puVar1 != 0) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (*(int *)puVar1 != 0) goto LAB_10041eb15;
    }
    if (*(long *)(puVar1 + 0x10) != 0) {
      FUN_100137f10();
      QMapDataBase::freeTree((QMapNodeBase *)puVar1,(int)*(undefined8 *)(puVar1 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)PTR_shared_null_1021e12f0);
  }
LAB_10041eb15:
  cVar3 = QVariant::convert(param_2,(void *)(ulong)uVar2);
  if (cVar3 != '\0') {
    if (*(int *)local_38 == 0) {
      lVar6 = QMapDataBase::createData();
      *param_1 = lVar6;
      if (*(long *)(local_38 + 0x10) != 0) {
        puVar7 = (ulong *)FUN_100137920(*(long *)(local_38 + 0x10),lVar6);
        *(ulong **)(lVar6 + 0x10) = puVar7;
        *puVar7 = *puVar7 & 3 | lVar6 + 8U;
        QMapDataBase::recalcMostLeftNode();
      }
    }
    else {
      if (*(int *)local_38 != -1) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + 1;
        UNLOCK();
      }
      *param_1 = (long)local_38;
    }
    goto LAB_10041ec92;
  }
  if (*(int *)puVar1 == -1) {
LAB_10041ec49:
    *param_1 = (long)puVar1;
  }
  else {
    if (*(int *)puVar1 != 0) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + 1;
      UNLOCK();
      goto LAB_10041ec49;
    }
    lVar6 = QMapDataBase::createData();
    *param_1 = lVar6;
    if (*(long *)(puVar1 + 0x10) != 0) {
      puVar7 = (ulong *)FUN_100137920(*(long *)(puVar1 + 0x10),lVar6);
      *(ulong **)(lVar6 + 0x10) = puVar7;
      *puVar7 = *puVar7 & 3 | lVar6 + 8U;
      QMapDataBase::recalcMostLeftNode();
    }
  }
  if (*(int *)puVar1 != -1) {
    if (*(int *)puVar1 != 0) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (*(int *)puVar1 != 0) goto LAB_10041ec92;
    }
    if (*(long *)(puVar1 + 0x10) != 0) {
      FUN_100137f10();
      QMapDataBase::freeTree((QMapNodeBase *)puVar1,(int)*(undefined8 *)(puVar1 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)PTR_shared_null_1021e12f0);
  }
LAB_10041ec92:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return param_1;
      }
    }
    if (*(long *)(local_38 + 0x10) != 0) {
      FUN_100137f10();
      QMapDataBase::freeTree(local_38,(int)*(undefined8 *)(local_38 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)local_38);
  }
  return param_1;
}

