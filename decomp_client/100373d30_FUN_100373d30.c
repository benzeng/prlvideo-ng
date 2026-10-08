
void FUN_100373d30(long param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  uint *puVar6;
  char *pcVar7;
  QWidget *pQVar8;
  long lVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  QVariant local_a0;
  QArrayData *local_90;
  Data *local_88;
  Data *local_80;
  Data *local_78;
  Data *local_70;
  int local_68;
  undefined1 local_60 [8];
  uint *local_58;
  QArrayData *local_50;
  undefined4 local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (((*param_2 == 0) || (*(int *)(*param_2 + 4) == 0)) || (param_2[1] == 0)) {
    FUN_100df99c0("[CONSOLE_MNG]","prl_client_app",0,"(!)Error while removing console window.");
    return;
  }
  FUN_10036bf70();
  uVar3 = FUN_10036acc0();
  pQVar8 = (QWidget *)0x0;
  if ((*param_2 != 0) && (pQVar8 = (QWidget *)0x0, *(int *)(*param_2 + 4) != 0)) {
    pQVar8 = (QWidget *)param_2[1];
  }
  WidgetUtils::reparentNonBlockingDialogsTo((QWidget *)0x0,pQVar8);
  local_50 = local_40;
  if (1 < *(int *)local_40 + 1U) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + 1;
    local_31 = *(int *)local_40 != 0;
    UNLOCK();
  }
  puVar1 = (undefined8 *)(param_1 + 0x20);
  puVar10 = *(uint **)(param_1 + 0x20);
  local_48 = uVar3;
  if (1 < *puVar10) {
    FUN_100376900(puVar1);
    puVar10 = (uint *)*puVar1;
  }
  lVar4 = FUN_1003762d0(puVar10,&local_50);
  if (lVar4 != 0) {
    do {
      FUN_100376a80(*puVar1,lVar4);
      lVar4 = FUN_1003762d0(*puVar1,&local_50);
    } while (lVar4 != 0);
  }
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100373e4b;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100373e4b:
  puVar1 = (undefined8 *)(param_1 + 0x18);
  puVar10 = *(uint **)(param_1 + 0x18);
  if (*puVar10 < 2) {
    puVar6 = puVar10 + (long)(int)puVar10[2] * 2 + 4;
  }
  else {
    FUN_100376b00(puVar1,puVar10[1]);
    puVar10 = (uint *)*puVar1;
    puVar6 = puVar10 + (long)(int)puVar10[2] * 2 + 4;
    if (1 < *puVar10) {
      FUN_100376b00(puVar1,puVar10[1]);
      puVar10 = (uint *)*puVar1;
    }
  }
  uVar12 = puVar10[3];
  if (puVar6 != puVar10 + (long)(int)uVar12 * 2 + 4) {
    puVar11 = puVar6 + -4;
    do {
      lVar4 = **(long **)(puVar11 + 4);
      lVar9 = 0;
      if ((lVar4 != 0) && (lVar9 = 0, *(int *)(lVar4 + 4) != 0)) {
        lVar9 = (*(long **)(puVar11 + 4))[1];
      }
      lVar4 = 0;
      if ((*param_2 != 0) && (lVar4 = 0, *(int *)(*param_2 + 4) != 0)) {
        lVar4 = param_2[1];
      }
      if (lVar9 == lVar4) break;
      puVar6 = puVar11 + 6;
      puVar11 = puVar11 + 2;
    } while (puVar10 + (long)(int)uVar12 * 2 != puVar11);
  }
  if (1 < *puVar10) {
    FUN_100376b00(puVar1,puVar10[1]);
    puVar10 = (uint *)*puVar1;
    uVar12 = puVar10[3];
  }
  if (puVar6 != puVar10 + (long)(int)uVar12 * 2 + 4) {
    local_58 = puVar6;
    FUN_100375c40(local_60,puVar1,&local_58);
  }
  lVar4 = 0;
  if ((*param_2 != 0) && (lVar4 = 0, *(int *)(*param_2 + 4) != 0)) {
    lVar4 = param_2[1];
  }
  local_90 = (QArrayData *)PTR_shared_null_1021e1288;
  local_88 = (Data *)PTR_shared_null_1021e15e8;
  qt_qFindChildren_helper(lVar4,&local_90,PTR_staticMetaObject_1021e1540,&local_88,1);
  local_80 = local_88;
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 == 0) {
      QListData::detach((int)&local_80);
      lVar4 = (long)*(int *)(local_80 + 8);
      if ((local_88 + (long)*(int *)(local_88 + 8) * 8 != local_80 + lVar4 * 8) &&
         (lVar9 = *(int *)(local_80 + 0xc) - lVar4, lVar9 != 0 && lVar4 <= *(int *)(local_80 + 0xc))
         ) {
        _memcpy(local_80 + lVar4 * 8 + 0x10,local_88 + (long)*(int *)(local_88 + 8) * 8 + 0x10,
                lVar9 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + 1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
    }
  }
  local_78 = local_80 + (long)*(int *)(local_80 + 8) * 8 + 0x10;
  local_70 = local_80 + (long)*(int *)(local_80 + 0xc) * 8 + 0x10;
  local_68 = 1;
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10037406f;
    }
    QListData::dispose(local_88);
  }
LAB_10037406f:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003740a5;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1003740a5:
  if ((local_68 != 0) && (local_78 != local_70)) {
    do {
      if (((*(byte *)(*(long *)(*(long *)local_78 + 0x28) + 0xc) & 1) != 0) &&
         (((*(uint *)(*(long *)(*(long *)local_78 + 0x28) + 8) & 0x18000) == 0x8000 ||
          (uVar5 = QWidget::windowState(), (uVar5 & 1) != 0)))) {
        QWidget::close();
      }
      local_78 = local_78 + 8;
      local_68 = 1;
    } while (local_78 != local_70);
  }
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10037412d;
    }
    QListData::dispose(local_80);
  }
LAB_10037412d:
  puVar2 = PTR_s_DynProp_WindowOnRemove_102270df0;
  pcVar7 = (char *)0x0;
  if ((*param_2 != 0) && (pcVar7 = (char *)0x0, *(int *)(*param_2 + 4) != 0)) {
    pcVar7 = (char *)param_2[1];
  }
  QVariant::QVariant(&local_a0,true);
  QObject::setProperty(pcVar7,(QVariant *)puVar2);
  QVariant::~QVariant(&local_a0);
  lVar4 = 0;
  if ((*param_2 != 0) && (lVar4 = 0, *(int *)(*param_2 + 4) != 0)) {
    lVar4 = param_2[1];
  }
  QWidget::setAttribute(lVar4,0x37,1);
  if (((*(uint *)(*(long *)(param_2[1] + 0x28) + 8) & 0x18000) == 0x8000) ||
     (uVar5 = QWidget::windowState(), (uVar5 & 1) != 0)) {
    pQVar8 = (QWidget *)0x0;
    if ((*param_2 != 0) && (pQVar8 = (QWidget *)0x0, *(int *)(*param_2 + 4) != 0)) {
      pQVar8 = (QWidget *)param_2[1];
    }
    WidgetUtils::setTransparentForMouseEvents(pQVar8,true);
    QWidget::close();
  }
  FUN_100834090(param_1,&local_40,uVar3);
  FUN_100370d70(param_1,&local_40,uVar3);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return;
}

