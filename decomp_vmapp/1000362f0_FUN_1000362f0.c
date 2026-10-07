
void FUN_1000362f0(undefined8 param_1,char param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  QMapNodeBase *pQVar3;
  char cVar4;
  Data *local_78 [2];
  QArrayData *local_68;
  undefined1 local_58;
  undefined7 uStack_57;
  QArrayData *local_48;
  undefined4 local_40;
  QMapNodeBase *local_38;
  int *local_30;
  undefined1 local_21;
  
  puVar2 = PTR_shared_null_100ba2188;
  local_30 = (int *)PTR_shared_null_100ba2188;
  if (2 < DAT_1011b55f8) {
    FUN_1008e3970("PRINTING_TOOL","vm",3,"Host Printers bUse = %d",param_2);
  }
  if (param_2 != '\0') {
    FUN_1000335b0();
  }
  puVar1 = PTR_shared_null_100ba20d0;
  local_48 = (QArrayData *)PTR_shared_null_100ba20d0;
  local_38 = (QMapNodeBase *)PTR_shared_null_100ba20d8;
  FUN_100032ce0(param_1,1,&local_30,&local_58);
  if (CONCAT71(uStack_57,local_58) != 0) {
    cVar4 = FUN_100038180(CONCAT71(uStack_57,local_58),&local_38,local_40);
    if (cVar4 == '\0') {
      FUN_1004c07d0(param_1,CONCAT71(uStack_57,local_58),0xf000001c);
    }
    else {
      FUN_1004c07d0(param_1,CONCAT71(uStack_57,local_58),0);
    }
  }
  local_78[0] = (Data *)puVar2;
  local_68 = (QArrayData *)puVar1;
  FUN_100033090(param_1,&local_30,local_78);
  FUN_1000361a0(param_1,local_78);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_21 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10003640a;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10003640a:
  if (*(int *)local_78[0] != -1) {
    if (*(int *)local_78[0] != 0) {
      LOCK();
      *(int *)local_78[0] = *(int *)local_78[0] + -1;
      local_21 = *(int *)local_78[0] != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100036430;
    }
    QListData::dispose(local_78[0]);
  }
LAB_100036430:
  pQVar3 = local_38;
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100036478;
    }
    if (*(long *)(local_38 + 0x10) != 0) {
      FUN_100013720();
      QMapDataBase::freeTree(pQVar3,(int)*(undefined8 *)(pQVar3 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar3);
  }
LAB_100036478:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000364a8;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1000364a8:
  if (*local_30 != -1) {
    if (*local_30 != 0) {
      LOCK();
      *local_30 = *local_30 + -1;
      UNLOCK();
      if (*local_30 != 0) {
        return;
      }
      local_58 = 0;
    }
    FUN_100037550(&local_30,local_30);
  }
  return;
}

