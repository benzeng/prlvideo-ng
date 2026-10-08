
void FUN_100342610(long *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  QArrayData *pQVar8;
  int iVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (param_1[2] == 0) {
    return;
  }
  if (*(int *)(param_1[2] + 4) == 0) {
    return;
  }
  if (param_1[3] == 0) {
    return;
  }
  auVar10 = FUN_100325fd0();
  auVar11 = (**(code **)(*param_1 + 0x68))(param_1);
  iVar9 = auVar10._0_4_;
  iVar7 = auVar11._0_4_;
  iVar4 = auVar10._4_4_;
  iVar6 = auVar11._4_4_;
  if (DAT_10230ffd0 < 3) goto LAB_1003427ca;
  lVar5 = 0;
  if ((param_1[2] != 0) && (lVar5 = 0, *(int *)(param_1[2] + 4) != 0)) {
    lVar5 = param_1[3];
  }
  FUN_100323d90(&local_48,lVar5);
  QString::toLocal8Bit();
  pQVar8 = local_40 + *(long *)(local_40 + 0x10);
  lVar5 = 0;
  if ((param_1[2] != 0) && (lVar5 = 0, *(int *)(param_1[2] + 4) != 0)) {
    lVar5 = param_1[3];
  }
  uVar1 = FUN_100323e20(lVar5);
  (**(code **)*param_1)(param_1);
  uVar2 = QMetaObject::className();
  FUN_100df99c0("GUI_DDRL","prl_client_app",3,
                "[DRL] Fit VM [%s] display #%d to window with %s. Current guest rect: %dx%d at (%d,%d). Target rect to fit: %dx%d at (%d,%d)"
                ,pQVar8,uVar1,uVar2,(auVar10._8_4_ + 1) - iVar9,(auVar10._12_4_ + 1) - iVar4,iVar9,
                iVar4,(auVar11._8_4_ + 1) - iVar7,(auVar11._12_4_ + 1) - iVar6,iVar7,iVar6);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100342796;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_100342796:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003427ca;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1003427ca:
  if ((((iVar9 != iVar7) || (auVar10._8_4_ != auVar11._8_4_)) || (iVar4 != iVar6)) ||
     (auVar10._12_4_ != auVar11._12_4_)) {
    lVar5 = 0;
    if ((param_1[2] != 0) && (lVar5 = 0, *(int *)(param_1[2] + 4) != 0)) {
      lVar5 = param_1[3];
    }
    uVar2 = FUN_100323e00(lVar5);
    plVar3 = (long *)FUN_100319cb0(uVar2);
    (**(code **)(*plVar3 + 0x60))(plVar3,0);
  }
  return;
}

