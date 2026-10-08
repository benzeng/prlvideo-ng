
void FUN_100354640(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  QArrayData *pQVar10;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (*(int *)(param_1 + 0x98) == 0) {
    return;
  }
  if (-1 < *(int *)(param_1 + 0x70)) {
    return;
  }
  uVar9 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar9 = *(undefined8 *)(param_1 + 0x18);
  }
  cVar7 = FUN_1003261c0(uVar9);
  if (cVar7 == '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x9c) == '\0') {
    return;
  }
  if (DAT_10230ffd0 < 3) goto LAB_1003547d7;
  uVar1 = *(undefined4 *)(param_1 + 0x50);
  uVar2 = *(undefined4 *)(param_1 + 0x54);
  iVar3 = *(int *)(param_1 + 0x40);
  iVar4 = *(int *)(param_1 + 0x44);
  iVar5 = *(int *)(param_1 + 0x48);
  iVar6 = *(int *)(param_1 + 0x4c);
  uVar9 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar9 = *(undefined8 *)(param_1 + 0x18);
  }
  FUN_100323d90(&local_48,uVar9);
  QString::toLocal8Bit();
  pQVar10 = local_40 + *(long *)(local_40 + 0x10);
  uVar9 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar9 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar8 = FUN_100323e20(uVar9);
  FUN_100df99c0("","prl_client_app",3,
                "[THUMB] Activating thumbnail scaled to %dx%d,of Vm screen rect with size %dx%d placed to {%d;%d}, VM [%s], display #%d."
                ,uVar1,uVar2,iVar3,iVar4,(1 - iVar3) + iVar5,(1 - iVar4) + iVar6,pQVar10,uVar8);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003547a7;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_1003547a7:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003547d7;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1003547d7:
  FUN_100354be0(param_1);
  QTimer::start((int)param_1 + 0x60);
  return;
}

