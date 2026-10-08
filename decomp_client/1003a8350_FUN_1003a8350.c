
void FUN_1003a8350(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  QArrayData *pQVar4;
  long *plVar5;
  undefined8 uVar6;
  char *pcVar7;
  QArrayData *local_58;
  QArrayData *local_50;
  QVariant local_48;
  undefined1 local_31;
  
  lVar2 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x18));
  if (lVar2 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Vm instance is null.");
    return;
  }
  uVar3 = FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
  local_50 = (QArrayData *)QString::fromAscii_helper("Settings.General.OsType",0x17);
  FUN_1003e1800(&local_48,uVar3,&local_50,0);
  iVar1 = QVariant::toUInt((bool *)&local_48);
  pcVar7 = "root";
  if (iVar1 == 8) {
    pcVar7 = "Administrator";
  }
  pQVar4 = (QArrayData *)QString::fromAscii_helper(pcVar7,(uint)(iVar1 == 8) * 9 + 4);
  QVariant::~QVariant(&local_48);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003a8414;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1003a8414:
  plVar5 = operator_new(0x78);
  uVar3 = FUN_1003b0b20(*(undefined8 *)(param_1 + 0x18));
  uVar6 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x18));
  if (1 < *(int *)pQVar4 + 1U) {
    LOCK();
    *(int *)pQVar4 = *(int *)pQVar4 + 1;
    local_31 = *(int *)pQVar4 != 0;
    UNLOCK();
  }
  local_58 = pQVar4;
  FUN_10042e9f0(plVar5,uVar3,uVar6,&local_58);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003a848f;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1003a848f:
  QWidget::setAttribute(plVar5,0x37,1);
  (**(code **)(*plVar5 + 0x1a0))(plVar5);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_31 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return;
      }
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
  return;
}

