
void FUN_10013fc30(long param_1,undefined8 *param_2)

{
  long *plVar1;
  QMapNodeBase *pQVar2;
  int *piVar3;
  ulong *puVar4;
  undefined1 uVar5;
  int iVar6;
  undefined8 uVar7;
  Data *local_1c8;
  Data *local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
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
        if ((bool)local_31) goto LAB_10013fd60;
      }
      if (*(long *)(pQVar2 + 0x10) != 0) {
        QMapDataBase::freeTree(pQVar2,(int)*(long *)(pQVar2 + 0x10));
      }
      QMapDataBase::freeData((QMapDataBase *)pQVar2);
    }
  }
LAB_10013fd60:
  iVar6 = *(int *)((long)param_2 + 4);
  *(int *)(param_1 + 0x70) = iVar6;
  local_1c0 = (Data *)PTR_shared_null_1021e15e8;
  local_1c8 = (Data *)PTR_shared_null_1021e15e8;
  FUN_100141290(&local_1c0);
  if (iVar6 == 0x4000) {
    local_120 = 0x4010000000000000;
    FUN_1001413e0(&local_1c0,&local_120);
    local_128 = 0x4070000000000000;
    FUN_1001413e0(&local_1c0,&local_128);
    local_130 = 0x4080000000000000;
    FUN_1001413e0(&local_1c0,&local_130);
    local_138 = 0x4088000000000000;
    FUN_1001413e0(&local_1c0,&local_138);
    local_140 = 0x4090000000000000;
    FUN_1001413e0(&local_1c0,&local_140);
    local_148 = 0x4098000000000000;
    FUN_1001413e0(&local_1c0,&local_148);
    local_150 = 0x40a0000000000000;
    FUN_1001413e0(&local_1c0,&local_150);
    local_158 = 0x40a8000000000000;
    FUN_1001413e0(&local_1c0,&local_158);
    local_160 = 0x40b0000000000000;
    FUN_1001413e0(&local_1c0,&local_160);
    local_168 = 0x40c0000000000000;
    FUN_1001413e0(&local_1c0,&local_168);
    local_170 = 0x40d0000000000000;
    FUN_1001413e0(&local_1c0,&local_170);
  }
  else if (iVar6 == 0x2000) {
    local_c8 = 0x4010000000000000;
    FUN_1001413e0(&local_1c0,&local_c8);
    local_d0 = 0x4070000000000000;
    FUN_1001413e0(&local_1c0,&local_d0);
    local_d8 = 0x4080000000000000;
    FUN_1001413e0(&local_1c0,&local_d8);
    local_e0 = 0x4088000000000000;
    FUN_1001413e0(&local_1c0,&local_e0);
    local_e8 = 0x4090000000000000;
    FUN_1001413e0(&local_1c0,&local_e8);
    local_f0 = 0x4098000000000000;
    FUN_1001413e0(&local_1c0,&local_f0);
    local_f8 = 0x40a0000000000000;
    FUN_1001413e0(&local_1c0,&local_f8);
    local_100 = 0x40a8000000000000;
    FUN_1001413e0(&local_1c0,&local_100);
    local_108 = 0x40b0000000000000;
    FUN_1001413e0(&local_1c0,&local_108);
    local_110 = 0x40b8000000000000;
    FUN_1001413e0(&local_1c0,&local_110);
    local_118 = 0x40c0000000000000;
    FUN_1001413e0(&local_1c0,&local_118);
  }
  else {
    local_178 = 0x4010000000000000;
    FUN_1001413e0(&local_1c0,&local_178);
    local_180 = 0x4080000000000000;
    FUN_1001413e0(&local_1c0,&local_180);
    local_188 = 0x4090000000000000;
    FUN_1001413e0(&local_1c0,&local_188);
    local_190 = 0x40a0000000000000;
    FUN_1001413e0(&local_1c0,&local_190);
    local_198 = 0x40b0000000000000;
    FUN_1001413e0(&local_1c0,&local_198);
    local_1a0 = 0x40c0000000000000;
    FUN_1001413e0(&local_1c0,&local_1a0);
    local_1a8 = 0x40d0000000000000;
    FUN_1001413e0(&local_1c0,&local_1a8);
    local_1b0 = 0x40e0000000000000;
    FUN_1001413e0(&local_1c0,&local_1b0);
    local_1b8 = 0x40f0000000000000;
    FUN_1001413e0(&local_1c0,&local_1b8);
  }
  iVar6 = *(int *)((long)param_2 + 4);
  FUN_100141290(&local_1c8);
  if (iVar6 == 0x4000) {
    local_70 = 0x4010000000000000;
    FUN_1001413e0(&local_1c8,&local_70);
    local_78 = 0x4080000000000000;
    FUN_1001413e0(&local_1c8,&local_78);
    local_80 = 0x4090000000000000;
    FUN_1001413e0(&local_1c8,&local_80);
    local_88 = 0x40a0000000000000;
    FUN_1001413e0(&local_1c8,&local_88);
    local_90 = 0x40b0000000000000;
    FUN_1001413e0(&local_1c8,&local_90);
    local_98 = 0x40d0000000000000;
    FUN_1001413e0(&local_1c8,&local_98);
  }
  else if (iVar6 == 0x2000) {
    local_40 = 0x4010000000000000;
    FUN_1001413e0(&local_1c8,&local_40);
    local_48 = 0x4080000000000000;
    FUN_1001413e0(&local_1c8,&local_48);
    local_50 = 0x4090000000000000;
    FUN_1001413e0(&local_1c8,&local_50);
    local_58 = 0x40a0000000000000;
    FUN_1001413e0(&local_1c8,&local_58);
    local_60 = 0x40b0000000000000;
    FUN_1001413e0(&local_1c8,&local_60);
    local_68 = 0x40c0000000000000;
    FUN_1001413e0(&local_1c8,&local_68);
  }
  else {
    local_a0 = 0x4010000000000000;
    FUN_1001413e0(&local_1c8,&local_a0);
    local_a8 = 0x4090000000000000;
    FUN_1001413e0(&local_1c8,&local_a8);
    local_b0 = 0x40b0000000000000;
    FUN_1001413e0(&local_1c8,&local_b0);
    local_b8 = 0x40d0000000000000;
    FUN_1001413e0(&local_1c8,&local_b8);
    local_c0 = 0x40f0000000000000;
    FUN_1001413e0(&local_1c8,&local_c0);
  }
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
  QAbstractSlider::setMaximum(iVar6);
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x30) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x30) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x38);
  }
  CMemorySlider::initialize
            (uVar7,*(undefined4 *)param_2,*(undefined4 *)((long)param_2 + 4),
             *(undefined4 *)(param_2 + 1),*(undefined4 *)((long)param_2 + 0xc),
             *(undefined4 *)(param_2 + 2),3,&local_1c0,&local_1c8,plVar1);
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
  if (*(int *)local_1c8 != -1) {
    if (*(int *)local_1c8 != 0) {
      LOCK();
      *(int *)local_1c8 = *(int *)local_1c8 + -1;
      local_31 = *(int *)local_1c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100140577;
    }
    QListData::dispose(local_1c8);
  }
LAB_100140577:
  if (*(int *)local_1c0 != -1) {
    if (*(int *)local_1c0 != 0) {
      LOCK();
      *(int *)local_1c0 = *(int *)local_1c0 + -1;
      UNLOCK();
      if (*(int *)local_1c0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QListData::dispose(local_1c0);
  }
  return;
}

