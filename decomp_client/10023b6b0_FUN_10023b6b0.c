
void FUN_10023b6b0(long *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  QArrayData *pQVar5;
  long lVar6;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  lVar6 = 0;
  if ((param_1[3] != 0) && (lVar6 = 0, *(int *)(param_1[3] + 4) != 0)) {
    lVar6 = param_1[4];
  }
  lVar4 = 0;
  uVar3 = FUN_100323e30(lVar6,0);
  if ((param_1[3] != 0) && (lVar4 = 0, *(int *)(param_1[3] + 4) != 0)) {
    lVar4 = param_1[4];
  }
  FUN_100323d90(&local_40,lVar4);
  QString::toLocal8Bit();
  pQVar5 = local_38 + *(long *)(local_38 + 0x10);
  lVar6 = 0;
  if ((param_1[3] != 0) && (lVar6 = 0, *(int *)(param_1[3] + 4) != 0)) {
    lVar6 = param_1[4];
  }
  uVar2 = FUN_100323e20(lVar6);
  FUN_100df99c0("","prl_client_app",0,"Failed to exit from native fullscreen. Vm [%s], display [%d]"
                ,pQVar5,uVar2);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10023b790;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_10023b790:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10023b7c0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10023b7c0:
  pcVar1 = *(code **)(*param_1 + 0xb0);
  FUN_10023b480(param_1,uVar3,0);
  (*pcVar1)(param_1,0);
  return;
}

