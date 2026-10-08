
void FUN_100140630(long param_1,undefined8 *param_2)

{
  long *plVar1;
  QMapNodeBase *pQVar2;
  int *piVar3;
  ulong *puVar4;
  undefined1 uVar5;
  int iVar6;
  undefined8 uVar7;
  Data *local_a0;
  Data *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_31;
  
  if (*(long *)(param_1 + 0x30) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x30) + 4) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x38) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x40) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x40) + 4) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x48) == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 2);
  uVar7 = *param_2;
  *(undefined8 *)(param_1 + 0x80) = param_2[1];
  *(undefined8 *)(param_1 + 0x78) = uVar7;
  plVar1 = param_2 + 3;
  piVar3 = (int *)param_2[3];
  if (*(int **)(param_1 + 0x90) != piVar3) {
    if (*piVar3 == 0) {
      piVar3 = (int *)QMapDataBase::createData();
      if (*(long *)(*plVar1 + 0x10) != 0) {
        puVar4 = (ulong *)FUN_1001411c0(*(long *)(*plVar1 + 0x10),piVar3);
        *(ulong **)(piVar3 + 4) = puVar4;
        *puVar4 = *puVar4 & 3 | (ulong)(piVar3 + 2);
        QMapDataBase::recalcMostLeftNode();
      }
    }
    else if (*piVar3 != -1) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      local_31 = *piVar3 != 0;
      UNLOCK();
      piVar3 = (int *)*plVar1;
    }
    pQVar2 = *(QMapNodeBase **)(param_1 + 0x90);
    *(int **)(param_1 + 0x90) = piVar3;
    if (*(int *)pQVar2 != -1) {
      if (*(int *)pQVar2 != 0) {
        LOCK();
        *(int *)pQVar2 = *(int *)pQVar2 + -1;
        local_31 = *(int *)pQVar2 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100140761;
      }
      if (*(long *)(pQVar2 + 0x10) != 0) {
        QMapDataBase::freeTree(pQVar2,(int)*(long *)(pQVar2 + 0x10));
      }
      QMapDataBase::freeData((QMapDataBase *)pQVar2);
    }
  }
LAB_100140761:
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)((long)param_2 + 4);
  local_98 = (Data *)PTR_shared_null_1021e15e8;
  local_a0 = (Data *)PTR_shared_null_1021e15e8;
  FUN_100141290(&local_98);
  local_60 = 0x4000000000000000;
  FUN_1001413e0(&local_98,&local_60);
  local_68 = 0x4040000000000000;
  FUN_1001413e0(&local_98,&local_68);
  local_70 = 0x4050000000000000;
  FUN_1001413e0(&local_98,&local_70);
  local_78 = 0x4060000000000000;
  FUN_1001413e0(&local_98,&local_78);
  local_80 = 0x4070000000000000;
  FUN_1001413e0(&local_98,&local_80);
  local_88 = 0x4080000000000000;
  FUN_1001413e0(&local_98,&local_88);
  local_90 = 0x40a0000000000000;
  FUN_1001413e0(&local_98,&local_90);
  FUN_100141290(&local_a0);
  local_40 = 0x4000000000000000;
  FUN_1001413e0(&local_a0,&local_40);
  local_48 = 0x4050000000000000;
  FUN_1001413e0(&local_a0,&local_48);
  local_50 = 0x4070000000000000;
  FUN_1001413e0(&local_a0,&local_50);
  local_58 = 0x40a0000000000000;
  FUN_1001413e0(&local_a0,&local_58);
  iVar6 = 0;
  if ((*(long *)(param_1 + 0x30) != 0) && (iVar6 = 0, *(int *)(*(long *)(param_1 + 0x30) + 4) != 0))
  {
    iVar6 = (int)*(undefined8 *)(param_1 + 0x38);
  }
  QAbstractSlider::setSingleStep(iVar6);
  iVar6 = 0;
  if ((*(long *)(param_1 + 0x30) != 0) && (iVar6 = 0, *(int *)(*(long *)(param_1 + 0x30) + 4) != 0))
  {
    iVar6 = (int)*(undefined8 *)(param_1 + 0x38);
  }
  QAbstractSlider::setMinimum(iVar6);
  iVar6 = 0;
  if ((*(long *)(param_1 + 0x30) != 0) && (iVar6 = 0, *(int *)(*(long *)(param_1 + 0x30) + 4) != 0))
  {
    iVar6 = (int)*(undefined8 *)(param_1 + 0x38);
  }
  QAbstractSlider::setMaximum(iVar6);
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x30) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x30) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x38);
  }
  CMemorySlider::initialize
            (uVar7,*(undefined4 *)param_2,*(undefined4 *)((long)param_2 + 4),
             *(undefined4 *)(param_2 + 1),*(undefined4 *)((long)param_2 + 0xc),
             *(undefined4 *)(param_2 + 2),3,&local_98,&local_a0,plVar1);
  uVar5 = false;
  if ((*(long *)(param_1 + 0x30) != 0) &&
     (uVar5 = false, *(int *)(*(long *)(param_1 + 0x30) + 4) != 0)) {
    uVar5 = (undefined1)*(undefined8 *)(param_1 + 0x38);
  }
  CMemorySlider::setDrawGradient((bool)uVar5);
  iVar6 = 0;
  if ((*(long *)(param_1 + 0x40) != 0) && (iVar6 = 0, *(int *)(*(long *)(param_1 + 0x40) + 4) != 0))
  {
    iVar6 = (int)*(undefined8 *)(param_1 + 0x48);
  }
  QSpinBox::setMinimum(iVar6);
  iVar6 = 0;
  if ((*(long *)(param_1 + 0x40) != 0) && (iVar6 = 0, *(int *)(*(long *)(param_1 + 0x40) + 4) != 0))
  {
    iVar6 = (int)*(undefined8 *)(param_1 + 0x48);
  }
  QSpinBox::setMaximum(iVar6);
  uVar5 = false;
  if ((*(long *)(param_1 + 0x40) != 0) &&
     (uVar5 = false, *(int *)(*(long *)(param_1 + 0x40) + 4) != 0)) {
    uVar5 = (undefined1)*(undefined8 *)(param_1 + 0x48);
  }
  QAbstractSpinBox::setKeyboardTracking((bool)uVar5);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100140a31;
    }
    QListData::dispose(local_a0);
  }
LAB_100140a31:
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      UNLOCK();
      if (*(int *)local_98 != 0) {
        return;
      }
      local_31 = 0;
    }
    QListData::dispose(local_98);
  }
  return;
}

