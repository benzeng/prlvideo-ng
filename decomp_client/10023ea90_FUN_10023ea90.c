
undefined8 FUN_10023ea90(long param_1,undefined1 param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  QSize *pQVar8;
  undefined8 uVar9;
  QArrayData *pQVar10;
  bool bVar11;
  undefined1 auVar12 [16];
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  int local_38;
  int local_34;
  
  uVar9 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar9 = *(undefined8 *)(param_1 + 0x20);
  }
  lVar6 = FUN_100323e30(uVar9,1);
  if (lVar6 == 0) {
    uVar9 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar9 = *(undefined8 *)(param_1 + 0x20);
    }
    FUN_100323d90(&local_48,uVar9);
    QString::toLocal8Bit();
    pQVar10 = local_40 + *(long *)(local_40 + 0x10);
    uVar9 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar9 = *(undefined8 *)(param_1 + 0x20);
    }
    uVar3 = FUN_100323e20(uVar9);
    EnumUtils::enumToString(&local_60,*(undefined4 *)(param_1 + 0x28),1);
    QString::toUpper();
    QString::toLocal8Bit();
    FUN_100df99c0("","prl_client_app",0,
                  "Failed to switch VM\'s [%s] display [%d] to %s mode. Display widget doesn\'t exist and cannot be created!"
                  ,pQVar10,uVar3,local_50 + *(long *)(local_50 + 0x10));
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        UNLOCK();
        local_38 = CONCAT31(local_38._1_3_,*(int *)local_50 != 0);
        if (*(int *)local_50 != 0) goto LAB_10023ee3e;
      }
      QArrayData::deallocate(local_50,1,8);
    }
LAB_10023ee3e:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        UNLOCK();
        local_38 = CONCAT31(local_38._1_3_,*(int *)local_58 != 0);
        if (*(int *)local_58 != 0) goto LAB_10023ee6e;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_10023ee6e:
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        UNLOCK();
        local_38 = CONCAT31(local_38._1_3_,*(int *)local_60 != 0);
        if (*(int *)local_60 != 0) goto LAB_10023ee9e;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_10023ee9e:
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        local_38 = CONCAT31(local_38._1_3_,*(int *)local_40 != 0);
        if (*(int *)local_40 != 0) goto LAB_10023eece;
      }
      QArrayData::deallocate(local_40,1,8);
    }
LAB_10023eece:
    if (*(int *)local_48 == -1) {
      return 0x80000001;
    }
    local_80 = local_48;
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      bVar11 = *(int *)local_48 != 0;
      UNLOCK();
      local_38 = CONCAT31(local_38._1_3_,bVar11);
joined_r0x00010023eef6:
      if (bVar11) {
        return 0x80000001;
      }
    }
LAB_10023efd9:
    uVar9 = 0x80000001;
    QArrayData::deallocate(local_80,2,8);
  }
  else {
    iVar2 = FUN_10037a280(4);
    QWidget::setMinimumSize((int)lVar6,iVar2);
    uVar7 = FUN_100370280();
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
    uVar3 = FUN_100323e20(uVar9);
    pQVar8 = (QSize *)FUN_1003704b0(uVar7,&local_68,uVar3);
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        UNLOCK();
        local_38 = CONCAT31(local_38._1_3_,*(int *)local_68 != 0);
        if (*(int *)local_68 != 0) goto LAB_10023eb7a;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_10023eb7a:
    if (pQVar8 == (QSize *)0x0) {
      uVar7 = FUN_100370280();
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
      uVar3 = FUN_100323e20(uVar9);
      pQVar8 = (QSize *)FUN_1003739f0(uVar7,&local_70,uVar3,4,0);
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          UNLOCK();
          local_38 = CONCAT31(local_38._1_3_,*(int *)local_70 != 0);
          if (*(int *)local_70 != 0) goto LAB_10023ec14;
        }
        QArrayData::deallocate(local_70,2,8);
      }
LAB_10023ec14:
      if (pQVar8 == (QSize *)0x0) {
        uVar9 = 0;
        if ((*(long *)(param_1 + 0x18) != 0) &&
           (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
          uVar9 = *(undefined8 *)(param_1 + 0x20);
        }
        FUN_100323d90(&local_80,uVar9);
        QString::toLocal8Bit();
        pQVar10 = local_78 + *(long *)(local_78 + 0x10);
        uVar9 = 0;
        if ((*(long *)(param_1 + 0x18) != 0) &&
           (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
          uVar9 = *(undefined8 *)(param_1 + 0x20);
        }
        uVar3 = FUN_100323e20(uVar9);
        FUN_100df99c0("","prl_client_app",0,
                      "Failed to switch VM\'s [%s] display [%d] to modality mode. Display window doesn\'t exist and cannot be created!"
                      ,pQVar10,uVar3);
        if (*(int *)local_78 != -1) {
          if (*(int *)local_78 != 0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            UNLOCK();
            local_38 = CONCAT31(local_38._1_3_,*(int *)local_78 != 0);
            if (*(int *)local_78 != 0) goto LAB_10023efb3;
          }
          QArrayData::deallocate(local_78,1,8);
        }
LAB_10023efb3:
        if (*(int *)local_80 == -1) {
          return 0x80000001;
        }
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          bVar11 = *(int *)local_80 != 0;
          UNLOCK();
          local_38 = CONCAT31(local_38._1_3_,bVar11);
          goto joined_r0x00010023eef6;
        }
        goto LAB_10023efd9;
      }
    }
    iVar2 = QWidget::minimumSize();
    iVar4 = FUN_10036da80(pQVar8);
    QWidget::setMinimumSize((int)pQVar8,iVar4 + iVar2);
    uVar9 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar9 = *(undefined8 *)(param_1 + 0x20);
    }
    iVar2 = FUN_100325aa0(uVar9);
    if (iVar2 != 4) {
      FUN_10036d370(pQVar8,4);
    }
    FUN_10036d220(pQVar8);
    uVar9 = 0;
    MacUtils::setToolbarButtonVisible((QWidget *)pQVar8,false);
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar9 = *(undefined8 *)(param_1 + 0x20);
    }
    auVar12 = FUN_100325fd0(uVar9);
    if (auVar12._0_4_ <= auVar12._8_4_) {
      if (auVar12._4_4_ <= auVar12._12_4_) {
        local_38 = (*(int *)((long)pQVar8[5] + 0x1c) + 1) - *(int *)((long)pQVar8[5] + 0x14);
        local_34 = (int)((double)local_38 *
                        ((double)((auVar12._12_4_ + 1) - auVar12._4_4_) /
                        (double)((auVar12._8_4_ + 1) - auVar12._0_4_)));
        QWidget::resize(pQVar8);
      }
    }
    uVar9 = FUN_1001d50a0();
    uVar1 = FUN_1001d50e0(uVar9);
    FUN_10036d200(pQVar8,uVar1);
    uVar5 = CWindowInterface::customWindowFlags();
    CWindowInterface::setCustomWindowFlags(pQVar8 + 6,uVar5 | 0x1000);
    FUN_10023ae00(param_1,param_2);
    uVar9 = 0;
  }
  return uVar9;
}

