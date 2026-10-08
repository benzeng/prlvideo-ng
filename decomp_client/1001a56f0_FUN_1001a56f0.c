
undefined1 FUN_1001a56f0(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 uVar7;
  QArrayData *local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  local_58 = *(Data **)(param_1 + 0x30);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 == 0) {
      QListData::detach((int)&local_58);
      lVar5 = (long)*(int *)(local_58 + 8);
      lVar4 = *(long *)(param_1 + 0x30);
      if (((Data *)(lVar4 + (long)*(int *)(lVar4 + 8) * 8) != local_58 + lVar5 * 8) &&
         (lVar6 = *(int *)(local_58 + 0xc) - lVar5, lVar6 != 0 && lVar5 <= *(int *)(local_58 + 0xc))
         ) {
        _memcpy(local_58 + lVar5 * 8 + 0x10,(void *)(lVar4 + 0x10 + (long)*(int *)(lVar4 + 8) * 8),
                lVar6 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + 1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
    }
  }
  puVar2 = PTR_staticMetaObject_1021e15e0;
  local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
  local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
  local_40 = 1;
  uVar7 = 1;
  if (*(int *)(local_58 + 8) != *(int *)(local_58 + 0xc)) {
    do {
      local_40 = 1;
      plVar1 = *(long **)local_50;
      lVar4 = (**(code **)(*plVar1 + 8))(plVar1,"QLineEdit");
      if (lVar4 == 0) {
        lVar4 = (**(code **)(*plVar1 + 8))(plVar1,"QComboBox");
        if (lVar4 == 0) {
          lVar4 = (**(code **)(*plVar1 + 8))(plVar1,"QSpinBox");
          if (lVar4 == 0) {
            lVar4 = (**(code **)(*plVar1 + 8))(plVar1,"QAbstractSlider");
            if (lVar4 != 0) {
              QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e1360);
              iVar3 = QAbstractSlider::value();
              if (iVar3 < 1) {
                uVar7 = 0;
                goto LAB_1001a58ef;
              }
            }
          }
          else {
            QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e15a0);
            iVar3 = QSpinBox::value();
            if (iVar3 < 1) {
              uVar7 = 0;
              goto LAB_1001a58ef;
            }
          }
        }
        else {
          QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e15c8);
          iVar3 = QComboBox::currentIndex();
          if (iVar3 < 0) {
            uVar7 = 0;
            goto LAB_1001a58ef;
          }
        }
      }
      else {
        QMetaObject::cast((QObject *)puVar2);
        QLineEdit::text();
        iVar3 = *(int *)(local_60 + 4);
        if (*(int *)local_60 != -1) {
          if (*(int *)local_60 != 0) {
            LOCK();
            *(int *)local_60 = *(int *)local_60 + -1;
            local_31 = *(int *)local_60 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1001a5810;
          }
          QArrayData::deallocate(local_60,2,8);
        }
LAB_1001a5810:
        if (iVar3 == 0) {
          uVar7 = 0;
          goto LAB_1001a58ef;
        }
      }
      local_50 = local_50 + 8;
      local_40 = 1;
    } while (local_50 != local_48);
    uVar7 = 1;
  }
LAB_1001a58ef:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return uVar7;
      }
      local_31 = 0;
    }
    QListData::dispose(local_58);
  }
  return uVar7;
}

