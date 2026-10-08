
undefined8 FUN_1002d8710(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  QArrayData *pQVar3;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  FUN_100df99c0("","prl_client_app",0,"Get Upgrade to Pro URL");
  iVar1 = *(int *)(*(long *)(param_1 + 0x48) + 4);
  uVar2 = FUN_1002c6aa0(param_1);
  if (iVar1 != 0) {
    local_40 = (QArrayData *)
               QString::fromAscii_helper("{D1D25767-72BC-4021-A323-43293462D7D8}",0x26);
    uVar2 = FUN_100175d50(uVar2,&local_40,param_1 + 0x48,0);
    if (*(int *)local_40 == -1) {
      return uVar2;
    }
    pQVar3 = local_40;
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return uVar2;
      }
      local_21 = 0;
    }
    goto LAB_1002d8843;
  }
  local_30 = (QArrayData *)QString::fromAscii_helper("{9E7CD4A6-46BB-4B67-9A8D-2368636363B2}",0x26);
  local_38 = (QArrayData *)QString::fromAscii_helper("",0);
  uVar2 = FUN_100175d50(uVar2,&local_30,&local_38,0);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002d8822;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1002d8822:
  if (*(int *)local_30 == -1) {
    return uVar2;
  }
  pQVar3 = local_30;
  if (*(int *)local_30 != 0) {
    LOCK();
    *(int *)local_30 = *(int *)local_30 + -1;
    UNLOCK();
    if (*(int *)local_30 != 0) {
      return uVar2;
    }
    local_21 = 0;
  }
LAB_1002d8843:
  QArrayData::deallocate(pQVar3,2,8);
  return uVar2;
}

