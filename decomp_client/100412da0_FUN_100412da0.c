
void FUN_100412da0(long param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  Data *pDVar7;
  QVariant local_a0;
  Data *local_90;
  QVariant local_88;
  Data *local_78;
  undefined4 local_6c;
  QString local_68;
  QVariant local_60;
  QVariant local_50;
  QArrayData *local_40;
  undefined4 local_38;
  undefined4 local_34;
  Data *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  pcVar3 = (char *)QMetaObject::cast((QObject *)&PTR_PTR_1021f9b10);
  if (pcVar3 == (char *)0x0) {
    return;
  }
  local_30 = (Data *)PTR_shared_null_1021e15e8;
  local_34 = 0;
  FUN_100129840(&local_30,&local_34);
  local_38 = 2;
  FUN_100129840(&local_30,&local_38);
  QObject::property((char *)&local_50);
  QVariant::toString();
  QVariant::~QVariant(&local_50);
  uVar4 = FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
  local_68.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_40;
  if (1 < *(int *)local_40 + 1U) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + 1;
    local_19 = *(int *)local_40 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_28,0x1df17d1);
  QString::append(&local_68);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100412e9f;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_100412e9f:
  FUN_1003e1800(&local_60,uVar4,&local_68,0);
  iVar2 = QVariant::toInt((bool *)&local_60);
  QVariant::~QVariant(&local_60);
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_19 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100412ef7;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_100412ef7:
  if (iVar2 == 1) {
    local_6c = 1;
    FUN_100129840(&local_30,&local_6c);
  }
  QObject::property((char *)&local_88);
  FUN_1003e6af0(&local_78,&local_88);
  QVariant::~QVariant(&local_88);
  if (local_78 != local_30) {
    iVar2 = *(int *)(local_78 + 0xc);
    iVar1 = *(int *)(local_78 + 8);
    if (iVar2 - iVar1 == *(int *)(local_30 + 0xc) - *(int *)(local_30 + 8)) {
      if (iVar2 != iVar1) {
        pDVar7 = local_30 + (long)*(int *)(local_30 + 8) * 8 + 0x10;
        lVar5 = (long)iVar1 << 3;
        do {
          if (*(int *)(local_78 + lVar5 + 0x10) != *(int *)pDVar7) goto LAB_100412f9a;
          pDVar7 = pDVar7 + 8;
          lVar5 = lVar5 + 8;
        } while ((long)iVar2 * 8 != lVar5);
      }
    }
    else {
LAB_100412f9a:
      local_90 = local_30;
      if (*(int *)local_30 != -1) {
        if (*(int *)local_30 == 0) {
          QListData::detach((int)&local_90);
          lVar5 = (long)*(int *)(local_90 + 8);
          if ((local_30 + (long)*(int *)(local_30 + 8) * 8 != local_90 + lVar5 * 8) &&
             (lVar6 = *(int *)(local_90 + 0xc) - lVar5,
             lVar6 != 0 && lVar5 <= *(int *)(local_90 + 0xc))) {
            _memcpy(local_90 + lVar5 * 8 + 0x10,local_30 + (long)*(int *)(local_30 + 8) * 8 + 0x10,
                    lVar6 * 8);
          }
        }
        else {
          LOCK();
          *(int *)local_30 = *(int *)local_30 + 1;
          local_19 = *(int *)local_30 != 0;
          UNLOCK();
        }
      }
      FUN_1001339d0(pcVar3,&local_90);
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_19 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_10041303c;
        }
        QListData::dispose(local_90);
      }
LAB_10041303c:
      if (DAT_102273f08 == 0) {
        DAT_102273f08 = FUN_1003e6cb0("QList<int >",0xffffffffffffffff,1);
      }
      QVariant::QVariant(&local_a0,DAT_102273f08,&local_30,0);
      QObject::setProperty(pcVar3,(QVariant *)"InitInfo");
      QVariant::~QVariant(&local_a0);
    }
  }
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_19 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1004130c0;
    }
    QListData::dispose(local_78);
  }
LAB_1004130c0:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1004130f0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1004130f0:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return;
      }
      local_19 = 0;
    }
    QListData::dispose(local_30);
  }
  return;
}

