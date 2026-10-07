
bool FUN_1004d0e80(long *param_1,undefined8 *param_2,QString *param_3)

{
  long *plVar1;
  QArrayData *pQVar2;
  undefined8 uVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  long *plVar7;
  bool bVar8;
  char local_48 [8];
  QString local_40;
  undefined1 local_31;
  
  if (2 < DAT_1011b55f8) {
    FUN_1008e3970("","SharedFoldersHost",3,"CSFolderList::resolveHostPath begin");
  }
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  pQVar2 = (QArrayData *)*param_2;
  iVar6 = *(int *)pQVar2;
  if (1 < iVar6 + 1U) {
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + 1;
    local_31 = *(int *)pQVar2 != 0;
    UNLOCK();
    iVar6 = *(int *)pQVar2;
  }
  if (1 < iVar6 + 1U) {
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + 1;
    local_31 = *(int *)pQVar2 != 0;
    UNLOCK();
    iVar6 = *(int *)pQVar2;
  }
  if (1 < iVar6 + 1U) {
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + 1;
    local_31 = *(int *)pQVar2 != 0;
    UNLOCK();
    iVar6 = *(int *)pQVar2;
  }
  if (iVar6 != -1) {
    if (iVar6 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_31 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004d0f40;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1004d0f40:
  plVar7 = operator_new(0x50);
  FUN_1004f46d0(plVar7);
  *plVar7 = (long)&PTR_FUN_100bc3078;
  plVar7[5] = (long)FUN_1004d1270;
  plVar7[6] = 0;
  plVar7[7] = (long)param_1;
  plVar7[8] = (long)pQVar2;
  iVar6 = *(int *)pQVar2;
  if (1 < iVar6 + 1U) {
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + 1;
    local_31 = *(int *)pQVar2 != 0;
    UNLOCK();
    iVar6 = *(int *)pQVar2;
  }
  plVar7[9] = (long)local_48;
  if (iVar6 == -1) goto LAB_1004d0ff0;
  if (iVar6 == 0) {
LAB_1004d0fb1:
    QArrayData::deallocate(pQVar2,2,8);
  }
  else {
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + -1;
    local_31 = *(int *)pQVar2 != 0;
    UNLOCK();
    if (!(bool)local_31) goto LAB_1004d0fb1;
  }
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_31 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004d0ff0;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1004d0ff0:
  uVar3 = *(undefined8 *)(*param_1 + 0x90);
  LOCK();
  *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
  UNLOCK();
  LOCK();
  *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
  UNLOCK();
  cVar5 = FUN_100041750(uVar3,plVar7);
  if (cVar5 == '\0') {
    LOCK();
    plVar1 = plVar7 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
  LOCK();
  plVar1 = plVar7 + 1;
  lVar4 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar4 == 1) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  if (cVar5 == '\0') {
    bVar8 = false;
    if (2 < DAT_1011b55f8) {
      FUN_1008e3970("","SharedFoldersHost",3,"CSFolderList::resolveHostPath end");
    }
  }
  else {
    if (2 < DAT_1011b55f8) {
      FUN_1008e3970("","SharedFoldersHost",3,"CSFolderList::resolveHostPath start wait");
    }
    FUN_1004f4730(plVar7);
    if (2 < DAT_1011b55f8) {
      FUN_1008e3970("","SharedFoldersHost",3,"CSFolderList::resolveHostPath stop wait");
    }
    if (local_48[0] == '\0') {
      bVar8 = false;
    }
    else {
      QString::operator=(param_3,&local_40);
      bVar8 = local_48[0] != '\0';
    }
  }
  LOCK();
  plVar1 = plVar7 + 1;
  lVar4 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar4 == 1) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return bVar8;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return bVar8;
}

