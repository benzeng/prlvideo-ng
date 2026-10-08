
void FUN_1005d0000(long param_1,byte param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  code *pcVar3;
  QString *pQVar4;
  char cVar5;
  undefined8 uVar6;
  long lVar7;
  bool bVar8;
  QLocale local_148 [8];
  QArrayData *local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  QArrayData *local_128;
  QArrayData *local_120;
  QString local_118;
  QString local_110;
  QString local_108;
  QString local_100;
  QString local_f8;
  QString local_f0;
  QString local_e8;
  QString local_e0;
  QString local_d8;
  QString local_d0;
  undefined1 local_c8 [8];
  QLocale local_c0 [8];
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QString local_90;
  QString local_88;
  QString local_80;
  QString local_78;
  QString local_70;
  QString local_68;
  QString local_60;
  QString local_58;
  QString local_50;
  QString local_48;
  undefined1 local_40 [8];
  QFontMetrics local_38 [15];
  undefined1 local_29;
  
  QFontMetrics::QFontMetrics
            (local_38,(QFont *)(*(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x68) + 0x28) + 0x38
                               ));
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x68);
  QFontMetrics::width(local_38,0x57);
  QWidget::setMinimumWidth((int)uVar6);
  plVar1 = *(long **)(*(long *)(param_1 + 0x18) + 0x28);
  (**(code **)(*plVar1 + 0x68))(plVar1,param_2);
  plVar1 = *(long **)(*(long *)(param_1 + 0x18) + 0x30);
  (**(code **)(*plVar1 + 0x68))(plVar1,param_2 ^ 1);
  plVar1 = *(long **)(*(long *)(param_1 + 0x18) + 0x68);
  (**(code **)(*plVar1 + 0x68))(plVar1,param_2 ^ 1);
  QLayout::removeWidget((QWidget *)**(undefined8 **)(param_1 + 0x18));
  QLayout::removeWidget((QWidget *)**(undefined8 **)(param_1 + 0x18));
  QLayout::removeWidget((QWidget *)**(undefined8 **)(param_1 + 0x18));
  puVar2 = *(undefined8 **)(param_1 + 0x18);
  if (param_2 == 0) {
    QGridLayout::addWidget(*puVar2,puVar2[6],1,1,1,2,0);
  }
  else {
    QGridLayout::addWidget(*puVar2,puVar2[5],1,1,1,2,0);
  }
  QGridLayout::addWidget
            (**(undefined8 **)(param_1 + 0x18),(*(undefined8 **)(param_1 + 0x18))[10],2,1,2,1,0);
  plVar1 = *(long **)(*(long *)(param_1 + 0x18) + 0x90);
  pcVar3 = *(code **)(*plVar1 + 0x68);
  uVar6 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48);
  cVar5 = FUN_1005b7970(uVar6);
  if (cVar5 == '\0') {
    bVar8 = false;
  }
  else {
    lVar7 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48);
    if (*(int *)(lVar7 + 0x38) == 0x80f) {
      lVar7 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48);
      bVar8 = *(int *)(lVar7 + 0x50) != 4;
    }
    else {
      bVar8 = false;
    }
  }
  (*pcVar3)(plVar1,bVar8 ^ 1);
  plVar1 = *(long **)(*(long *)(param_1 + 0x18) + 0x80);
  pcVar3 = *(code **)(*plVar1 + 0x68);
  uVar6 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48);
  cVar5 = FUN_1005b7970(uVar6);
  if (cVar5 == '\0') {
    bVar8 = false;
  }
  else {
    lVar7 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48);
    if (*(int *)(lVar7 + 0x38) == 0x80f) {
      lVar7 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48);
      bVar8 = *(int *)(lVar7 + 0x50) != 4;
    }
    else {
      bVar8 = false;
    }
  }
  (*pcVar3)(plVar1,bVar8);
  plVar1 = *(long **)(*(long *)(param_1 + 0x18) + 0x78);
  pcVar3 = *(code **)(*plVar1 + 0x68);
  uVar6 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48);
  cVar5 = FUN_1005b7970(uVar6);
  if (cVar5 == '\0') {
    bVar8 = false;
  }
  else {
    lVar7 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48);
    if (*(int *)(lVar7 + 0x38) == 0x80f) {
      lVar7 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48);
      bVar8 = *(int *)(lVar7 + 0x50) != 4;
    }
    else {
      bVar8 = false;
    }
  }
  (*pcVar3)(plVar1,bVar8);
  plVar1 = *(long **)(*(long *)(param_1 + 0x18) + 0x88);
  pcVar3 = *(code **)(*plVar1 + 0x68);
  uVar6 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48);
  cVar5 = FUN_1005b7970(uVar6);
  if (cVar5 == '\0') {
    bVar8 = false;
  }
  else {
    lVar7 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48);
    if (*(int *)(lVar7 + 0x38) == 0x80f) {
      lVar7 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48);
      bVar8 = *(int *)(lVar7 + 0x50) != 4;
    }
    else {
      bVar8 = false;
    }
  }
  (*pcVar3)(plVar1,bVar8);
  uVar6 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48);
  cVar5 = FUN_1005b7970(uVar6);
  if (((cVar5 == '\0') ||
      (lVar7 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48), *(int *)(lVar7 + 0x38) != 0x80f)) ||
     (lVar7 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48), *(int *)(lVar7 + 0x50) == 4))
  goto LAB_1005d07dd;
  uVar6 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48);
  local_98 = (QArrayData *)QString::fromAscii_helper("os_win10",8);
  uVar6 = FUN_1005b8a40(uVar6,&local_98);
  local_a0 = (QArrayData *)QString::fromAscii_helper("win_10_home",0xb);
  FUN_100746cb0(&local_90,uVar6,&local_a0);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_29 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005d03d2;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_1005d03d2:
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_29 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005d0408;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1005d0408:
  pQVar4 = *(QString **)(*(long *)(param_1 + 0x18) + 0x78);
  QLabel::text();
  QLocale::QLocale(local_c0);
  FUN_100d3f730(&local_b8,&local_60,local_c0);
  QString::arg(&local_a8,&local_b0,&local_b8,0,0x20);
  QLabel::setText(pQVar4);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_29 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005d04ac;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_1005d04ac:
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_29 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005d04e2;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_1005d04e2:
  QLocale::~QLocale(local_c0);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_29 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005d0524;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_1005d0524:
  uVar6 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48);
  local_120 = (QArrayData *)QString::fromAscii_helper("os_win10",8);
  uVar6 = FUN_1005b8a40(uVar6,&local_120);
  local_128 = (QArrayData *)QString::fromAscii_helper("win_10_pro",10);
  FUN_100746cb0(&local_118,uVar6,&local_128);
  QString::operator=(&local_90,&local_118);
  QString::operator=(&local_88,&local_110);
  QString::operator=(&local_80,&local_108);
  QString::operator=(&local_78,&local_100);
  QString::operator=(&local_70,&local_f8);
  QString::operator=(&local_68,&local_f0);
  QString::operator=(&local_60,&local_e8);
  QString::operator=(&local_58,&local_e0);
  QString::operator=(&local_50,&local_d8);
  QString::operator=(&local_48,&local_d0);
  FUN_100283c40(local_40,local_c8);
  FUN_100252e70(&local_118);
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_29 = *(int *)local_128 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005d0680;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_1005d0680:
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_29 = *(int *)local_120 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005d06b6;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_1005d06b6:
  pQVar4 = *(QString **)(*(long *)(param_1 + 0x18) + 0x88);
  QLabel::text();
  QLocale::QLocale(local_148);
  FUN_100d3f730(&local_140,&local_60,local_148);
  QString::arg(&local_130,&local_138,&local_140,0,0x20);
  QLabel::setText(pQVar4);
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_29 = *(int *)local_130 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005d0759;
    }
    QArrayData::deallocate(local_130,2,8);
  }
LAB_1005d0759:
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_29 = *(int *)local_140 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005d078f;
    }
    QArrayData::deallocate(local_140,2,8);
  }
LAB_1005d078f:
  QLocale::~QLocale(local_148);
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_29 = *(int *)local_138 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005d07d1;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_1005d07d1:
  FUN_100252e70(&local_90);
LAB_1005d07dd:
  QFontMetrics::~QFontMetrics(local_38);
  return;
}

