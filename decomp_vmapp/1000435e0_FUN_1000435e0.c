
undefined1 FUN_1000435e0(undefined8 param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  undefined *puVar2;
  Data *pDVar3;
  char cVar4;
  undefined1 uVar5;
  Data *pDVar6;
  QArrayData *pQVar7;
  int iVar8;
  long lVar9;
  QString local_80;
  QString local_78;
  Data *local_70;
  QString local_68;
  QDataStream local_60 [32];
  QArrayData *local_40;
  undefined1 local_31;
  
  lVar9 = 0;
  if (*param_3 != 0) {
    lVar9 = *(long *)(*param_3 + 0x10);
  }
  QByteArray::fromRawData((char *)&local_40,(int)lVar9);
  QDataStream::QDataStream(local_60,(QByteArray *)&local_40);
  QDataStream::skipRawData((int)local_60);
  puVar2 = PTR_shared_null_100ba20d0;
  local_68.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  operator>>(local_60,&local_68);
  iVar1 = *(int *)(lVar9 + 0x18);
  local_70 = (Data *)PTR_shared_null_100ba2188;
  if (0 < iVar1) {
    iVar8 = 0;
    do {
      local_78.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar2;
      operator>>(local_60,&local_78);
      if ((*(byte *)(lVar9 + 0x10) & 1) == 0) {
LAB_1000436fa:
        FUN_10000c490(&local_70,&local_78);
      }
      else {
        local_80.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar2;
        cVar4 = FUN_100044ce0(param_1,&local_78,&local_80);
        if (cVar4 != '\0') {
          QString::operator=(&local_78,&local_80);
        }
        if (*(int *)local_80.field0_0x0 != -1) {
          if (*(int *)local_80.field0_0x0 != 0) {
            LOCK();
            *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
            local_31 = *(int *)local_80.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000436f5;
          }
          QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
        }
LAB_1000436f5:
        if (cVar4 != '\0') goto LAB_1000436fa;
      }
      if (*(int *)local_78.field0_0x0 != -1) {
        if (*(int *)local_78.field0_0x0 != 0) {
          LOCK();
          *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
          local_31 = *(int *)local_78.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100043736;
        }
        QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
      }
LAB_100043736:
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar1);
  }
  uVar5 = FUN_100044b70(param_1,param_2,&local_68,&local_70,*(uint *)(lVar9 + 0x10) & 0xfffffffe);
  pDVar3 = local_70;
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000437f1;
    }
    iVar1 = *(int *)(local_70 + 0xc);
    if (iVar1 != *(int *)(local_70 + 8)) {
      lVar9 = (long)*(int *)(local_70 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = local_70 + (long)iVar1 * 8 + 8;
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1000437d0:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1000437d0;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar9 = lVar9 + 8;
      } while (lVar9 != 0);
    }
    QListData::dispose(pDVar3);
  }
LAB_1000437f1:
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_31 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100043821;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_100043821:
  QDataStream::~QDataStream(local_60);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return uVar5;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,1,8);
  }
  return uVar5;
}

