
void FUN_10058c860(long param_1,QString *param_2)

{
  int iVar1;
  undefined8 uVar2;
  QString *pQVar3;
  undefined *puVar4;
  Data *pDVar5;
  Data *pDVar6;
  QArrayData *pQVar7;
  long lVar8;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  Data *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  QCoreApplication::translate((char *)&local_38,"CPortForwardDialog","Port Forwarding Settings",0);
  QWidget::setWindowTitle(param_2);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10058c8d2;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10058c8d2:
  QComboBox::clear();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  QCoreApplication::translate((char *)&local_48,"CPortForwardDialog","TCP",0);
  FUN_1000341d0(&local_40,&local_48);
  QCoreApplication::translate((char *)&local_50,"CPortForwardDialog","UDP",0);
  FUN_1000341d0(&local_40);
  QComboBox::insertItems((int)uVar2,(QStringList *)0x0);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10058c980;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10058c980:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10058c9b0;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10058c9b0:
  pDVar5 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10058ca41;
    }
    iVar1 = *(int *)(local_40 + 0xc);
    if (iVar1 != *(int *)(local_40 + 8)) {
      lVar8 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = local_40 + (long)iVar1 * 8 + 8;
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_10058ca20:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_29 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_10058ca20;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose(pDVar5);
  }
LAB_10058ca41:
  pQVar3 = *(QString **)(param_1 + 0x28);
  QCoreApplication::translate((char *)&local_58,"CPortForwardDialog","Forward to:",0);
  QLabel::setText(pQVar3);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10058caa2;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10058caa2:
  pQVar3 = *(QString **)(param_1 + 0x38);
  QCoreApplication::translate((char *)&local_60,"CPortForwardDialog","Source Port:",0);
  QLabel::setText(pQVar3);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10058cb03;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10058cb03:
  puVar4 = PTR_shared_null_1021e1288;
  local_68 = (QArrayData *)PTR_shared_null_1021e1288;
  QAbstractButton::setText(*(QString **)(param_1 + 0x48));
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10058cb4b;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10058cb4b:
  pQVar3 = *(QString **)(param_1 + 0x68);
  QCoreApplication::translate((char *)&local_70,"CPortForwardDialog","IP Address",0);
  QLineEdit::setPlaceholderText(pQVar3);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10058cbac;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10058cbac:
  pQVar3 = *(QString **)(param_1 + 0x88);
  QCoreApplication::translate((char *)&local_78,"CPortForwardDialog","Protocol:",0);
  QLabel::setText(pQVar3);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_29 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10058cc10;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10058cc10:
  pQVar3 = *(QString **)(param_1 + 0x90);
  QCoreApplication::translate((char *)&local_80,"CPortForwardDialog","Destination Port:",0);
  QLabel::setText(pQVar3);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_29 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10058cc74;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_10058cc74:
  QAbstractButton::setText(*(QString **)(param_1 + 0x98));
  if (*(int *)puVar4 != -1) {
    if (*(int *)puVar4 != 0) {
      LOCK();
      *(int *)puVar4 = *(int *)puVar4 + -1;
      UNLOCK();
      if (*(int *)puVar4 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)puVar4,2,8);
  }
  return;
}

