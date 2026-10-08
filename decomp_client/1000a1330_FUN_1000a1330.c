
void FUN_1000a1330(long param_1)

{
  Data *pDVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  Data *pDVar11;
  ulong uVar12;
  QArrayData *local_a8;
  undefined1 local_99;
  undefined4 local_98;
  undefined2 local_94;
  undefined1 local_90 [32];
  QString local_70;
  QString local_68;
  QArrayData *local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  Data *local_40;
  undefined1 local_31;
  
  uVar7 = FUN_100152280();
  lVar8 = FUN_1001548f0(uVar7,param_1 + 0x20);
  if (lVar8 == 0) {
    return;
  }
  lVar8 = FUN_10018d490(lVar8);
  if (lVar8 == 0) {
    return;
  }
  uVar7 = FUN_10016f500(lVar8);
  cVar4 = FUN_10061c2b0(uVar7,0x10080);
  if (cVar4 == '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x28) == '\0') {
    return;
  }
  uVar7 = FUN_100152280();
  lVar8 = FUN_1001548f0(uVar7,param_1 + 0x20);
  local_70.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  if (lVar8 == 0) goto LAB_1000a180d;
  lVar8 = FUN_10018c2b0(lVar8);
  local_48 = *(Data **)(lVar8 + 200);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 == 0) {
      QListData::detach((int)&local_48);
      lVar9 = (long)*(int *)(local_48 + 8);
      lVar8 = *(long *)(lVar8 + 200);
      if (((Data *)(lVar8 + (long)*(int *)(lVar8 + 8) * 8) != local_48 + lVar9 * 8) &&
         (lVar10 = *(int *)(local_48 + 0xc) - lVar9,
         lVar10 != 0 && lVar9 <= *(int *)(local_48 + 0xc))) {
        _memcpy(local_48 + lVar9 * 8 + 0x10,(void *)(lVar8 + 0x10 + (long)*(int *)(lVar8 + 8) * 8),
                lVar10 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + 1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
    }
  }
  local_40 = local_48 + (long)*(int *)(local_48 + 8) * 8 + 0x10;
  pDVar11 = local_48;
  if (*(int *)(local_48 + 8) == *(int *)(local_48 + 0xc)) {
    bVar2 = false;
  }
  else {
    do {
      pDVar1 = local_40 + 8;
      lVar8 = *(long *)local_40;
      local_40 = pDVar1;
      if (lVar8 != 0) {
        local_58 = *(Data **)(lVar8 + 0x1d0);
        if (*(int *)local_58 != -1) {
          if (*(int *)local_58 == 0) {
            QListData::detach((int)&local_58);
            lVar9 = (long)*(int *)(local_58 + 8);
            lVar8 = *(long *)(lVar8 + 0x1d0);
            if (((Data *)(lVar8 + (long)*(int *)(lVar8 + 8) * 8) != local_58 + lVar9 * 8) &&
               (lVar10 = *(int *)(local_58 + 0xc) - lVar9,
               lVar10 != 0 && lVar9 <= *(int *)(local_58 + 0xc))) {
              _memcpy(local_58 + lVar9 * 8 + 0x10,
                      (void *)(lVar8 + 0x10 + (long)*(int *)(lVar8 + 8) * 8),lVar10 * 8);
            }
          }
          else {
            LOCK();
            *(int *)local_58 = *(int *)local_58 + 1;
            local_31 = *(int *)local_58 != 0;
            UNLOCK();
          }
        }
        local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
        bVar3 = false;
        pDVar11 = local_58;
        if (*(int *)(local_58 + 8) != *(int *)(local_58 + 0xc)) {
          do {
            pDVar1 = local_50 + 8;
            lVar8 = *(long *)local_50;
            local_50 = pDVar1;
            if (lVar8 != 0) {
              CVmGenericNetworkAdapter::getMacAddress();
              bVar2 = false;
              if (*(int *)(local_60 + 4) != 0) {
                QString::toUpper();
                QString::operator=(&local_70,&local_68);
                bVar2 = true;
                if (*(int *)local_68.field0_0x0 != -1) {
                  if (*(int *)local_68.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
                    local_31 = *(int *)local_68.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1000a1585;
                  }
                  QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
                }
              }
LAB_1000a1585:
              if (*(int *)local_60 != -1) {
                if (*(int *)local_60 != 0) {
                  LOCK();
                  *(int *)local_60 = *(int *)local_60 + -1;
                  local_31 = *(int *)local_60 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1000a15b5;
                }
                QArrayData::deallocate(local_60,2,8);
              }
LAB_1000a15b5:
              pDVar11 = local_58;
              if (bVar2) {
                bVar3 = true;
                break;
              }
            }
          } while (local_50 != pDVar11 + (long)*(int *)(pDVar11 + 0xc) * 8 + 0x10);
        }
        if (*(int *)pDVar11 != -1) {
          if (*(int *)pDVar11 != 0) {
            LOCK();
            *(int *)pDVar11 = *(int *)pDVar11 + -1;
            local_31 = *(int *)pDVar11 != 0;
            UNLOCK();
            pDVar11 = local_58;
            if ((bool)local_31) goto LAB_1000a1612;
          }
          QListData::dispose(pDVar11);
        }
LAB_1000a1612:
        bVar2 = true;
        pDVar11 = local_48;
        if (bVar3) goto LAB_1000a1648;
      }
    } while (local_40 != pDVar11 + (long)*(int *)(pDVar11 + 0xc) * 8 + 0x10);
    bVar2 = false;
  }
LAB_1000a1648:
  if (*(int *)pDVar11 != -1) {
    if (*(int *)pDVar11 != 0) {
      LOCK();
      *(int *)pDVar11 = *(int *)pDVar11 + -1;
      local_31 = *(int *)pDVar11 != 0;
      UNLOCK();
      pDVar11 = local_48;
      if ((bool)local_31) goto LAB_1000a166a;
    }
    QListData::dispose(pDVar11);
  }
LAB_1000a166a:
  if (bVar2) {
    FUN_1000a3d00(local_90,0);
    local_94 = 0;
    local_98 = 0;
    uVar12 = 0;
    do {
      QString::mid((int)&local_a8,(int)&local_70);
      uVar5 = QString::toInt((bool *)&local_a8,(int)&local_99);
      *(undefined1 *)((long)&local_98 + uVar12) = uVar5;
      if (*(int *)local_a8 != -1) {
        if (*(int *)local_a8 != 0) {
          LOCK();
          *(int *)local_a8 = *(int *)local_a8 + -1;
          local_31 = *(int *)local_a8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000a1714;
        }
        QArrayData::deallocate(local_a8,2,8);
      }
LAB_1000a1714:
      uVar12 = uVar12 + 1;
    } while (uVar12 < 6);
    FUN_1000a3be0(local_90,&local_98,6,0x200e);
    uVar7 = FUN_100a67f30(local_90);
    uVar6 = FUN_100a67f40(local_90);
    FUN_1000a2110(param_1,2,5,uVar7,uVar6);
    FUN_100a681d0(local_90);
  }
LAB_1000a180d:
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_70.field0_0x0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
  return;
}

