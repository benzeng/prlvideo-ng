
void FUN_1001416a0(QWidget *param_1,undefined8 param_2,undefined4 param_3)

{
  QPixmap *this;
  QPixmap *this_00;
  QPixmap *this_01;
  QPixmap *this_02;
  undefined *puVar1;
  char *pcVar2;
  char cVar3;
  size_t sVar4;
  int iVar5;
  QString local_a0;
  QArrayData *local_98;
  QString local_90;
  QString local_88;
  QArrayData *local_80;
  QString local_78;
  QString local_70;
  QArrayData *local_68;
  QString local_60;
  QString local_58;
  QArrayData *local_50;
  QString local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  QWidget::QWidget(param_1,param_2,0);
  *(undefined ***)param_1 = &PTR_FUN_1021fba50;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_1021fbc00;
  this = (QPixmap *)(param_1 + 0x30);
  QPixmap::QPixmap(this);
  this_00 = (QPixmap *)(param_1 + 0x50);
  QPixmap::QPixmap(this_00);
  this_01 = (QPixmap *)(param_1 + 0x70);
  QPixmap::QPixmap(this_01);
  this_02 = (QPixmap *)(param_1 + 0x90);
  QPixmap::QPixmap(this_02);
  FUN_100141550(param_1 + 0xb0,param_3,0x200000000);
  *(undefined2 *)(param_1 + 0xf8) = 0;
  local_40 = (QArrayData *)QString::fromAscii_helper("CColorButton",0xc);
  QObject::setObjectName((QString *)param_1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10014178e;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10014178e:
  QWidget::setContentsMargins((int)param_1,0,0,0);
  QWidget::setFixedSize((int)param_1,0x12);
  puVar1 = PTR_s__pixmaps_VmColorAction_color_sel_10226dae8;
  iVar5 = -1;
  if (PTR_s__pixmaps_VmColorAction_color_sel_10226dae8 != (undefined *)0x0) {
    sVar4 = _strlen(PTR_s__pixmaps_VmColorAction_color_sel_10226dae8);
    iVar5 = (int)sVar4;
  }
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(puVar1,iVar5);
  cVar3 = QPixmapCache::find(&local_48,this_00);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10014181b;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_10014181b:
  puVar1 = PTR_s__pixmaps_VmColorAction_color_sel_10226dae8;
  if (cVar3 == '\0') {
    iVar5 = -1;
    if (PTR_s__pixmaps_VmColorAction_color_sel_10226dae8 != (undefined *)0x0) {
      sVar4 = _strlen(PTR_s__pixmaps_VmColorAction_color_sel_10226dae8);
      iVar5 = (int)sVar4;
    }
    local_50 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar5);
    QPixmap::load(this_00,&local_50,0,0);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10014188f;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_10014188f:
    puVar1 = PTR_s__pixmaps_VmColorAction_color_sel_10226dae8;
    iVar5 = -1;
    if (PTR_s__pixmaps_VmColorAction_color_sel_10226dae8 != (undefined *)0x0) {
      sVar4 = _strlen(PTR_s__pixmaps_VmColorAction_color_sel_10226dae8);
      iVar5 = (int)sVar4;
    }
    local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(puVar1,iVar5)
    ;
    QPixmapCache::insert(&local_58,this_00);
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_31 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001418f7;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
  }
LAB_1001418f7:
  puVar1 = PTR_s__pixmaps_VmColorAction_color_sel_10226dae0;
  iVar5 = -1;
  if (PTR_s__pixmaps_VmColorAction_color_sel_10226dae0 != (undefined *)0x0) {
    sVar4 = _strlen(PTR_s__pixmaps_VmColorAction_color_sel_10226dae0);
    iVar5 = (int)sVar4;
  }
  local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(puVar1,iVar5);
  cVar3 = QPixmapCache::find(&local_60,this);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10014195d;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_10014195d:
  puVar1 = PTR_s__pixmaps_VmColorAction_color_sel_10226dae0;
  if (cVar3 == '\0') {
    iVar5 = -1;
    if (PTR_s__pixmaps_VmColorAction_color_sel_10226dae0 != (undefined *)0x0) {
      sVar4 = _strlen(PTR_s__pixmaps_VmColorAction_color_sel_10226dae0);
      iVar5 = (int)sVar4;
    }
    local_68 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar5);
    QPixmap::load(this,&local_68,0,0);
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001419cd;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_1001419cd:
    puVar1 = PTR_s__pixmaps_VmColorAction_color_sel_10226dae0;
    iVar5 = -1;
    if (PTR_s__pixmaps_VmColorAction_color_sel_10226dae0 != (undefined *)0x0) {
      sVar4 = _strlen(PTR_s__pixmaps_VmColorAction_color_sel_10226dae0);
      iVar5 = (int)sVar4;
    }
    local_70.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(puVar1,iVar5)
    ;
    QPixmapCache::insert(&local_70,this);
    if (*(int *)local_70.field0_0x0 != -1) {
      if (*(int *)local_70.field0_0x0 != 0) {
        LOCK();
        *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
        local_31 = *(int *)local_70.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100141a31;
      }
      QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
    }
  }
LAB_100141a31:
  puVar1 = PTR_s__pixmaps_VmColorAction_color_sel_10226daf0;
  iVar5 = -1;
  if (PTR_s__pixmaps_VmColorAction_color_sel_10226daf0 != (undefined *)0x0) {
    sVar4 = _strlen(PTR_s__pixmaps_VmColorAction_color_sel_10226daf0);
    iVar5 = (int)sVar4;
  }
  local_78.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(puVar1,iVar5);
  cVar3 = QPixmapCache::find(&local_78,this_01);
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_31 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100141a97;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_100141a97:
  puVar1 = PTR_s__pixmaps_VmColorAction_color_sel_10226daf0;
  if (cVar3 == '\0') {
    iVar5 = -1;
    if (PTR_s__pixmaps_VmColorAction_color_sel_10226daf0 != (undefined *)0x0) {
      sVar4 = _strlen(PTR_s__pixmaps_VmColorAction_color_sel_10226daf0);
      iVar5 = (int)sVar4;
    }
    local_80 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar5);
    QPixmap::load(this_01,&local_80,0,0);
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_31 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100141b07;
      }
      QArrayData::deallocate(local_80,2,8);
    }
LAB_100141b07:
    puVar1 = PTR_s__pixmaps_VmColorAction_color_sel_10226daf0;
    iVar5 = -1;
    if (PTR_s__pixmaps_VmColorAction_color_sel_10226daf0 != (undefined *)0x0) {
      sVar4 = _strlen(PTR_s__pixmaps_VmColorAction_color_sel_10226daf0);
      iVar5 = (int)sVar4;
    }
    local_88.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(puVar1,iVar5)
    ;
    QPixmapCache::insert(&local_88,this_01);
    if (*(int *)local_88.field0_0x0 != -1) {
      if (*(int *)local_88.field0_0x0 != 0) {
        LOCK();
        *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
        local_31 = *(int *)local_88.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100141b6b;
      }
      QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
    }
  }
LAB_100141b6b:
  pcVar2 = DAT_10226daf8;
  iVar5 = -1;
  if (DAT_10226daf8 != (char *)0x0) {
    sVar4 = _strlen(DAT_10226daf8);
    iVar5 = (int)sVar4;
  }
  local_90.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(pcVar2,iVar5);
  cVar3 = QPixmapCache::find(&local_90,this_02);
  if (*(int *)local_90.field0_0x0 != -1) {
    if (*(int *)local_90.field0_0x0 != 0) {
      LOCK();
      *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
      local_31 = *(int *)local_90.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100141bdd;
    }
    QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
  }
LAB_100141bdd:
  pcVar2 = DAT_10226daf8;
  if (cVar3 != '\0') {
    return;
  }
  iVar5 = -1;
  if (DAT_10226daf8 != (char *)0x0) {
    sVar4 = _strlen(DAT_10226daf8);
    iVar5 = (int)sVar4;
  }
  local_98 = (QArrayData *)QString::fromAscii_helper(pcVar2,iVar5);
  QPixmap::load(this_02,&local_98,0,0);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100141c59;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_100141c59:
  pcVar2 = DAT_10226daf8;
  iVar5 = -1;
  if (DAT_10226daf8 != (char *)0x0) {
    sVar4 = _strlen(DAT_10226daf8);
    iVar5 = (int)sVar4;
  }
  local_a0.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(pcVar2,iVar5);
  QPixmapCache::insert(&local_a0,this_02);
  if (*(int *)local_a0.field0_0x0 != -1) {
    if (*(int *)local_a0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_a0.field0_0x0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
  }
  return;
}

