
void FUN_100423860(long *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  QSize *pQVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  undefined4 extraout_var;
  ulong uVar7;
  CSlotInfo *pCVar8;
  undefined1 local_c0 [16];
  undefined4 local_b0;
  QArrayData *local_a8;
  int *local_a0 [4];
  QVariant local_80 [2];
  int *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  Data_conflict local_48;
  undefined4 local_40;
  undefined1 local_38;
  undefined1 local_29;
  
  QObject::blockSignals(SUB81(*(undefined8 *)(param_1[0xc] + 0x28),0));
  FUN_1001326a0(*(undefined8 *)(param_1[0xc] + 0x28),2);
  QObject::blockSignals(SUB81(*(undefined8 *)(param_1[0xc] + 0x28),0));
  if (param_2 != 2) {
    if (param_2 != 1) {
      return;
    }
    FUN_100423e30(param_1);
    cVar5 = FUN_10013ba10(*(undefined8 *)(param_1[0xc] + 0x90));
    if (cVar5 != '\0') {
      return;
    }
    lVar4 = param_1[0x17];
    iVar1 = *(int *)(param_1[5] + 0x1c);
    iVar2 = *(int *)(param_1[5] + 0x14);
    iVar6 = QComboBox::currentIndex();
    if (iVar6 == 1) {
      pCVar8 = (CSlotInfo *)0xdc;
      if (((*(byte *)(*(long *)(*(long *)(param_1[0xc] + 0xa8) + 0x28) + 9) & 0x80) == 0) &&
         (pCVar8 = (CSlotInfo *)0xb4,
         (*(byte *)(*(long *)(*(long *)(param_1[0xc] + 0xb0) + 0x28) + 9) & 0x80) != 0)) {
        pCVar8 = (CSlotInfo *)0x104;
      }
    }
    else {
      uVar7 = (**(code **)(*param_1 + 0x78))(param_1);
      pCVar8 = (CSlotInfo *)(uVar7 >> 0x20);
    }
    local_68 = (int *)0x0;
    uStack_60 = 0;
    local_50 = 0;
    local_58 = 0;
    local_40 = 0x80000000;
    local_48.field7 = 0;
    local_38 = 1;
    CWindowResizeController::beginResize((int)lVar4,(iVar1 + 1) - iVar2,pCVar8);
    QVariant::~QVariant((QVariant *)&local_48);
    if (local_68 == (int *)0x0) {
      return;
    }
    LOCK();
    *local_68 = *local_68 + -1;
    iVar1 = *local_68;
    UNLOCK();
    local_a0[0] = local_68;
    goto joined_r0x000100423b40;
  }
  local_a8 = (QArrayData *)QString::fromAscii_helper("1updateControlWidgets()",0x17);
  local_b0 = 0x80000000;
  local_c0._8_8_ = (QObject *)0x0;
  FUN_100a1c600(local_a0,param_1,&local_a8,local_c0 + 8);
  QVariant::~QVariant((QVariant *)(local_c0 + 8));
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_29 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100423947;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_100423947:
  pQVar3 = (QSize *)param_1[0x17];
  cVar5 = FUN_10013ba10(*(undefined8 *)(param_1[0xc] + 0x90));
  if (cVar5 == '\0') {
    iVar1 = *(int *)(param_1[5] + 0x1c);
    iVar2 = *(int *)(param_1[5] + 0x14);
    iVar6 = QComboBox::currentIndex();
    if (iVar6 == 1) {
      local_c0._4_4_ = 0xdc;
      if (((*(byte *)(*(long *)(*(long *)(param_1[0xc] + 0xa8) + 0x28) + 9) & 0x80) == 0) &&
         (local_c0._4_4_ = 0xb4,
         (*(byte *)(*(long *)(*(long *)(param_1[0xc] + 0xb0) + 0x28) + 9) & 0x80) != 0)) {
        local_c0._4_4_ = 0x104;
      }
    }
    else {
      (**(code **)(*param_1 + 0x78))(param_1);
      local_c0._4_4_ = extraout_var;
    }
    local_c0._0_4_ = (iVar1 + 1) - iVar2;
  }
  else {
    local_c0._0_8_ = param_1[0x18];
  }
  CWindowResizeController::beginResize(pQVar3,(CSlotInfo *)local_c0);
  QVariant::~QVariant(local_80);
  if (local_a0[0] == (int *)0x0) {
    return;
  }
  LOCK();
  *local_a0[0] = *local_a0[0] + -1;
  iVar1 = *local_a0[0];
  UNLOCK();
joined_r0x000100423b40:
  if ((iVar1 == 0) && (local_29 = 0, local_a0[0] != (int *)0x0)) {
    operator_delete(local_a0[0]);
  }
  return;
}

