
QString * FUN_1003379a0(QString *param_1,long *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  QTypedArrayData<unsigned_short> *pQVar10;
  long lVar11;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  pQVar10 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  lVar9 = *param_2;
  if ((*(long *)(lVar9 + 0x10) == 0) || (lVar11 = *(long *)(lVar9 + 0x20), lVar11 == lVar9 + 8)) {
    return param_1;
  }
  do {
    uVar1 = *(undefined4 *)(lVar11 + 0x1c);
    uVar2 = *(undefined4 *)(lVar11 + 0x20);
    uVar3 = *(undefined4 *)(lVar11 + 0x24);
    iVar4 = *(int *)(lVar11 + 0x28);
    uVar5 = *(undefined4 *)(lVar11 + 0x2c);
    iVar6 = *(int *)(lVar11 + 0x30);
    iVar7 = *(int *)(lVar11 + 0x34);
    iVar8 = *(int *)(lVar11 + 0x38);
    if (*(int *)(pQVar10 + 4) != 0) {
      QString::fromUtf8_helper((char *)&local_40,0x1eeaa60);
      QString::append(param_1);
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_31 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100337a91;
        }
        QArrayData::deallocate(local_40,2,8);
      }
    }
LAB_100337a91:
    local_88 = (QArrayData *)
               QString::fromAscii_helper
                         ("Display #%1: %2x%3 at (%4, %5). Depth: %6. LineBytes: %7. Dpi: %8",0x41);
    QString::arg(&local_80,&local_88,uVar5,0,10,0x20);
    QString::arg(&local_78,&local_80,uVar1,0,10,0x20);
    QString::arg(&local_70,&local_78,uVar2,0,10,0x20);
    QString::arg(&local_68,&local_70,(long)iVar6,0,10,0x20);
    QString::arg(&local_60,&local_68,(long)iVar7,0,10,0x20);
    QString::arg(&local_58,&local_60,uVar3,0,10,0x20);
    QString::arg(&local_50,&local_58,(long)iVar4,0,10,0x20);
    QString::arg(&local_48,&local_50,(long)iVar8,0,10,0x20);
    QString::append(param_1);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100337bfd;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_100337bfd:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100337c2d;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_100337c2d:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100337c5d;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_100337c5d:
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100337c8d;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_100337c8d:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100337cbd;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_100337cbd:
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100337ced;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_100337ced:
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100337d1d;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_100337d1d:
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_31 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100337d4d;
      }
      QArrayData::deallocate(local_80,2,8);
    }
LAB_100337d4d:
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100337d7d;
      }
      QArrayData::deallocate(local_88,2,8);
    }
LAB_100337d7d:
    lVar11 = QMapNodeBase::nextNode();
    if (lVar11 == *param_2 + 8) {
      return param_1;
    }
    pQVar10 = param_1->field0_0x0;
  } while( true );
}

