
void FUN_100727b80(long param_1)

{
  undefined4 uVar1;
  long *plVar2;
  QString *pQVar3;
  int iVar4;
  long lVar5;
  bool *pbVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  char local_22;
  undefined1 local_21;
  
  FUN_100728ec0(*(undefined8 *)(param_1 + 0x60),param_1);
  FUN_100728310(param_1);
  lVar5 = *(long *)(param_1 + 0x68);
  if (((lVar5 == 0) || (*(int *)(lVar5 + 4) == 0)) || (*(long *)(param_1 + 0x70) == 0)) {
    FUN_100df99c0("","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","m_pVm",
                  "CloneVm/CCloneVmParametersDialog.cpp",0x8d,"setupGui");
    lVar5 = *(long *)(param_1 + 0x68);
    if (lVar5 == 0) {
      return;
    }
  }
  if (*(int *)(lVar5 + 4) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x70) == 0) {
    return;
  }
  lVar5 = FUN_10018d490();
  if (lVar5 == 0) {
    FUN_100df99c0("","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","m_pVm->server()",
                  "CloneVm/CCloneVmParametersDialog.cpp",0x91,"setupGui");
  }
  plVar2 = *(long **)(*(long *)(param_1 + 0x60) + 0x38);
  uVar8 = 0;
  (**(code **)(*plVar2 + 0x68))(plVar2,0);
  if ((*(long *)(param_1 + 0x68) != 0) && (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x68) + 4) != 0))
  {
    uVar8 = *(undefined8 *)(param_1 + 0x70);
  }
  pbVar6 = (bool *)FUN_100194400(uVar8);
  CSdkRequest::waitForCompletion(pbVar6,(uint)&local_22);
  if (local_22 == '\0') {
LAB_100727cd9:
    QWidget::setDisabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x38),0));
  }
  else {
    uVar8 = 0;
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x68) + 4) != 0)) {
      uVar8 = *(undefined8 *)(param_1 + 0x70);
    }
    iVar4 = FUN_10018f5b0(uVar8);
    if (iVar4 == 1) goto LAB_100727cd9;
  }
  uVar8 = 0;
  if ((*(long *)(param_1 + 0x68) != 0) && (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x68) + 4) != 0))
  {
    uVar8 = *(undefined8 *)(param_1 + 0x70);
  }
  lVar5 = FUN_10018d490(uVar8);
  if (lVar5 == 0) {
    return;
  }
  uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x28);
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x68) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x68) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x70);
  }
  uVar7 = FUN_10018d490(uVar7);
  FUN_100109c10(&local_30,uVar7);
  FUN_10013f1c0(uVar8,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100727d7e;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100727d7e:
  pQVar3 = *(QString **)(*(long *)(param_1 + 0x60) + 0x18);
  uVar1 = *(undefined4 *)(param_1 + 0x78);
  uVar8 = 0;
  if ((*(long *)(param_1 + 0x68) != 0) && (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x68) + 4) != 0))
  {
    uVar8 = *(undefined8 *)(param_1 + 0x70);
  }
  FUN_10018d830(&local_40,uVar8);
  uVar8 = 0;
  if ((*(long *)(param_1 + 0x68) != 0) && (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x68) + 4) != 0))
  {
    uVar8 = *(undefined8 *)(param_1 + 0x70);
  }
  uVar8 = FUN_10018d490(uVar8);
  FUN_100726820(&local_38,uVar1,&local_40,uVar8);
  QLineEdit::setText(pQVar3);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100727e15;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100727e15:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return;
}

