
void FUN_100ac1210(long param_1,undefined4 param_2,undefined4 *param_3,long *param_4,
                  undefined4 param_5)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 uVar6;
  undefined *local_70;
  int local_68;
  int iStack_64;
  QArrayData *local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_31;
  
  uVar6 = 2;
  if (*(int *)(*param_4 + 0xc) != *(int *)(*param_4 + 8)) {
    uVar6 = param_2;
  }
  local_48 = *param_3;
  uStack_44 = param_3[1];
  uStack_40 = param_3[2];
  uStack_3c = param_3[3];
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar4 = FUN_100319cd0(uVar4);
  FUN_100345d70(uVar4,&local_48,2);
  local_58 = local_48;
  local_54 = uStack_44;
  local_50 = uStack_40;
  local_4c = uStack_3c;
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar4 = FUN_100319c50(uVar4);
  cVar2 = FUN_100330a50(uVar4);
  if (cVar2 == '\0') {
    FUN_100abba40(param_1 + 0x28,uVar6,&local_58,param_4,param_5);
    return;
  }
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_1003193e0(&local_60,uVar4);
  lVar5 = FUN_1000a9690(&local_60);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100ac1318;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100ac1318:
  if (lVar5 != 0) {
    uVar4 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
    }
    uVar4 = FUN_100319c00(uVar4);
    uVar3 = FUN_100328b80(uVar4);
    FUN_1000b78c0(lVar5,uVar3,&local_68);
    piVar1 = (int *)(param_1 + 0x38);
    if ((iStack_64 != *(int *)(param_1 + 0x3c)) || (local_68 != *piVar1)) {
      if ((*(int *)(param_1 + 0x3c) != 0) || (*piVar1 != 0)) {
        local_70 = PTR_shared_null_1021e15e8;
        FUN_100ac16d0(param_1,piVar1,2,0,&local_70,0);
        FUN_100036370(&local_70);
      }
      *(ulong *)piVar1 = CONCAT44(iStack_64,local_68);
    }
    FUN_100ac16d0(param_1,piVar1,uVar6,&local_58,param_4,param_5);
  }
  return;
}

