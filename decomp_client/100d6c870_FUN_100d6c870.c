
int FUN_100d6c870(void)

{
  undefined4 uVar1;
  long_long lVar2;
  int *piVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  QVariant *in_RCX;
  QObject *pQVar9;
  undefined8 *puVar10;
  undefined4 *in_R8;
  bool bVar11;
  QObject *local_d0;
  undefined1 local_c8 [8];
  QArrayData *local_c0;
  QArrayData *local_b8;
  QObject *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QString local_98;
  QString local_90;
  QVariant local_88;
  QVariant local_78;
  QVariant local_68;
  QVariant local_58;
  QVariant local_48;
  undefined1 local_31;
  
  puVar4 = PTR_shared_null_1021e1288;
  local_d0 = (QObject *)PTR_shared_null_1021e1288;
  uVar1 = *in_R8;
  iVar5 = FUN_100d6d2b0();
  if (iVar5 != 0x8000000) goto LAB_100d6cfae;
  iVar5 = 0x8158018;
  switch(uVar1) {
  case 1:
  case 2:
  case 6:
  case 9:
    uVar6 = *(uint *)(local_d0 + 4);
    iVar5 = 0x8000006;
    if ((uVar6 & 1) == 0) {
      local_90.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar4;
      if (2 < uVar6 + 1) {
        bVar11 = *(short *)(local_d0 + *(long *)(local_d0 + 0x10) + (long)((int)uVar6 / 2 + -1) * 2)
                 == 0;
        iVar5 = (int)(local_d0 + *(long *)(local_d0 + 0x10));
        if (bVar11) {
          QString::fromUtf16((ushort *)&local_a8,iVar5);
          QString::normalized(&local_98,&local_a8,1,0);
        }
        else {
          QString::fromUtf16((ushort *)&local_a0,iVar5);
          QString::normalized(&local_98,&local_a0,1,0);
        }
        QString::operator=(&local_90,&local_98);
        if (*(int *)local_98.field0_0x0 != -1) {
          if (*(int *)local_98.field0_0x0 != 0) {
            LOCK();
            *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
            local_31 = *(int *)local_98.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d6cdd2;
          }
          QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
        }
LAB_100d6cdd2:
        if ((bVar11) && (*(int *)local_a8 != -1)) {
          if (*(int *)local_a8 != 0) {
            LOCK();
            *(int *)local_a8 = *(int *)local_a8 + -1;
            local_31 = *(int *)local_a8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d6ce0c;
          }
          QArrayData::deallocate(local_a8,2,8);
        }
LAB_100d6ce0c:
        if ((!bVar11) && (*(int *)local_a0 != -1)) {
          if (*(int *)local_a0 != 0) {
            LOCK();
            *(int *)local_a0 = *(int *)local_a0 + -1;
            local_31 = *(int *)local_a0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d6ce47;
          }
          QArrayData::deallocate(local_a0,2,8);
        }
      }
LAB_100d6ce47:
      uVar6 = (in_RCX->field0_0x0).field1_0x8.bitField0_30;
      uVar8 = uVar6 & 0x3fffffff;
      uVar6 = uVar6 & 0x40000000;
      if (uVar6 == 0) {
        if (uVar8 == 10) {
          (in_RCX->field0_0x0).field1_0x8.bitField0_30 = 10;
          goto LAB_100d6ce81;
        }
LAB_100d6cecc:
        QVariant::QVariant(&local_78,10,&local_90,0);
        QVariant::operator=(in_RCX,&local_78);
        QVariant::~QVariant(&local_78);
      }
      else {
        if ((uVar8 != 10) ||
           (pQVar9 = (in_RCX->field0_0x0).field0_0x0.field15, *(int *)(pQVar9 + 8) != 1))
        goto LAB_100d6cecc;
        (in_RCX->field0_0x0).field1_0x8.bitField0_30 = uVar6 | 10;
        in_RCX = *(QVariant **)pQVar9;
LAB_100d6ce81:
        pQVar9 = (in_RCX->field0_0x0).field0_0x0.field15;
        if (*(int *)pQVar9 != -1) {
          if (*(int *)pQVar9 != 0) {
            LOCK();
            *(int *)pQVar9 = *(int *)pQVar9 + -1;
            local_31 = *(int *)pQVar9 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d6ceaf;
            pQVar9 = (in_RCX->field0_0x0).field0_0x0.field15;
          }
          QArrayData::deallocate((QArrayData *)pQVar9,2,8);
        }
LAB_100d6ceaf:
        (in_RCX->field0_0x0).field0_0x0.field15 = (QObject *)local_90.field0_0x0;
        if (1 < *(int *)local_90.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + 1;
          local_31 = *(int *)local_90.field0_0x0 != 0;
          UNLOCK();
        }
      }
      iVar5 = 0x8000000;
      if (*(int *)local_90.field0_0x0 != -1) {
        if (*(int *)local_90.field0_0x0 != 0) {
          LOCK();
          *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
          local_31 = *(int *)local_90.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) break;
        }
        QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
      }
    }
    break;
  case 3:
    uVar6 = (in_RCX->field0_0x0).field1_0x8.bitField0_30;
    uVar8 = uVar6 & 0x3fffffff;
    uVar6 = uVar6 & 0x40000000;
    if (uVar6 == 0) {
      if (uVar8 != 0xc) {
LAB_100d6cd2b:
        QVariant::QVariant(&local_88,0xc,&local_d0,0);
        QVariant::operator=(in_RCX,&local_88);
        QVariant::~QVariant(&local_88);
        goto LAB_100d6cf7e;
      }
      (in_RCX->field0_0x0).field1_0x8.bitField0_30 = 0xc;
    }
    else {
      if ((uVar8 != 0xc) ||
         (pQVar9 = (in_RCX->field0_0x0).field0_0x0.field15, *(int *)(pQVar9 + 8) != 1))
      goto LAB_100d6cd2b;
      (in_RCX->field0_0x0).field1_0x8.bitField0_30 = uVar6 | 0xc;
      in_RCX = *(QVariant **)pQVar9;
    }
    pQVar9 = (in_RCX->field0_0x0).field0_0x0.field15;
    if (*(int *)pQVar9 != -1) {
      if (*(int *)pQVar9 != 0) {
        LOCK();
        *(int *)pQVar9 = *(int *)pQVar9 + -1;
        local_31 = *(int *)pQVar9 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d6ccdd;
        pQVar9 = (in_RCX->field0_0x0).field0_0x0.field15;
      }
      QArrayData::deallocate((QArrayData *)pQVar9,1,8);
    }
LAB_100d6ccdd:
    (in_RCX->field0_0x0).field0_0x0.field15 = local_d0;
    if (1 < *(int *)local_d0 + 1U) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + 1;
      local_31 = *(int *)local_d0 != 0;
      UNLOCK();
    }
LAB_100d6cf7e:
    iVar5 = 0x8000000;
    break;
  case 4:
  case 5:
    iVar5 = 0x8000006;
    if (*(int *)(local_d0 + 4) == 4) {
      lVar7 = *(long *)(local_d0 + 0x10);
      uVar6 = (in_RCX->field0_0x0).field1_0x8.bitField0_30;
      uVar8 = uVar6 & 0x3ffffff8;
      uVar6 = uVar6 & 0x40000000;
      if (uVar6 == 0) {
        if (7 < uVar8) {
LAB_100d6cd01:
          QVariant::QVariant(&local_58,3,local_d0 + lVar7,0);
          QVariant::operator=(in_RCX,&local_58);
          QVariant::~QVariant(&local_58);
          goto LAB_100d6cf7e;
        }
        (in_RCX->field0_0x0).field1_0x8.bitField0_30 = 3;
      }
      else {
        if ((7 < uVar8) ||
           (pQVar9 = (in_RCX->field0_0x0).field0_0x0.field15, *(int *)(pQVar9 + 8) != 1))
        goto LAB_100d6cd01;
        (in_RCX->field0_0x0).field1_0x8.bitField0_30 = uVar6 | 3;
        in_RCX = *(QVariant **)pQVar9;
      }
      (in_RCX->field0_0x0).field0_0x0.field5 = *(int *)(local_d0 + lVar7);
      goto LAB_100d6cf7e;
    }
    break;
  case 7:
  case 8:
  case 10:
    iVar5 = 0x8000006;
    if ((*(uint *)(local_d0 + 4) & 1) == 0) {
      local_b0 = (QObject *)PTR_shared_null_1021e15e8;
      if (2 < *(uint *)(local_d0 + 4) + 1) {
        QString::fromUtf16((ushort *)&local_c0,(int)(local_d0 + *(long *)(local_d0 + 0x10)));
        QString::normalized(&local_b8,&local_c0,1,0);
        if (*(int *)local_c0 != -1) {
          if (*(int *)local_c0 != 0) {
            LOCK();
            *(int *)local_c0 = *(int *)local_c0 + -1;
            local_31 = *(int *)local_c0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d6ca25;
          }
          QArrayData::deallocate(local_c0,2,8);
        }
LAB_100d6ca25:
        QString::split(local_c8,&local_b8,0,0,1);
        FUN_1000e5fc0(&local_b0,local_c8);
        FUN_100039a80(local_c8);
        if (*(int *)local_b8 != -1) {
          if (*(int *)local_b8 != 0) {
            LOCK();
            *(int *)local_b8 = *(int *)local_b8 + -1;
            local_31 = *(int *)local_b8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d6ca97;
          }
          QArrayData::deallocate(local_b8,2,8);
        }
      }
LAB_100d6ca97:
      uVar6 = (in_RCX->field0_0x0).field1_0x8.bitField0_30;
      uVar8 = uVar6 & 0x3fffffff;
      uVar6 = uVar6 & 0x40000000;
      if (uVar6 == 0) {
        if (uVar8 == 0xb) {
          (in_RCX->field0_0x0).field1_0x8.bitField0_30 = 0xb;
          goto LAB_100d6cb9f;
        }
LAB_100d6cc2c:
        QVariant::QVariant(&local_68,0xb,&local_b0,0);
        QVariant::operator=(in_RCX,&local_68);
        QVariant::~QVariant(&local_68);
      }
      else {
        if ((uVar8 != 0xb) ||
           (pQVar9 = (in_RCX->field0_0x0).field0_0x0.field15, *(int *)(pQVar9 + 8) != 1))
        goto LAB_100d6cc2c;
        (in_RCX->field0_0x0).field1_0x8.bitField0_30 = uVar6 | 0xb;
        in_RCX = *(QVariant **)pQVar9;
LAB_100d6cb9f:
        FUN_100039a80(in_RCX);
        (in_RCX->field0_0x0).field0_0x0.field15 = local_b0;
        if (*(int *)local_b0 != -1) {
          if (*(int *)local_b0 == 0) {
            QListData::detach((int)in_RCX);
            lVar2 = (in_RCX->field0_0x0).field0_0x0.field7;
            iVar5 = *(int *)(lVar2 + 8);
            if (iVar5 != *(int *)(lVar2 + 0xc)) {
              pQVar9 = local_b0 + ((long)*(int *)(local_b0 + 8) * 2 + 4) * 4;
              puVar10 = (undefined8 *)(lVar2 + 0x10 + (long)iVar5 * 8);
              lVar7 = (long)*(int *)(lVar2 + 0xc) * 8 + (long)iVar5 * -8;
              do {
                piVar3 = *(int **)pQVar9;
                *puVar10 = piVar3;
                if (1 < *piVar3 + 1U) {
                  LOCK();
                  *piVar3 = *piVar3 + 1;
                  local_31 = *piVar3 != 0;
                  UNLOCK();
                }
                puVar10 = puVar10 + 1;
                pQVar9 = pQVar9 + 8;
                lVar7 = lVar7 + -8;
              } while (lVar7 != 0);
            }
          }
          else {
            LOCK();
            *(int *)local_b0 = *(int *)local_b0 + 1;
            local_31 = *(int *)local_b0 != 0;
            UNLOCK();
          }
        }
      }
      iVar5 = 0x8000000;
      FUN_100039a80(&local_b0);
    }
    break;
  case 0xb:
    iVar5 = 0x8000006;
    if (*(int *)(local_d0 + 4) == 8) {
      lVar7 = *(long *)(local_d0 + 0x10);
      uVar6 = (in_RCX->field0_0x0).field1_0x8.bitField0_30;
      uVar8 = uVar6 & 0x3ffffff8;
      uVar6 = uVar6 & 0x40000000;
      if (uVar6 == 0) {
        if (7 < uVar8) {
LAB_100d6cf59:
          QVariant::QVariant(&local_48,5,(Data_conflict *)(local_d0 + lVar7),0);
          QVariant::operator=(in_RCX,&local_48);
          QVariant::~QVariant(&local_48);
          goto LAB_100d6cf7e;
        }
        (in_RCX->field0_0x0).field1_0x8.bitField0_30 = 5;
      }
      else {
        if ((7 < uVar8) ||
           (pQVar9 = (in_RCX->field0_0x0).field0_0x0.field15, *(int *)(pQVar9 + 8) != 1))
        goto LAB_100d6cf59;
        (in_RCX->field0_0x0).field1_0x8.bitField0_30 = uVar6 | 5;
        in_RCX = *(QVariant **)pQVar9;
      }
      (in_RCX->field0_0x0).field0_0x0 = *(Data_conflict *)(local_d0 + lVar7);
      goto LAB_100d6cf7e;
    }
  }
  if (iVar5 == 0x8000000) {
    *in_R8 = uVar1;
    iVar5 = 0x8000000;
  }
LAB_100d6cfae:
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      UNLOCK();
      if (*(int *)local_d0 != 0) {
        return iVar5;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_d0,1,8);
  }
  return iVar5;
}

