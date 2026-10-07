
int FUN_100493130(undefined8 param_1,undefined8 *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  QArrayData *pQVar4;
  int iVar5;
  QArrayData *pQVar6;
  int iVar7;
  long *local_68;
  undefined *local_60;
  QArrayData *local_58;
  undefined *local_50;
  undefined *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  pQVar6 = (QArrayData *)QString::fromAscii_helper("prl_newsid",10);
  local_48 = PTR_shared_null_100ba2188;
  local_50 = PTR_shared_null_100ba2188;
  local_58 = (QArrayData *)*param_2;
  local_40 = pQVar6;
  if (*(int *)(local_58 + 4) == 0) {
    local_58 = (QArrayData *)QString::fromAscii_helper("FAKE_SESSION_UUID",0x11);
  }
  else if (1 < *(int *)local_58 + 1U) {
    LOCK();
    *(int *)local_58 = *(int *)local_58 + 1;
    local_31 = *(int *)local_58 != 0;
    UNLOCK();
  }
  pQVar4 = local_58;
  puVar3 = PTR_shared_null_100ba20d0;
  local_60 = PTR_shared_null_100ba20d0;
  param_3 = (long *)*param_3;
  if (param_3 != (long *)0x0) {
    LOCK();
    *(int *)(param_3 + 1) = (int)param_3[1] + 1;
    UNLOCK();
  }
  local_68 = param_3;
  iVar5 = FUN_100486cb0(param_1,&local_58,&local_40,&local_48,&local_50,0x3800,&local_68,&local_60,
                        FUN_1004933f0,2);
  if (param_3 != (long *)0x0) {
    LOCK();
    plVar1 = param_3 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*param_3 + 0x10))(param_3);
    }
  }
  iVar7 = -0x7ffbedfc;
  if (iVar5 != -0x7ffcbfff) {
    iVar7 = iVar5;
  }
  if (*(int *)puVar3 != -1) {
    if (*(int *)puVar3 != 0) {
      LOCK();
      *(int *)puVar3 = *(int *)puVar3 + -1;
      local_31 = *(int *)puVar3 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049327a;
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_100ba20d0,2,8);
  }
LAB_10049327a:
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_31 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004932a9;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1004932a9:
  FUN_100013180(&local_50);
  FUN_100013180(&local_48);
  if (*(int *)pQVar6 != -1) {
    if (*(int *)pQVar6 != 0) {
      LOCK();
      *(int *)pQVar6 = *(int *)pQVar6 + -1;
      local_31 = *(int *)pQVar6 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return iVar7;
      }
    }
    QArrayData::deallocate(pQVar6,2,8);
  }
  return iVar7;
}

