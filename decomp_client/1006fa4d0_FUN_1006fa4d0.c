
void FUN_1006fa4d0(long param_1,char param_2)

{
  int iVar1;
  QList *pQVar2;
  undefined *puVar3;
  Data *pDVar4;
  char cVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  QKeySequence *pQVar10;
  Data *local_78 [2];
  Data *local_68;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  undefined4 local_48;
  Data *local_40;
  undefined1 local_31;
  
  uVar7 = FUN_1006b9420();
  FUN_1006b95e0(&local_40,uVar7);
  local_60 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 == 0) {
      QListData::detach((int)&local_60);
      lVar8 = (long)*(int *)(local_60 + 8);
      if ((local_40 + (long)*(int *)(local_40 + 8) * 8 != local_60 + lVar8 * 8) &&
         (lVar9 = *(int *)(local_60 + 0xc) - lVar8, lVar9 != 0 && lVar8 <= *(int *)(local_60 + 0xc))
         ) {
        _memcpy(local_60 + lVar8 * 8 + 0x10,local_40 + (long)*(int *)(local_40 + 8) * 8 + 0x10,
                lVar9 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + 1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
    }
  }
  local_58 = local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10;
  local_50 = local_60 + (long)*(int *)(local_60 + 0xc) * 8 + 0x10;
  if (*(int *)(local_60 + 8) != *(int *)(local_60 + 0xc)) {
    do {
      local_48 = 1;
      pQVar2 = *(QList **)local_58;
      lVar8 = *(long *)(param_1 + 0x10);
      uVar6 = FUN_1006947d0(pQVar2);
      cVar5 = FUN_1007054c0(*(long *)(lVar8 + 0x10) + 0x18,uVar6);
      puVar3 = PTR_shared_null_1021e15e8;
      if (cVar5 == '\0') {
        QAction::setShortcuts(pQVar2);
        if (*(int *)puVar3 != -1) {
          if (*(int *)puVar3 != 0) {
            LOCK();
            *(int *)puVar3 = *(int *)puVar3 + -1;
            local_31 = *(int *)puVar3 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006fa790;
          }
          iVar1 = *(int *)(puVar3 + 0xc);
          if (iVar1 != *(int *)(puVar3 + 8)) {
            lVar8 = (long)*(int *)(puVar3 + 8) * 8 + (long)iVar1 * -8;
            pQVar10 = (QKeySequence *)(puVar3 + (long)iVar1 * 8 + 8);
            do {
              QKeySequence::~QKeySequence(pQVar10);
              pQVar10 = pQVar10 + -8;
              lVar8 = lVar8 + 8;
            } while (lVar8 != 0);
          }
          QListData::dispose((Data *)puVar3);
        }
      }
      else {
        uVar7 = *(undefined8 *)(param_1 + 0x10);
        uVar6 = FUN_1006947d0(pQVar2);
        FUN_1006faa30(local_78,uVar7,uVar6);
        FUN_100708240(&local_68,local_78);
        QAction::setShortcuts(pQVar2);
        pDVar4 = local_68;
        if (*(int *)local_68 != -1) {
          if (*(int *)local_68 != 0) {
            LOCK();
            *(int *)local_68 = *(int *)local_68 + -1;
            local_31 = *(int *)local_68 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006fa711;
          }
          iVar1 = *(int *)(local_68 + 0xc);
          if (iVar1 != *(int *)(local_68 + 8)) {
            lVar8 = (long)*(int *)(local_68 + 8) * 8 + (long)iVar1 * -8;
            pQVar10 = (QKeySequence *)(local_68 + (long)iVar1 * 8 + 8);
            do {
              QKeySequence::~QKeySequence(pQVar10);
              pQVar10 = pQVar10 + -8;
              lVar8 = lVar8 + 8;
            } while (lVar8 != 0);
          }
          QListData::dispose(pDVar4);
        }
LAB_1006fa711:
        pDVar4 = local_78[0];
        if (*(int *)local_78[0] != -1) {
          if (*(int *)local_78[0] != 0) {
            LOCK();
            *(int *)local_78[0] = *(int *)local_78[0] + -1;
            local_31 = *(int *)local_78[0] != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006fa790;
          }
          iVar1 = *(int *)(local_78[0] + 0xc);
          if (iVar1 != *(int *)(local_78[0] + 8)) {
            lVar8 = (long)*(int *)(local_78[0] + 8) * 8 + (long)iVar1 * -8;
            pQVar10 = (QKeySequence *)(local_78[0] + (long)iVar1 * 8 + 8);
            do {
              QKeySequence::~QKeySequence(pQVar10);
              pQVar10 = pQVar10 + -8;
              lVar8 = lVar8 + 8;
            } while (lVar8 != 0);
          }
          QListData::dispose(pDVar4);
        }
      }
LAB_1006fa790:
      local_58 = local_58 + 8;
    } while (local_58 != local_50);
  }
  local_48 = 1;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006fa7d6;
    }
    QListData::dispose(local_60);
  }
LAB_1006fa7d6:
  if (param_2 == '\0') {
    FUN_100720b50(param_1 + 0x48);
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    QListData::dispose(local_40);
  }
  return;
}

