
void FUN_1003542f0(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 uVar9;
  QArrayData *pQVar10;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  QMetaMethod::methodSignature();
  lVar8 = 0;
  pQVar10 = local_40 + *(long *)(local_40 + 0x10);
  if ((pQVar10 != (QArrayData *)0x0) && (*(uint *)(local_40 + 4) != 0)) {
    lVar8 = 0;
    do {
      if (pQVar10[lVar8] == (QArrayData)0x0) break;
      lVar8 = lVar8 + 1;
    } while ((uint)lVar8 < *(uint *)(local_40 + 4));
  }
  pQVar10 = (QArrayData *)QString::fromAscii_helper((char *)pQVar10,(int)lVar8);
  iVar6 = QString::compare_helper
                    (pQVar10 + *(long *)(pQVar10 + 0x10),*(undefined4 *)(pQVar10 + 4),
                     "imageUpdated(QImage)",0xffffffff,1);
  if (*(int *)pQVar10 != -1) {
    if (*(int *)pQVar10 != 0) {
      LOCK();
      *(int *)pQVar10 = *(int *)pQVar10 + -1;
      local_31 = *(int *)pQVar10 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100354394;
    }
    QArrayData::deallocate(pQVar10,2,8);
  }
LAB_100354394:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003543c4;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_1003543c4:
  if (iVar6 != 0) {
    return;
  }
  if (DAT_10230ffd0 < 3) goto LAB_100354533;
  uVar1 = *(undefined4 *)(param_1 + 0x50);
  uVar2 = *(undefined4 *)(param_1 + 0x54);
  iVar6 = *(int *)(param_1 + 0x40);
  iVar3 = *(int *)(param_1 + 0x44);
  iVar4 = *(int *)(param_1 + 0x48);
  iVar5 = *(int *)(param_1 + 0x4c);
  uVar9 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar9 = *(undefined8 *)(param_1 + 0x18);
  }
  FUN_100323d90(&local_50,uVar9);
  QString::toLocal8Bit();
  pQVar10 = local_48 + *(long *)(local_48 + 0x10);
  uVar9 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar9 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar7 = FUN_100323e20(uVar9);
  FUN_100df99c0("","prl_client_app",3,
                "[THUMB] A new Listener has connected to a scaled to %dx%d thumbnail of Vm screen rect with size %dx%d placed to {%d;%d}, VM [%s], display #%d. Total number of listeners is %d now"
                ,uVar1,uVar2,iVar6,iVar3,(1 - iVar6) + iVar4,(1 - iVar3) + iVar5,pQVar10,uVar7,
                *(int *)(param_1 + 0x98) + 1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003544fb;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_1003544fb:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100354533;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100354533:
  iVar6 = *(int *)(param_1 + 0x98);
  *(int *)(param_1 + 0x98) = iVar6 + 1;
  if (iVar6 == 0) {
    FUN_100354640(param_1);
  }
  return;
}

