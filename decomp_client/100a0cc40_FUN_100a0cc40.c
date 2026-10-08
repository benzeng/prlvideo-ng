
void FUN_100a0cc40(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  QUrl local_80 [8];
  QArrayData *local_78;
  QArrayData *local_70;
  Data *local_68;
  Data *local_60;
  Data *local_58;
  undefined4 local_50;
  QArrayData *local_48;
  Data *local_40;
  undefined1 local_31;
  
  local_48 = (QArrayData *)PTR_shared_null_1021e1288;
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  qt_qFindChildren_helper
            (*(undefined8 *)(param_1 + 0x10),&local_48,PTR_staticMetaObject_1021e1310,&local_40,1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a0ccb5;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100a0ccb5:
  local_68 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 == 0) {
      QListData::detach((int)&local_68);
      lVar2 = (long)*(int *)(local_68 + 8);
      if ((local_40 + (long)*(int *)(local_40 + 8) * 8 != local_68 + lVar2 * 8) &&
         (lVar3 = *(int *)(local_68 + 0xc) - lVar2, lVar3 != 0 && lVar2 <= *(int *)(local_68 + 0xc))
         ) {
        _memcpy(local_68 + lVar2 * 8 + 0x10,local_40 + (long)*(int *)(local_40 + 8) * 8 + 0x10,
                lVar3 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + 1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
    }
  }
  local_60 = local_68 + (long)*(int *)(local_68 + 8) * 8 + 0x10;
  local_58 = local_68 + (long)*(int *)(local_68 + 0xc) * 8 + 0x10;
  if (*(int *)(local_68 + 8) != *(int *)(local_68 + 0xc)) {
    do {
      local_50 = 1;
      plVar1 = *(long **)local_60;
      if (1 < DAT_10230ffd0) {
        QNetworkReply::url();
        QUrl::toString(&local_78,local_80,0);
        QString::toUtf8();
        FUN_100df99c0("","WebPortalCommunication",2,"Aborting operation %s",
                      local_70 + *(long *)(local_70 + 0x10));
        if (*(int *)local_70 != -1) {
          if (*(int *)local_70 != 0) {
            LOCK();
            *(int *)local_70 = *(int *)local_70 + -1;
            local_31 = *(int *)local_70 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100a0cde7;
          }
          QArrayData::deallocate(local_70,1,8);
        }
LAB_100a0cde7:
        if (*(int *)local_78 != -1) {
          if (*(int *)local_78 != 0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            local_31 = *(int *)local_78 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100a0ce17;
          }
          QArrayData::deallocate(local_78,2,8);
        }
LAB_100a0ce17:
        QUrl::~QUrl(local_80);
      }
      (**(code **)(*plVar1 + 0xe8))(plVar1);
      local_60 = local_60 + 8;
    } while (local_60 != local_58);
  }
  local_50 = 1;
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a0ce72;
    }
    QListData::dispose(local_68);
  }
LAB_100a0ce72:
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

