
void FUN_100346a90(long param_1,undefined8 *param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  QArrayData *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38;
  undefined1 local_37;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (((((*(int *)(param_1 + 0x158) == *(int *)(param_2 + 1)) &&
        (*(int *)(param_1 + 0x15c) == *(int *)((long)param_2 + 0xc))) &&
       (*(int *)(param_1 + 0x160) == *(int *)(param_2 + 2))) &&
      ((*(int *)(param_1 + 0x164) == *(int *)((long)param_2 + 0x14) &&
       (*(char *)(param_1 + 0x168) == *(char *)(param_2 + 3))))) &&
     (*(char *)(param_1 + 0x169) == *(char *)((long)param_2 + 0x19))) {
    return;
  }
  *(undefined8 *)(param_1 + 0x188) = param_2[7];
  *(undefined8 *)(param_1 + 0x180) = param_2[6];
  *(undefined8 *)(param_1 + 0x178) = param_2[5];
  *(undefined8 *)(param_1 + 0x170) = param_2[4];
  *(undefined8 *)(param_1 + 0x168) = param_2[3];
  *(undefined8 *)(param_1 + 0x160) = param_2[2];
  uVar3 = *param_2;
  *(undefined8 *)(param_1 + 0x158) = param_2[1];
  *(undefined8 *)(param_1 + 0x150) = uVar3;
  local_48 = *(undefined4 *)(param_1 + 0x158);
  uStack_44 = *(undefined4 *)(param_1 + 0x15c);
  uStack_40 = *(undefined4 *)(param_1 + 0x160);
  uStack_3c = *(undefined4 *)(param_1 + 0x164);
  local_38 = *(undefined1 *)(param_1 + 0x168);
  local_37 = *(undefined1 *)(param_1 + 0x169);
  local_28 = local_48;
  uStack_24 = uStack_44;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  cVar1 = FUN_100345d70(param_1,&local_28,2);
  if (cVar1 != '\0') {
    local_48 = local_28;
    uStack_44 = uStack_24;
    uStack_40 = uStack_20;
    uStack_3c = uStack_1c;
  }
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  FUN_1003193e0(&local_50,uVar3);
  lVar2 = FUN_1000a9690(&local_50);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      local_28 = CONCAT31(local_28._1_3_,*(int *)local_50 != 0);
      if (*(int *)local_50 != 0) goto LAB_100346bf1;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100346bf1:
  if (lVar2 != 0) {
    FUN_1000b7960(lVar2,&local_48);
  }
  return;
}

