
undefined1 FUN_100025170(long param_1,long *param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  long lVar5;
  uint uVar6;
  undefined8 *puVar7;
  Data *pDVar8;
  Data *pDVar9;
  QArrayData *pQVar10;
  bool bVar11;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  uint local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (*(char *)(param_1 + 0x70) == '\0') {
    return 0;
  }
  local_40 = (QArrayData *)PTR_shared_null_100ba20d0;
  pDVar8 = (Data *)*param_2;
  if (*(int *)(pDVar8 + 0xc) != *(int *)(pDVar8 + 8)) {
    local_60 = pDVar8;
    if (*(int *)pDVar8 != -1) {
      if (*(int *)pDVar8 == 0) {
        QListData::detach((int)&local_60);
        iVar1 = *(int *)(local_60 + 8);
        if (iVar1 != *(int *)(local_60 + 0xc)) {
          puVar7 = (undefined8 *)(*param_2 + 0x10 + (long)*(int *)(*param_2 + 8) * 8);
          pDVar8 = local_60 + (long)iVar1 * 8 + 0x10;
          lVar5 = (long)*(int *)(local_60 + 0xc) * 8 + (long)iVar1 * -8;
          do {
            piVar2 = (int *)*puVar7;
            *(int **)pDVar8 = piVar2;
            if (1 < *piVar2 + 1U) {
              LOCK();
              *piVar2 = *piVar2 + 1;
              local_31 = *piVar2 != 0;
              UNLOCK();
            }
            pDVar8 = pDVar8 + 8;
            puVar7 = puVar7 + 1;
            lVar5 = lVar5 + -8;
          } while (lVar5 != 0);
        }
      }
      else {
        LOCK();
        *(int *)pDVar8 = *(int *)pDVar8 + 1;
        local_31 = *(int *)pDVar8 != 0;
        UNLOCK();
      }
    }
    local_58 = local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10;
    local_50 = local_60 + (long)*(int *)(local_60 + 0xc) * 8 + 0x10;
    local_48 = 1;
    if (*(int *)(local_60 + 8) != *(int *)(local_60 + 0xc)) {
      do {
        local_68 = *(QArrayData **)local_58;
        if (1 < *(int *)local_68 + 1U) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + 1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
        }
        if (local_48 != 0) {
          QString::normalized(&local_78,&local_68,1,0);
          QString::toUtf8();
          QByteArray::append((QByteArray *)&local_40);
          if (*(int *)local_70 != -1) {
            if (*(int *)local_70 != 0) {
              LOCK();
              *(int *)local_70 = *(int *)local_70 + -1;
              local_31 = *(int *)local_70 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000252fb;
            }
            QArrayData::deallocate(local_70,1,8);
          }
LAB_1000252fb:
          if (*(int *)local_78 != -1) {
            if (*(int *)local_78 != 0) {
              LOCK();
              *(int *)local_78 = *(int *)local_78 + -1;
              local_31 = *(int *)local_78 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10002532b;
            }
            QArrayData::deallocate(local_78,2,8);
          }
LAB_10002532b:
          QByteArray::append((char)&local_40);
          local_48 = 0;
        }
        if (*(int *)local_68 != -1) {
          if (*(int *)local_68 != 0) {
            LOCK();
            *(int *)local_68 = *(int *)local_68 + -1;
            local_31 = *(int *)local_68 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10002536c;
          }
          QArrayData::deallocate(local_68,2,8);
        }
LAB_10002536c:
        local_58 = local_58 + 8;
        uVar6 = local_48 ^ 1;
        bVar11 = local_48 != 1;
        local_48 = uVar6;
      } while ((bVar11) && (local_58 != local_50));
    }
    pDVar8 = local_60;
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100025421;
      }
      iVar1 = *(int *)(local_60 + 0xc);
      if (iVar1 != *(int *)(local_60 + 8)) {
        lVar5 = (long)*(int *)(local_60 + 8) * 8 + (long)iVar1 * -8;
        pDVar9 = local_60 + (long)iVar1 * 8 + 8;
        do {
          pQVar10 = *(QArrayData **)pDVar9;
          if (*(int *)pQVar10 == 0) {
LAB_100025400:
            QArrayData::deallocate(pQVar10,2,8);
          }
          else if (*(int *)pQVar10 != -1) {
            LOCK();
            *(int *)pQVar10 = *(int *)pQVar10 + -1;
            local_31 = *(int *)pQVar10 != 0;
            UNLOCK();
            if (!(bool)local_31) {
              pQVar10 = *(QArrayData **)pDVar9;
              goto LAB_100025400;
            }
          }
          pDVar9 = pDVar9 + -8;
          lVar5 = lVar5 + 8;
        } while (lVar5 != 0);
      }
      QListData::dispose(pDVar8);
    }
  }
LAB_100025421:
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  if ((1 < *(uint *)local_40) || (*(long *)(local_40 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_40,*(uint *)(local_40 + 4) + 1,*(uint *)(local_40 + 8) >> 0x1f);
  }
  uVar4 = FUN_1004c2f50(uVar3,0xb,local_40 + *(long *)(local_40 + 0x10),*(uint *)(local_40 + 4),1,1)
  ;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return uVar4;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,1,8);
  }
  return uVar4;
}

