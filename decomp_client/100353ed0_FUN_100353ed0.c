
void FUN_100353ed0(long param_1,char param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  QArrayData *pQVar9;
  QImage local_68 [32];
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (DAT_10230ffd0 < 3) goto LAB_100354032;
  uVar1 = *(undefined4 *)(param_1 + 0x50);
  uVar2 = *(undefined4 *)(param_1 + 0x54);
  iVar3 = *(int *)(param_1 + 0x40);
  iVar4 = *(int *)(param_1 + 0x44);
  iVar5 = *(int *)(param_1 + 0x48);
  iVar6 = *(int *)(param_1 + 0x4c);
  uVar8 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar8 = *(undefined8 *)(param_1 + 0x18);
  }
  FUN_100323d90(&local_48,uVar8);
  QString::toLocal8Bit();
  pQVar9 = local_40 + *(long *)(local_40 + 0x10);
  uVar8 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar8 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar7 = FUN_100323e20(uVar8);
  FUN_100df99c0("","prl_client_app",3,
                "[THUMB] Deactivating thumbnail scaled to %dx%d,of Vm screen rect with size %dx%d placed to {%d;%d}, VM [%s], display #%d."
                ,uVar1,uVar2,iVar3,iVar4,(1 - iVar3) + iVar5,(1 - iVar4) + iVar6,pQVar9,uVar7);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100353fff;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_100353fff:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100354032;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100354032:
  if (-1 < *(int *)(param_1 + 0x70)) {
    QTimer::stop();
  }
  if (param_2 != '\0') {
    QImage::QImage(local_68);
    FUN_100354140(param_1,local_68);
    QImage::~QImage(local_68);
  }
  return;
}

