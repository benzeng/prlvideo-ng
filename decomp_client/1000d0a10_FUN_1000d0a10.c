
void FUN_1000d0a10(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  char cVar2;
  byte bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  undefined *local_b8;
  undefined4 local_b0 [32];
  
  if (1 < DAT_10230ffd0) {
    FUN_100df99c0("SGAC","prl_client_app",2,"Interactive stub with psn={%d, %d} connected",
                  *(undefined4 *)param_2,*(undefined4 *)((long)param_2 + 4));
  }
  uVar4 = FUN_100152280();
  lVar5 = FUN_1001548f0(uVar4,param_1 + 0x10);
  if (lVar5 == 0) {
    return;
  }
  *(undefined8 *)(param_1 + 0x218) = *param_2;
  puVar1 = PTR_shared_null_1021e1288;
  local_b8 = PTR_shared_null_1021e1288;
  FUN_1000d0ea0(param_1,&local_b8,param_2);
  if (*(int *)puVar1 != -1) {
    if (*(int *)puVar1 != 0) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      local_b0[0] = CONCAT31(local_b0[0]._1_3_,*(int *)puVar1 != 0);
      if (*(int *)puVar1 != 0) goto LAB_1000d0ae3;
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
LAB_1000d0ae3:
  if ((*(int *)(param_1 + 600) != 2) &&
     ((*(int *)(param_1 + 0x21c) != 0 || (*(int *)(param_1 + 0x218) != 0)))) {
    local_b0[0] = 1;
    FUN_1000c4970((int *)(param_1 + 0x218),0x86,local_b0,0x80);
  }
  cVar2 = FUN_10018ffc0(lVar5);
  if (cVar2 == '\0') {
    local_c0 = (QArrayData *)puVar1;
    FUN_1000faca0(param_1 + 0x118,&local_c0);
    FUN_1000c4970(param_2,0x8d,local_c0 + *(long *)(local_c0 + 0x10),*(undefined4 *)(local_c0 + 4));
    if (*(int *)local_c0 != -1) {
      if (*(int *)local_c0 != 0) {
        LOCK();
        *(int *)local_c0 = *(int *)local_c0 + -1;
        UNLOCK();
        local_b0[0] = CONCAT31(local_b0[0]._1_3_,*(int *)local_c0 != 0);
        if (*(int *)local_c0 != 0) goto LAB_1000d0ba7;
      }
      QArrayData::deallocate(local_c0,1,8);
    }
  }
LAB_1000d0ba7:
  FUN_10018d830(&local_d0,lVar5);
  FUN_10018d860(&local_d8,lVar5);
  FUN_1000d81b0(&local_c8,&local_d0,&local_d8);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      UNLOCK();
      local_b0[0] = CONCAT31(local_b0[0]._1_3_,*(int *)local_d8 != 0);
      if (*(int *)local_d8 != 0) goto LAB_1000d0c1b;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_1000d0c1b:
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      UNLOCK();
      local_b0[0] = CONCAT31(local_b0[0]._1_3_,*(int *)local_d0 != 0);
      if (*(int *)local_d0 != 0) goto LAB_1000d0c57;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_1000d0c57:
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  bVar3 = FUN_100052250(param_1 + 0x10,&local_c8);
  local_158 = CONCAT44(local_158._4_4_,bVar3 + 1);
  FUN_1000c4970(param_2,0x82,&local_158,0x80);
  FUN_1000df990(param_1,param_2);
  FUN_1000dfdf0(param_1,1);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      UNLOCK();
      local_b0[0] = CONCAT31(local_b0[0]._1_3_,*(int *)local_c8 != 0);
      if (*(int *)local_c8 != 0) {
        return;
      }
    }
    QArrayData::deallocate(local_c8,2,8);
  }
  return;
}

