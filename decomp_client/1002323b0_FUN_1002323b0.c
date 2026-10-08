
undefined8 FUN_1002323b0(long param_1)

{
  QWidget *pQVar1;
  undefined *puVar2;
  char cVar3;
  QString *pQVar4;
  long lVar5;
  char *pcVar6;
  long lVar7;
  undefined8 uVar8;
  QString local_98;
  QVariant local_90;
  QString local_80;
  Data *local_78;
  Data *local_70;
  Data *local_68;
  Data *local_60;
  int local_58;
  QVariant local_50;
  QArrayData *local_40;
  undefined1 local_31;
  
  pQVar4 = (QString *)CMessageManager::instance();
  uVar8 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar8 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_1003193e0(&local_40,uVar8);
  CMessageManager::closeSpecificMessageBox(pQVar4,(int)&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10023242f;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10023242f:
  uVar8 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar8 = *(undefined8 *)(param_1 + 0x20);
  }
  lVar5 = FUN_1003192a0(uVar8);
  if ((lVar5 == 0) ||
     (pcVar6 = (char *)FUN_100323e30(lVar5), puVar2 = PTR_s_DynProp_CanShowSheet_102270de0,
     pcVar6 == (char *)0x0)) goto LAB_1002326e3;
  QVariant::QVariant(&local_50,false);
  QObject::setProperty(pcVar6,(QVariant *)puVar2);
  QVariant::~QVariant(&local_50);
  QApplication::topLevelWidgets();
  local_70 = local_78;
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 == 0) {
      QListData::detach((int)&local_70);
      lVar5 = (long)*(int *)(local_70 + 8);
      if ((local_78 + (long)*(int *)(local_78 + 8) * 8 != local_70 + lVar5 * 8) &&
         (lVar7 = *(int *)(local_70 + 0xc) - lVar5, lVar7 != 0 && lVar5 <= *(int *)(local_70 + 0xc))
         ) {
        _memcpy(local_70 + lVar5 * 8 + 0x10,local_78 + (long)*(int *)(local_78 + 8) * 8 + 0x10,
                lVar7 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + 1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
    }
  }
  local_68 = local_70 + (long)*(int *)(local_70 + 8) * 8 + 0x10;
  local_60 = local_70 + (long)*(int *)(local_70 + 0xc) * 8 + 0x10;
  local_58 = 1;
  if (*(int *)local_78 == -1) {
LAB_10023255e:
    if (local_68 != local_60) {
      do {
        pQVar1 = *(QWidget **)local_68;
        if (((pQVar1 != (QWidget *)0x0) &&
            (lVar5 = (**(code **)(*(long *)pQVar1 + 8))(pQVar1,"CMessageBoxWndBase"), lVar5 != 0))
           && (lVar5 = (**(code **)(*(long *)pQVar1 + 8))(pQVar1,"CNotificationBox"), lVar5 == 0)) {
          QObject::property((char *)&local_90);
          QVariant::toString();
          uVar8 = 0;
          if ((*(long *)(param_1 + 0x18) != 0) &&
             (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
            uVar8 = *(undefined8 *)(param_1 + 0x20);
          }
          FUN_1003193e0(&local_98,uVar8);
          cVar3 = operator==(&local_80,&local_98);
          if (*(int *)local_98.field0_0x0 != -1) {
            if (*(int *)local_98.field0_0x0 != 0) {
              LOCK();
              *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
              local_31 = *(int *)local_98.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100232652;
            }
            QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
          }
LAB_100232652:
          if (*(int *)local_80.field0_0x0 != -1) {
            if (*(int *)local_80.field0_0x0 != 0) {
              LOCK();
              *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
              local_31 = *(int *)local_80.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100232682;
            }
            QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
          }
LAB_100232682:
          QVariant::~QVariant(&local_90);
          if (cVar3 != '\0') {
            MacUtils::setStaysOnTop(pQVar1,false);
          }
        }
        local_68 = local_68 + 8;
        local_58 = 1;
      } while (local_68 != local_60);
    }
  }
  else {
    if (*(int *)local_78 == 0) {
LAB_10023254f:
      QListData::dispose(local_78);
    }
    else {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_10023254f;
    }
    if (local_58 != 0) goto LAB_10023255e;
  }
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002326e3;
    }
    QListData::dispose(local_70);
  }
LAB_1002326e3:
  uVar8 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar8 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar8 = FUN_100319d40(uVar8);
  FUN_10035b1b0(uVar8,0x1a,0);
  return 0;
}

