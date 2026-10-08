
void FUN_1004a7510(long param_1)

{
  QString *pQVar1;
  long *plVar2;
  code *pcVar3;
  undefined1 uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  QArrayData *local_30;
  undefined1 local_22;
  
  lVar6 = FUN_10044e460();
  if (lVar6 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Vm instance is null.");
    return;
  }
  pQVar1 = *(QString **)(*(long *)(param_1 + 0x68) + 0x38);
  iVar5 = FUN_10044e480(param_1);
  if (iVar5 == 8) {
    uVar7 = FUN_10044e460(param_1);
    iVar5 = FUN_10018f5b0(uVar7);
    if (iVar5 == 1) goto LAB_1004a7554;
    iVar5 = 0x1df8827;
  }
  else {
LAB_1004a7554:
    iVar5 = 0x1df883c;
  }
  QMetaObject::tr((char *)&local_30,(char *)&PTR_PTR_102215c60,iVar5);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_22 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_22) goto LAB_1004a75e7;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1004a75e7:
  plVar2 = *(long **)(*(long *)(param_1 + 0x68) + 0x38);
  pcVar3 = *(code **)(*plVar2 + 0x68);
  uVar7 = FUN_10044e660(param_1);
  uVar4 = FUN_1003c0740(uVar7);
  (*pcVar3)(plVar2,uVar4);
  lVar6 = FUN_100458c00(param_1);
  if (lVar6 == 0) {
    uVar4 = 0;
  }
  else {
    uVar7 = FUN_10044e660(param_1);
    lVar6 = FUN_100458c00(param_1);
    uVar4 = FUN_1003c0830(uVar7,*(undefined4 *)(lVar6 + 0x68));
  }
  plVar2 = *(long **)(*(long *)(param_1 + 0x68) + 0x48);
  (**(code **)(*plVar2 + 0x68))(plVar2,uVar4);
  return;
}

