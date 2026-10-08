
void FUN_100394c10(long param_1)

{
  QString *pQVar1;
  QArrayData *local_90;
  QLocale local_88 [8];
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QLocale local_50 [8];
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  FUN_100395530(*(undefined8 *)(param_1 + 0x30),param_1);
  FUN_1003954a0(param_1);
  pQVar1 = *(QString **)(*(long *)(param_1 + 0x30) + 0x30);
  QLabel::text();
  local_48 = (QArrayData *)
             QString::fromAscii_helper("http://www.parallels.com/trademarks-@LOCALE@",0x2c);
  QLocale::QLocale(local_50);
  FUN_100d3f730(&local_40,&local_48,local_50);
  QString::arg(&local_30,&local_38,&local_40,0,0x20);
  local_58 = (QArrayData *)QString::fromAscii_helper("#000000",7);
  QString::arg(&local_28,&local_30,&local_58,0,0x20);
  QLabel::setText(pQVar1);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100394cfb;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_100394cfb:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_19 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100394d2b;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100394d2b:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100394d5b;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100394d5b:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100394d8b;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100394d8b:
  QLocale::~QLocale(local_50);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100394dc4;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100394dc4:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100394df4;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100394df4:
  pQVar1 = *(QString **)(*(long *)(param_1 + 0x30) + 0x98);
  QLabel::text();
  local_80 = (QArrayData *)
             QString::fromAscii_helper("http://www.parallels.com/support/pdfm12-@LOCALE@",0x30);
  QLocale::QLocale(local_88);
  FUN_100d3f730(&local_78,&local_80,local_88);
  QString::arg(&local_68,&local_70,&local_78,0,0x20);
  local_90 = (QArrayData *)QString::fromAscii_helper("#000000",7);
  QString::arg(&local_60,&local_68,&local_90,0,0x20);
  QLabel::setText(pQVar1);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_19 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100394ec3;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100394ec3:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_19 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100394ef9;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100394ef9:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_19 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100394f29;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100394f29:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_19 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100394f59;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100394f59:
  QLocale::~QLocale(local_88);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_19 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100394f92;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100394f92:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      UNLOCK();
      if (*(int *)local_70 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_70,2,8);
  }
  return;
}

