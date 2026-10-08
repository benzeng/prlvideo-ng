
int FUN_1000b9840(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  int *piVar4;
  QMapNodeBase *pQVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  undefined4 *puVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  int *piVar14;
  QString *pQVar15;
  int *local_68;
  int *local_60;
  int *local_58;
  undefined1 local_50 [8];
  long *local_48;
  QMapNodeBase *local_40;
  undefined1 local_31;
  
  if (*(int *)(*param_2 + 0xc) == *(int *)(*param_2 + 8)) {
    return 0;
  }
  uVar8 = FUN_100152280();
  lVar9 = FUN_1001548f0(uVar8,param_1 + 0x10);
  if (lVar9 == 0) {
    return 0;
  }
  local_40 = (QMapNodeBase *)PTR_shared_null_1021e12f0;
  lVar11 = *param_2;
  if (*(int *)(lVar11 + 8) != *(int *)(lVar11 + 0xc)) {
    plVar12 = (long *)(lVar11 + 0x10 + (long)*(int *)(lVar11 + 8) * 8);
    do {
      lVar2 = *(long *)(*plVar12 + 8);
      if (*(int *)(lVar2 + 8) != *(int *)(lVar2 + 0xc)) {
        pQVar15 = (QString *)(lVar2 + 0x10 + (long)*(int *)(lVar2 + 8) * 8);
        do {
          cVar6 = QFile::exists(pQVar15);
          if (cVar6 != '\0') {
            puVar10 = (undefined4 *)FUN_1000bd960(&local_40,pQVar15);
            *puVar10 = 1;
          }
          pQVar15 = pQVar15 + 1;
        } while (pQVar15 !=
                 (QString *)
                 (*(long *)(*plVar12 + 8) + 0x10 + (long)*(int *)(*(long *)(*plVar12 + 8) + 0xc) * 8
                 ));
        lVar11 = *param_2;
      }
      plVar12 = plVar12 + 1;
    } while (plVar12 != (long *)(lVar11 + 0x10 + (long)*(int *)(lVar11 + 0xc) * 8));
  }
  plVar12 = operator_new(0x18);
  *plVar12 = (long)&PTR_FUN_10226cd50;
  plVar12[1] = param_1;
  FUN_1000b7180(plVar12 + 2,param_2);
  plVar13 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
  if (plVar13 == (long *)0x0) {
    plVar13 = (long *)0x0;
    (**(code **)(*plVar12 + 8))(plVar12);
  }
  else {
    *(undefined4 *)(plVar13 + 1) = 1;
    plVar13[2] = (long)plVar12;
    *plVar13 = (long)&PTR_FUN_10226ca80;
  }
  uVar8 = FUN_10018c280(lVar9);
  uVar8 = FUN_100319c30(uVar8);
  if (plVar13 != (long *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
  }
  local_48 = plVar13;
  FUN_1000bda20(local_50,&local_40);
  iVar7 = FUN_10032fa90(uVar8,&local_48,local_50);
  FUN_100039a80(local_50);
  if (local_48 != (long *)0x0) {
    LOCK();
    plVar12 = local_48 + 1;
    lVar9 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)(*local_48 + 0x10))();
    }
  }
  if (iVar7 == 0) goto LAB_1000b9afa;
  plVar12 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    plVar12 = (long *)plVar13[2];
  }
  pcVar3 = *(code **)(*plVar12 + 0x10);
  FUN_1000bda20(&local_68,&local_40);
  local_60 = local_68;
  if (*local_68 != -1) {
    if (*local_68 == 0) {
      QListData::detach((int)&local_60);
      iVar1 = local_60[2];
      if (iVar1 != local_60[3]) {
        local_68 = local_68 + (long)local_68[2] * 2 + 4;
        piVar14 = local_60 + (long)iVar1 * 2 + 4;
        lVar9 = (long)local_60[3] * 8 + (long)iVar1 * -8;
        do {
          piVar4 = *(int **)local_68;
          *(int **)piVar14 = piVar4;
          if (1 < *piVar4 + 1U) {
            LOCK();
            *piVar4 = *piVar4 + 1;
            local_31 = *piVar4 != 0;
            UNLOCK();
          }
          piVar14 = piVar14 + 2;
          local_68 = local_68 + 2;
          lVar9 = lVar9 + -8;
        } while (lVar9 != 0);
      }
    }
    else {
      LOCK();
      *local_68 = *local_68 + 1;
      local_31 = *local_68 != 0;
      UNLOCK();
    }
  }
  FUN_1000b95f0(&local_58,&local_60,1);
  (*pcVar3)(plVar12,iVar7,&local_58);
  if (*local_58 != -1) {
    if (*local_58 != 0) {
      LOCK();
      *local_58 = *local_58 + -1;
      local_31 = *local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000b9ae8;
    }
    FUN_10003cda0(&local_58,local_58);
  }
LAB_1000b9ae8:
  FUN_100039a80(&local_60);
  FUN_100039a80(&local_68);
LAB_1000b9afa:
  iVar7 = *(int *)(*param_2 + 0xc) - *(int *)(*param_2 + 8);
  if (plVar13 != (long *)0x0) {
    LOCK();
    plVar12 = plVar13 + 1;
    lVar9 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
  }
  pQVar5 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return iVar7;
      }
    }
    if (*(long *)(local_40 + 0x10) != 0) {
      FUN_1000be500();
      QMapDataBase::freeTree(pQVar5,(int)*(undefined8 *)(pQVar5 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar5);
  }
  return iVar7;
}

