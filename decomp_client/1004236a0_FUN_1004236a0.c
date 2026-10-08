
/* WARNING: Removing unreachable block (ram,0x0001004237ad) */
/* WARNING: Removing unreachable block (ram,0x0001004237bb) */
/* WARNING: Removing unreachable block (ram,0x0001004237c4) */

void FUN_1004236a0(long *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  CSlotInfo *pCVar6;
  Data_conflict local_48;
  undefined4 local_40;
  undefined1 local_38;
  
  QObject::blockSignals(SUB81(*(undefined8 *)(param_1[0xc] + 0x28),0));
  FUN_1001326a0(*(undefined8 *)(param_1[0xc] + 0x28),1);
  QObject::blockSignals(SUB81(*(undefined8 *)(param_1[0xc] + 0x28),0));
  FUN_100423e30(param_1);
  lVar3 = param_1[0x17];
  iVar1 = *(int *)(param_1[5] + 0x1c);
  iVar2 = *(int *)(param_1[5] + 0x14);
  iVar4 = QComboBox::currentIndex();
  if (iVar4 == 1) {
    pCVar6 = (CSlotInfo *)0xdc;
    if (((*(byte *)(*(long *)(*(long *)(param_1[0xc] + 0xa8) + 0x28) + 9) & 0x80) == 0) &&
       (pCVar6 = (CSlotInfo *)0xb4,
       (*(byte *)(*(long *)(*(long *)(param_1[0xc] + 0xb0) + 0x28) + 9) & 0x80) != 0)) {
      pCVar6 = (CSlotInfo *)0x104;
    }
  }
  else {
    uVar5 = (**(code **)(*param_1 + 0x78))(param_1);
    pCVar6 = (CSlotInfo *)(uVar5 >> 0x20);
  }
  local_40 = 0x80000000;
  local_48.field7 = 0;
  local_38 = 1;
  CWindowResizeController::beginResize((int)lVar3,(iVar1 + 1) - iVar2,pCVar6);
  QVariant::~QVariant((QVariant *)&local_48);
  return;
}

