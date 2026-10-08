
void FUN_100589820(long param_1,QString *param_2)

{
  QString *pQVar1;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  QCoreApplication::translate((char *)&local_30,"CEditKeySequenceDialog","Select key sequence...",0)
  ;
  QWidget::setWindowTitle(param_2);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100589890;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100589890:
  pQVar1 = *(QString **)(param_1 + 0x28);
  QCoreApplication::translate((char *)&local_38,"CEditKeySequenceDialog","From:",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005898f1;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1005898f1:
  pQVar1 = *(QString **)(param_1 + 0x30);
  QCoreApplication::translate((char *)&local_40,"CEditKeySequenceDialog","Shift",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100589952;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100589952:
  pQVar1 = *(QString **)(param_1 + 0x38);
  QCoreApplication::translate((char *)&local_48,"CEditKeySequenceDialog","Ctrl",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005899b3;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1005899b3:
  pQVar1 = *(QString **)(param_1 + 0x40);
  QCoreApplication::translate((char *)&local_50,"CEditKeySequenceDialog","Alt",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100589a14;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100589a14:
  pQVar1 = *(QString **)(param_1 + 0x48);
  QCoreApplication::translate((char *)&local_58,"CEditKeySequenceDialog","Cmd",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100589a75;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100589a75:
  pQVar1 = *(QString **)(param_1 + 0x70);
  QCoreApplication::translate((char *)&local_60,"CEditKeySequenceDialog","To:",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_21 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100589ad6;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100589ad6:
  pQVar1 = *(QString **)(param_1 + 0x78);
  QCoreApplication::translate((char *)&local_68,"CEditKeySequenceDialog","Shift",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_21 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100589b37;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100589b37:
  pQVar1 = *(QString **)(param_1 + 0x80);
  QCoreApplication::translate((char *)&local_70,"CEditKeySequenceDialog","Ctrl",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_21 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100589b9b;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100589b9b:
  pQVar1 = *(QString **)(param_1 + 0x88);
  QCoreApplication::translate((char *)&local_78,"CEditKeySequenceDialog","Cmd",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_21 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100589bff;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100589bff:
  pQVar1 = *(QString **)(param_1 + 0x90);
  QCoreApplication::translate((char *)&local_80,"CEditKeySequenceDialog","Alt",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_21 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100589c63;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100589c63:
  pQVar1 = *(QString **)(param_1 + 0xb0);
  QCoreApplication::translate((char *)&local_88,"CEditKeySequenceDialog","Clear",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_21 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100589cc7;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100589cc7:
  pQVar1 = *(QString **)(param_1 + 0xc0);
  QCoreApplication::translate((char *)&local_90,"CEditKeySequenceDialog","Cancel",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_21 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100589d34;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100589d34:
  pQVar1 = *(QString **)(param_1 + 200);
  QCoreApplication::translate((char *)&local_98,"CEditKeySequenceDialog","OK",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      UNLOCK();
      if (*(int *)local_98 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_98,2,8);
  }
  return;
}

