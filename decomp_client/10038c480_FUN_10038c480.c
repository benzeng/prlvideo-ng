
void FUN_10038c480(QObject *param_1,QEvent *param_2,long param_3)

{
  short sVar1;
  QString *pQVar2;
  undefined *puVar3;
  size_t sVar4;
  long lVar5;
  int iVar6;
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
  
  puVar3 = PTR_s_QWidget__1___border_image__url___102273bf0;
  sVar1 = *(short *)(param_3 + 0x10);
  if (sVar1 == 10) {
    if (*(QEvent **)(*(long *)(param_1 + 0x18) + 0xb0) == param_2) {
      pQVar2 = *(QString **)(*(long *)(param_1 + 0x18) + 0xa0);
      iVar6 = -1;
      if (PTR_s_QWidget__1___border_image__url___102273bf0 != (undefined *)0x0) {
        sVar4 = _strlen(PTR_s_QWidget__1___border_image__url___102273bf0);
        iVar6 = (int)sVar4;
      }
      local_48 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar6);
      local_50 = (QArrayData *)QString::fromAscii_helper("m_wgtYes",8);
      QString::arg(&local_40,&local_48,&local_50,0,0x20);
      QWidget::setStyleSheet(pQVar2);
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_31 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10038c552;
        }
        QArrayData::deallocate(local_40,2,8);
      }
LAB_10038c552:
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_31 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10038c582;
        }
        QArrayData::deallocate(local_50,2,8);
      }
LAB_10038c582:
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_31 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10038c5b2;
        }
        QArrayData::deallocate(local_48,2,8);
      }
LAB_10038c5b2:
      pQVar2 = *(QString **)(*(long *)(param_1 + 0x18) + 0x88);
      local_58 = (QArrayData *)QString::fromAscii_helper("",0);
      QWidget::setStyleSheet(pQVar2);
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_31 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10038c60b;
        }
        QArrayData::deallocate(local_58,2,8);
      }
    }
LAB_10038c60b:
    if (*(QEvent **)(*(long *)(param_1 + 0x18) + 0x98) == param_2) {
      pQVar2 = *(QString **)(*(long *)(param_1 + 0x18) + 0xa0);
      local_60 = (QArrayData *)QString::fromAscii_helper("",0);
      QWidget::setStyleSheet(pQVar2);
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10038c671;
        }
        QArrayData::deallocate(local_60,2,8);
      }
LAB_10038c671:
      puVar3 = PTR_s_QWidget__1___border_image__url___102273bf0;
      pQVar2 = *(QString **)(*(long *)(param_1 + 0x18) + 0x88);
      iVar6 = -1;
      if (PTR_s_QWidget__1___border_image__url___102273bf0 != (undefined *)0x0) {
        sVar4 = _strlen(PTR_s_QWidget__1___border_image__url___102273bf0);
        iVar6 = (int)sVar4;
      }
      local_70 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar6);
      local_78 = (QArrayData *)QString::fromAscii_helper("m_wgtNo",7);
      QString::arg(&local_68,&local_70,&local_78,0,0x20);
      QWidget::setStyleSheet(pQVar2);
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10038c70e;
        }
        QArrayData::deallocate(local_68,2,8);
      }
LAB_10038c70e:
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10038c73e;
        }
        QArrayData::deallocate(local_78,2,8);
      }
LAB_10038c73e:
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10038c76e;
        }
        QArrayData::deallocate(local_70,2,8);
      }
    }
LAB_10038c76e:
    sVar1 = *(short *)(param_3 + 0x10);
  }
  if ((sVar1 == 6) && (*(QEvent **)(param_1 + 0x10) == param_2)) {
    lVar5 = ___dynamic_cast(param_3,PTR_typeinfo_1021e1710,PTR_typeinfo_1021e1750,0);
    FUN_10038c390(param_1);
    if (lVar5 != 0) {
      iVar6 = *(int *)(lVar5 + 0x28);
      if ((iVar6 + 0xfefffffcU < 2) || (iVar6 == 0x20)) {
        QWidget::styleSheet();
        iVar6 = *(int *)(local_80 + 4);
        if (*(int *)local_80 != -1) {
          if (*(int *)local_80 != 0) {
            LOCK();
            *(int *)local_80 = *(int *)local_80 + -1;
            local_31 = *(int *)local_80 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10038c80f;
          }
          QArrayData::deallocate(local_80,2,8);
        }
LAB_10038c80f:
        if (iVar6 == 0) {
          (**(code **)(**(long **)(param_1 + 0x10) + 0x1c0))();
        }
        else {
          (**(code **)(**(long **)(param_1 + 0x10) + 0x1b8))();
        }
      }
      else if (iVar6 == 0x1000000) {
        (**(code **)(**(long **)(param_1 + 0x10) + 0x1c0))();
      }
    }
  }
  sVar1 = *(short *)(param_3 + 0x10);
  if (sVar1 == 7) {
    if (*(QEvent **)(param_1 + 0x10) != param_2) goto LAB_10038c895;
    FUN_10038c390(param_1);
    sVar1 = *(short *)(param_3 + 0x10);
  }
  if (sVar1 == 3) {
    if (*(QEvent **)(*(long *)(param_1 + 0x18) + 0xb0) == param_2) {
      (**(code **)(**(long **)(param_1 + 0x10) + 0x1b8))();
    }
    else if (*(QEvent **)(*(long *)(param_1 + 0x18) + 0x98) == param_2) {
      (**(code **)(**(long **)(param_1 + 0x10) + 0x1c0))();
    }
  }
LAB_10038c895:
  QObject::eventFilter(param_1,param_2);
  return;
}

