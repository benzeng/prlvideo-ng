
void FUN_10070fb00(long param_1,long *param_2,char param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  QArrayData *local_70;
  long local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined4 local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined1 local_31;
  
  lVar9 = *(long *)(param_1 + 0x10);
  lVar3 = *(long *)(lVar9 + 0x18);
  lVar4 = *param_2;
  if (lVar3 == lVar4) {
    return;
  }
  iVar1 = *(int *)(lVar3 + 0xc);
  iVar2 = *(int *)(lVar3 + 8);
  if (iVar1 - iVar2 == *(int *)(lVar4 + 0xc) - *(int *)(lVar4 + 8)) {
    if (iVar1 == iVar2) {
      return;
    }
    puVar8 = (undefined8 *)(lVar3 + 0x10 + (long)iVar2 * 8);
    puVar7 = (undefined8 *)(lVar4 + 0x10 + (long)*(int *)(lVar4 + 8) * 8);
    lVar9 = (long)iVar1 * 8 + (long)iVar2 * -8;
    while (cVar6 = FUN_100714df0(*puVar8,*puVar7), cVar6 != '\0') {
      puVar8 = puVar8 + 1;
      puVar7 = puVar7 + 1;
      lVar9 = lVar9 + -8;
      if (lVar9 == 0) {
        return;
      }
    }
    lVar9 = *(long *)(param_1 + 0x10);
  }
  local_48 = PTR_shared_null_1021e15e8;
  if (*(undefined **)(lVar9 + 0x18) != PTR_shared_null_1021e15e8) {
    FUN_10055a620(&local_40,&local_48);
    uVar5 = *(undefined8 *)(lVar9 + 0x18);
    *(undefined8 *)(lVar9 + 0x18) = local_40;
    local_40 = uVar5;
    FUN_1000fe670(&local_40);
  }
  FUN_1000fe670(&local_48);
  FUN_10055a620(&local_68,param_2);
  local_60 = (undefined8 *)(local_68 + 0x10 + (long)*(int *)(local_68 + 8) * 8);
  local_58 = (undefined8 *)(local_68 + 0x10 + (long)*(int *)(local_68 + 0xc) * 8);
  if (*(int *)(local_68 + 8) != *(int *)(local_68 + 0xc)) {
    do {
      local_50 = 1;
      FUN_100581a70(*(long *)(param_1 + 0x10) + 0x18,*local_60);
      local_60 = local_60 + 1;
    } while (local_60 != local_58);
  }
  local_50 = 1;
  FUN_1000fe670(&local_68);
  local_70 = (QArrayData *)PTR_shared_null_1021e1288;
  FUN_100852e60(param_1,&local_70);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10070fc8a;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10070fc8a:
  if (param_3 != '\0') {
    FUN_10070dd40(*(undefined8 *)(param_1 + 0x10));
  }
  return;
}

