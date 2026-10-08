
void FUN_100449fd0(long param_1)

{
  int iVar1;
  Data *pDVar2;
  char cVar3;
  QWidget *pQVar4;
  long lVar5;
  long lVar6;
  QArrayData *pQVar7;
  Data *pDVar8;
  QVariant local_80;
  Data *local_70;
  QArrayData *local_68;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  int local_40;
  undefined1 local_31;
  
  local_68 = (QArrayData *)PTR_shared_null_1021e1288;
  local_60 = (Data *)PTR_shared_null_1021e15e8;
  qt_qFindChildren_helper
            (*(undefined8 *)(param_1 + 0x10),&local_68,PTR_staticMetaObject_1021e1540,&local_60,1);
  local_58 = local_60;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 == 0) {
      QListData::detach((int)&local_58);
      lVar5 = (long)*(int *)(local_58 + 8);
      if ((local_60 + (long)*(int *)(local_60 + 8) * 8 != local_58 + lVar5 * 8) &&
         (lVar6 = *(int *)(local_58 + 0xc) - lVar5, lVar6 != 0 && lVar5 <= *(int *)(local_58 + 0xc))
         ) {
        _memcpy(local_58 + lVar5 * 8 + 0x10,local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10,
                lVar6 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + 1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
    }
  }
  local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
  local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
  local_40 = 1;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10044a0c9;
    }
    QListData::dispose(local_60);
  }
LAB_10044a0c9:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10044a0f9;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10044a0f9:
  if ((local_40 != 0) && (local_50 != local_48)) {
    do {
      QObject::property((char *)&local_80);
      QVariant::toStringList();
      cVar3 = FUN_1003bc0b0(&local_70);
      pDVar2 = local_70;
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10044a1fc;
        }
        iVar1 = *(int *)(local_70 + 0xc);
        if (iVar1 != *(int *)(local_70 + 8)) {
          lVar5 = (long)*(int *)(local_70 + 8) * 8 + (long)iVar1 * -8;
          pDVar8 = local_70 + (long)iVar1 * 8 + 8;
          do {
            pQVar7 = *(QArrayData **)pDVar8;
            if (*(int *)pQVar7 == 0) {
LAB_10044a1d0:
              QArrayData::deallocate(pQVar7,2,8);
            }
            else if (*(int *)pQVar7 != -1) {
              LOCK();
              *(int *)pQVar7 = *(int *)pQVar7 + -1;
              local_31 = *(int *)pQVar7 != 0;
              UNLOCK();
              if (!(bool)local_31) {
                pQVar7 = *(QArrayData **)pDVar8;
                goto LAB_10044a1d0;
              }
            }
            pDVar8 = pDVar8 + -8;
            lVar5 = lVar5 + 8;
          } while (lVar5 != 0);
        }
        QListData::dispose(pDVar2);
      }
LAB_10044a1fc:
      QVariant::~QVariant(&local_80);
      if (cVar3 != '\0') {
        pQVar4 = (QWidget *)FUN_1003b0ae0(*(undefined8 *)(param_1 + 0x28));
        CWidgetMapper::removeMapping(pQVar4);
      }
      local_50 = local_50 + 8;
      local_40 = 1;
    } while (local_50 != local_48);
  }
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return;
      }
      local_31 = 0;
    }
    QListData::dispose(local_58);
  }
  return;
}

