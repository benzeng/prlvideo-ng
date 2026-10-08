
/* WARNING: Removing unreachable block (ram,0x000100423467) */
/* WARNING: Removing unreachable block (ram,0x000100423475) */
/* WARNING: Removing unreachable block (ram,0x000100423481) */

void FUN_1004230c0(long *param_1,char param_2)

{
  int iVar1;
  long *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  CSlotInfo *pCVar10;
  Data_conflict local_78;
  undefined4 local_70;
  undefined1 local_68;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  uVar7 = FUN_100152280();
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getVmUuid();
  lVar8 = FUN_1001548f0(uVar7,&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100423136;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100423136:
  if (lVar8 == 0) {
    return;
  }
  bVar3 = (bool)QDialogButtonBox::button(*(undefined8 *)(param_1[0xc] + 0xd8),0x400);
  QWidget::setEnabled(bVar3);
  if (param_2 == '\0') {
    (**(code **)(**(long **)(param_1[0xc] + 0x98) + 0x68))(*(long **)(param_1[0xc] + 0x98),0);
    (**(code **)(**(long **)(param_1[0xc] + 0xa8) + 0x68))(*(long **)(param_1[0xc] + 0xa8),0);
    (**(code **)(**(long **)(param_1[0xc] + 0xb0) + 0x68))(*(long **)(param_1[0xc] + 0xb0),0);
    goto LAB_10042338f;
  }
  cVar4 = FUN_10011cdc0(lVar8);
  plVar2 = *(long **)(param_1[0xc] + 0x98);
  if (cVar4 == '\0') {
    (**(code **)(*plVar2 + 0x68))(plVar2,0);
    (**(code **)(**(long **)(param_1[0xc] + 0xa8) + 0x68))(*(long **)(param_1[0xc] + 0xa8),0);
    (**(code **)(**(long **)(param_1[0xc] + 0xb0) + 0x68))(*(long **)(param_1[0xc] + 0xb0),1);
    local_50 = (QArrayData *)QString::fromAscii_helper("<font color=\'red\'>%1</font>",0x1b);
    QMetaObject::tr((char *)&local_58,(char *)&PTR_staticMetaObject_102210f10,0x1df39bd);
    QString::arg(&local_48,&local_50,&local_58,0,0x20);
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_29 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100423311;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_100423311:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_29 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100423341;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_100423341:
    QLabel::setText(*(QString **)(param_1[0xc] + 0xb0));
    QWidget::setEnabled(bVar3);
    if (*(int *)local_48 == -1) goto LAB_10042338f;
    local_40 = local_48;
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      iVar5 = *(int *)local_48;
      UNLOCK();
      goto joined_r0x00010042337a;
    }
  }
  else {
    (**(code **)(*plVar2 + 0x68))(plVar2,1);
    (**(code **)(**(long **)(param_1[0xc] + 0xa8) + 0x68))(*(long **)(param_1[0xc] + 0xa8),1);
    (**(code **)(**(long **)(param_1[0xc] + 0xb0) + 0x68))(*(long **)(param_1[0xc] + 0xb0),1);
    QMetaObject::tr((char *)&local_40,(char *)&PTR_staticMetaObject_102210f10,0x1df171d);
    QLabel::setText(*(QString **)(param_1[0xc] + 0xb0));
    if (*(int *)local_40 == -1) goto LAB_10042338f;
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      iVar5 = *(int *)local_40;
      UNLOCK();
joined_r0x00010042337a:
      local_29 = iVar5 != 0;
      if ((bool)local_29) goto LAB_10042338f;
    }
  }
  QArrayData::deallocate(local_40,2,8);
LAB_10042338f:
  iVar5 = QComboBox::currentIndex();
  if (iVar5 == 1) {
    lVar8 = param_1[0x17];
    iVar5 = *(int *)(param_1[5] + 0x1c);
    iVar1 = *(int *)(param_1[5] + 0x14);
    iVar6 = QComboBox::currentIndex();
    if (iVar6 == 1) {
      pCVar10 = (CSlotInfo *)0xdc;
      if (((*(byte *)(*(long *)(*(long *)(param_1[0xc] + 0xa8) + 0x28) + 9) & 0x80) == 0) &&
         (pCVar10 = (CSlotInfo *)0xb4,
         (*(byte *)(*(long *)(*(long *)(param_1[0xc] + 0xb0) + 0x28) + 9) & 0x80) != 0)) {
        pCVar10 = (CSlotInfo *)0x104;
      }
    }
    else {
      uVar9 = (**(code **)(*param_1 + 0x78))(param_1);
      pCVar10 = (CSlotInfo *)(uVar9 >> 0x20);
    }
    local_70 = 0x80000000;
    local_78.field7 = 0;
    local_68 = 1;
    CWindowResizeController::beginResize((int)lVar8,(iVar5 + 1) - iVar1,pCVar10);
    QVariant::~QVariant((QVariant *)&local_78);
  }
  return;
}

