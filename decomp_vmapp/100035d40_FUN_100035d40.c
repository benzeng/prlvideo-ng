
void FUN_100035d40(undefined8 param_1)

{
  undefined *puVar1;
  QMapNodeBase *pQVar2;
  char cVar3;
  Data *local_78 [2];
  QArrayData *local_68;
  long local_58 [2];
  QArrayData *local_48;
  undefined4 local_40;
  QMapNodeBase *local_38;
  int *local_30;
  char local_23;
  char local_22;
  undefined1 local_21;
  
  puVar1 = PTR_shared_null_100ba2188;
  local_22 = '\0';
  local_23 = '\0';
  local_30 = (int *)PTR_shared_null_100ba2188;
  FUN_1000335b0(param_1,0,&local_30,&local_22,&local_23);
  if (local_22 != '\0') {
    local_48 = (QArrayData *)PTR_shared_null_100ba20d0;
    local_38 = (QMapNodeBase *)PTR_shared_null_100ba20d8;
    FUN_100032ce0(param_1,0,&local_30,local_58);
    if (local_58[0] != 0) {
      cVar3 = FUN_100038180(local_58[0],&local_38,local_40);
      if (cVar3 == '\0') {
        FUN_1004c07d0(param_1,local_58[0],0xf000001c);
      }
      else {
        FUN_1004c07d0(param_1,local_58[0],0);
      }
    }
    pQVar2 = local_38;
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_21 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100035e26;
      }
      if (*(long *)(local_38 + 0x10) != 0) {
        FUN_100013720();
        QMapDataBase::freeTree(pQVar2,(int)*(undefined8 *)(pQVar2 + 0x10));
      }
      QMapDataBase::freeData((QMapDataBase *)pQVar2);
    }
LAB_100035e26:
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_21 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100035e56;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_100035e56:
  if (local_23 == '\0') goto LAB_100035ee1;
  local_78[0] = (Data *)puVar1;
  local_68 = (QArrayData *)PTR_shared_null_100ba20d0;
  FUN_100033090(param_1,&local_30,local_78);
  FUN_1000361a0(param_1,local_78);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_21 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100035ebb;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100035ebb:
  if (*(int *)local_78[0] != -1) {
    if (*(int *)local_78[0] != 0) {
      LOCK();
      *(int *)local_78[0] = *(int *)local_78[0] + -1;
      local_21 = *(int *)local_78[0] != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100035ee1;
    }
    QListData::dispose(local_78[0]);
  }
LAB_100035ee1:
  if (*local_30 != -1) {
    if (*local_30 != 0) {
      LOCK();
      *local_30 = *local_30 + -1;
      UNLOCK();
      if (*local_30 != 0) {
        return;
      }
      local_21 = 0;
    }
    FUN_100037550(&local_30,local_30);
  }
  return;
}

