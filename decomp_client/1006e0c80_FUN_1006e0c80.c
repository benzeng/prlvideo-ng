
void FUN_1006e0c80(undefined8 param_1)

{
  uint uVar1;
  uint *puVar2;
  char cVar3;
  QArrayData *pQVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  QString local_98;
  AnonymousUnion0 local_90;
  QString local_88;
  Data *local_80;
  Data *local_78;
  Data *local_70;
  Data *local_68;
  int local_60;
  QArrayData *local_58;
  uint *local_50;
  undefined1 local_48 [8];
  uint *local_40;
  undefined1 local_31;
  
  local_58 = (QArrayData *)QString::fromAscii_helper("~",1);
  QString::split(&local_50,param_1,&local_58,0,1);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006e0cf4;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1006e0cf4:
  if (local_50[3] == local_50[2]) goto LAB_1006e1013;
  QWidget::actions();
  local_78 = local_80;
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 == 0) {
      QListData::detach((int)&local_78);
      lVar6 = (long)*(int *)(local_78 + 8);
      if ((local_80 + (long)*(int *)(local_80 + 8) * 8 != local_78 + lVar6 * 8) &&
         (lVar7 = *(int *)(local_78 + 0xc) - lVar6, lVar7 != 0 && lVar6 <= *(int *)(local_78 + 0xc))
         ) {
        _memcpy(local_78 + lVar6 * 8 + 0x10,local_80 + (long)*(int *)(local_80 + 8) * 8 + 0x10,
                lVar7 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + 1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
    }
  }
  local_70 = local_78 + (long)*(int *)(local_78 + 8) * 8 + 0x10;
  local_68 = local_78 + (long)*(int *)(local_78 + 0xc) * 8 + 0x10;
  local_60 = 1;
  if (*(int *)local_80 == -1) {
LAB_1006e0dc7:
    if (local_70 != local_68) {
      do {
        lVar6 = *(long *)local_70;
        if (lVar6 != 0) {
          lVar7 = QAction::menu();
          puVar2 = local_50;
          if (lVar7 == 0) {
            QAction::text();
            cVar3 = operator==(&local_98,(QString *)(local_50 + (long)(int)local_50[2] * 2 + 4));
            if (*(int *)local_98.field0_0x0 != -1) {
              if (*(int *)local_98.field0_0x0 != 0) {
                LOCK();
                *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
                local_31 = *(int *)local_98.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1006e0fc0;
              }
              QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
            }
LAB_1006e0fc0:
            if (cVar3 != '\0') {
              QAction::activate(lVar6,0);
            }
          }
          else {
            uVar1 = local_50[2];
            QAction::menu();
            QMenu::title();
            cVar3 = operator==((QString *)(puVar2 + (long)(int)uVar1 * 2 + 4),&local_88);
            if (*(int *)local_88.field0_0x0 != -1) {
              if (*(int *)local_88.field0_0x0 != 0) {
                LOCK();
                *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
                local_31 = *(int *)local_88.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1006e0e57;
              }
              QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
            }
LAB_1006e0e57:
            if (cVar3 != '\0') {
              if (1 < *local_50) {
                FUN_100036c40(&local_50,local_50[1]);
              }
              local_40 = local_50 + (long)(int)local_50[2] * 2 + 4;
              FUN_1000557c0(local_48,&local_50,&local_40);
              if (local_50[3] == local_50[2]) break;
              pQVar4 = (QArrayData *)QString::fromAscii_helper("~",1);
              QtPrivate::QStringList_join
                        ((QStringList *)&local_90.field0,(QChar *)&local_50,
                         (int)*(undefined8 *)(pQVar4 + 0x10) + (int)pQVar4);
              uVar5 = QAction::menu();
              FUN_1006e0c80(&local_90,uVar5);
              if (*(int *)local_90.field1 != -1) {
                if (*(int *)local_90.field1 != 0) {
                  LOCK();
                  *(int *)local_90.field1 = *(int *)local_90.field1 + -1;
                  local_31 = *(int *)local_90.field1 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1006e0f1c;
                }
                QArrayData::deallocate((QArrayData *)local_90.field1,2,8);
              }
LAB_1006e0f1c:
              if (*(int *)pQVar4 != -1) {
                if (*(int *)pQVar4 != 0) {
                  LOCK();
                  *(int *)pQVar4 = *(int *)pQVar4 + -1;
                  local_31 = *(int *)pQVar4 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1006e0fd0;
                }
                QArrayData::deallocate(pQVar4,2,8);
              }
            }
          }
        }
LAB_1006e0fd0:
        local_70 = local_70 + 8;
        local_60 = 1;
      } while (local_70 != local_68);
    }
  }
  else {
    if (*(int *)local_80 == 0) {
LAB_1006e0db8:
      QListData::dispose(local_80);
    }
    else {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_1006e0db8;
    }
    if (local_60 != 0) goto LAB_1006e0dc7;
  }
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006e1013;
    }
    QListData::dispose(local_78);
  }
LAB_1006e1013:
  FUN_100039a80(&local_50);
  return;
}

