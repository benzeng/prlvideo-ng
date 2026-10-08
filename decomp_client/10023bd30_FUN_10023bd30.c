
undefined8 FUN_10023bd30(long param_1,undefined1 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  QWidget *pQVar7;
  QArrayData *pQVar8;
  undefined8 uVar9;
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
  
  uVar9 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar9 = *(undefined8 *)(param_1 + 0x20);
  }
  lVar5 = FUN_100323e30(uVar9,1);
  if (lVar5 == 0) {
    uVar9 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar9 = *(undefined8 *)(param_1 + 0x20);
    }
    FUN_100323d90(&local_48,uVar9);
    QString::toLocal8Bit();
    pQVar8 = local_40 + *(long *)(local_40 + 0x10);
    uVar9 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar9 = *(undefined8 *)(param_1 + 0x20);
    }
    uVar2 = FUN_100323e20(uVar9);
    EnumUtils::enumToString(&local_60,*(undefined4 *)(param_1 + 0x28),1);
    QString::toUpper();
    QString::toLocal8Bit();
    FUN_100df99c0("","prl_client_app",0,
                  "Failed to switch VM\'s [%s] display [%d] to %s mode. Display widget doesn\'t exist and cannot be created!"
                  ,pQVar8,uVar2,local_50 + *(long *)(local_50 + 0x10));
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10023c07a;
      }
      QArrayData::deallocate(local_50,1,8);
    }
LAB_10023c07a:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10023c0aa;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_10023c0aa:
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10023c0da;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_10023c0da:
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10023c10a;
      }
      QArrayData::deallocate(local_40,1,8);
    }
LAB_10023c10a:
    if (*(int *)local_48 == -1) {
      return 0x80000001;
    }
    local_80 = local_48;
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return 0x80000001;
      }
      local_31 = 0;
    }
LAB_10023c217:
    uVar9 = 0x80000001;
    QArrayData::deallocate(local_80,2,8);
  }
  else {
    iVar1 = FUN_10037a280(1);
    QWidget::setMinimumSize((int)lVar5,iVar1);
    uVar6 = FUN_100370280();
    uVar9 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar9 = *(undefined8 *)(param_1 + 0x20);
    }
    FUN_100323d90(&local_68,uVar9);
    uVar9 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar9 = *(undefined8 *)(param_1 + 0x20);
    }
    uVar2 = FUN_100323e20(uVar9);
    pQVar7 = (QWidget *)FUN_1003704b0(uVar6,&local_68,uVar2);
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10023be1a;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_10023be1a:
    if (pQVar7 == (QWidget *)0x0) {
      uVar6 = FUN_100370280();
      uVar9 = 0;
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
        uVar9 = *(undefined8 *)(param_1 + 0x20);
      }
      FUN_100323d90(&local_70,uVar9);
      uVar9 = 0;
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
        uVar9 = *(undefined8 *)(param_1 + 0x20);
      }
      uVar2 = FUN_100323e20(uVar9);
      pQVar7 = (QWidget *)FUN_1003739f0(uVar6,&local_70,uVar2,1,0);
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10023beb4;
        }
        QArrayData::deallocate(local_70,2,8);
      }
LAB_10023beb4:
      if (pQVar7 == (QWidget *)0x0) {
        uVar9 = 0;
        if ((*(long *)(param_1 + 0x18) != 0) &&
           (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
          uVar9 = *(undefined8 *)(param_1 + 0x20);
        }
        FUN_100323d90(&local_80,uVar9);
        QString::toLocal8Bit();
        pQVar8 = local_78 + *(long *)(local_78 + 0x10);
        uVar9 = 0;
        if ((*(long *)(param_1 + 0x18) != 0) &&
           (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
          uVar9 = *(undefined8 *)(param_1 + 0x20);
        }
        uVar2 = FUN_100323e20(uVar9);
        FUN_100df99c0("","prl_client_app",0,
                      "Failed to switch VM\'s [%s] display [%d] to windowed mode. Display window doesn\'t exist and cannot be created!"
                      ,pQVar8,uVar2);
        if (*(int *)local_78 != -1) {
          if (*(int *)local_78 != 0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            local_31 = *(int *)local_78 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10023c1f0;
          }
          QArrayData::deallocate(local_78,1,8);
        }
LAB_10023c1f0:
        if (*(int *)local_80 == -1) {
          return 0x80000001;
        }
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          UNLOCK();
          if (*(int *)local_80 != 0) {
            return 0x80000001;
          }
          local_31 = 0;
        }
        goto LAB_10023c217;
      }
    }
    uVar9 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar9 = *(undefined8 *)(param_1 + 0x20);
    }
    iVar1 = FUN_100325aa0(uVar9);
    if (iVar1 != 1) {
      FUN_10036d370(pQVar7,1);
    }
    iVar1 = QWidget::minimumSize();
    iVar3 = FUN_10036da80(pQVar7);
    QWidget::setMinimumSize((int)pQVar7,iVar3 + iVar1);
    FUN_10036d220(pQVar7,lVar5);
    MacUtils::setToolbarButtonVisible(pQVar7,true);
    QWidget::setWindowOpacity(DAT_100e11050);
    uVar9 = 0;
    MacUtils::setStaysOnTop(pQVar7,false);
    QWidget::setAttribute(pQVar7,0x33,0);
    uVar4 = CWindowInterface::customWindowFlags();
    CWindowInterface::setCustomWindowFlags(pQVar7 + 0x30,uVar4 | 0x1000);
    FUN_10023ae00(param_1,param_2);
  }
  return uVar9;
}

