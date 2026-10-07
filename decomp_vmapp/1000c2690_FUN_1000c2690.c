
undefined8 FUN_1000c2690(long param_1,undefined4 param_2,undefined2 param_3)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  QArrayData *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined1 local_21;
  
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  lVar3 = FUN_1000e99d0(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x1158),0x211,0);
  local_48 = CONCAT44(param_2,1);
  uStack_40 = CONCAT62(uStack_40._2_6_,param_3);
  uStack_40 = CONCAT44(*(undefined4 *)(param_1 + 0x44),(undefined4)uStack_40);
  *(undefined4 *)(lVar3 + 0x1280 + (ulong)*(uint *)(param_1 + 0x34) * 4) = 0;
  lVar3 = FUN_1000e99d0(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x1158),0x211,0);
  ___bzero((ulong)*(uint *)(param_1 + 0x34) * 0x940 + lVar3,0x4a0);
  lVar3 = FUN_1000e99d0(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x1158),0x211,0);
  ___bzero(lVar3 + 0x4a0 + (ulong)*(uint *)(param_1 + 0x34) * 0x940,0x4a0);
  lVar3 = FUN_1000e99d0(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x1158),0x211,0);
  lVar6 = (ulong)*(uint *)(param_1 + 0x34) * 0x940;
  ___bzero(lVar3 + 8 + lVar6,0x498);
  *(undefined4 *)(lVar3 + 8 + lVar6) = 0x12;
  lVar3 = FUN_1000e99d0(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x1158),0x211,0);
  lVar6 = (ulong)*(uint *)(param_1 + 0x34) * 0x940;
  ___bzero(lVar3 + 0x4a8 + lVar6,0x498);
  *(undefined4 *)(lVar3 + 0x4a8 + lVar6) = 0x12;
  plVar4 = operator_new(0x670);
  FUN_100415ed0(plVar4,param_1);
  *(long **)(param_1 + 0x20) = plVar4;
  pcVar1 = *(code **)(*plVar4 + 0x68);
  local_50 = *(QArrayData **)(param_1 + 0x48);
  if (1 < *(int *)local_50 + 1U) {
    LOCK();
    *(int *)local_50 = *(int *)local_50 + 1;
    local_21 = *(int *)local_50 != 0;
    UNLOCK();
  }
  iVar2 = (*pcVar1)(plVar4,&local_48,&local_50);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000c284f;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1000c284f:
  uVar5 = 0;
  if (iVar2 != 0) {
    uVar5 = (**(code **)(**(long **)(param_1 + 0x20) + 0x70))();
  }
  return uVar5;
}

