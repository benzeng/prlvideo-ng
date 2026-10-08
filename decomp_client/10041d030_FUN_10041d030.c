
undefined8 * FUN_10041d030(undefined8 *param_1,int param_2)

{
  undefined *puVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined *local_58;
  undefined *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  int *local_40;
  undefined1 local_31;
  
  if (DAT_102273fd8 == 0) {
    DAT_102273fd8 = FUN_10041d260("FileDevSelectorInitInfo",0xffffffffffffffff,1);
  }
  uVar2 = DAT_102273fd8;
  uVar4 = QVariant::userType();
  puVar1 = PTR_shared_null_1021e15e8;
  if (uVar2 == uVar4) {
    puVar5 = (undefined8 *)QVariant::constData();
    *param_1 = *puVar5;
    FUN_10041a130(param_1 + 1,puVar5 + 1);
    return param_1;
  }
  local_50 = PTR_shared_null_1021e15e8;
  local_48 = 0;
  uStack_44 = 0;
  FUN_10041a130(&local_40,&local_50);
  if (*(int *)puVar1 != -1) {
    if (*(int *)puVar1 != 0) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + -1;
      local_31 = *(int *)puVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10041d0f6;
    }
    FUN_10041a960(&local_50,PTR_shared_null_1021e15e8);
  }
LAB_10041d0f6:
  cVar3 = QVariant::convert(param_2,(void *)(ulong)uVar2);
  if (cVar3 == '\0') {
    local_58 = puVar1;
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)((long)param_1 + 4) = 0;
    FUN_10041a130(param_1 + 1,&local_58);
    if (*(int *)puVar1 != -1) {
      if (*(int *)puVar1 != 0) {
        LOCK();
        *(int *)puVar1 = *(int *)puVar1 + -1;
        local_31 = *(int *)puVar1 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10041d170;
      }
      FUN_10041a960(&local_58,PTR_shared_null_1021e15e8);
    }
  }
  else {
    *param_1 = CONCAT44(uStack_44,local_48);
    FUN_10041a130(param_1 + 1,&local_40);
  }
LAB_10041d170:
  if (*local_40 != -1) {
    if (*local_40 != 0) {
      LOCK();
      *local_40 = *local_40 + -1;
      UNLOCK();
      if (*local_40 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    FUN_10041a960(&local_40,local_40);
  }
  return param_1;
}

