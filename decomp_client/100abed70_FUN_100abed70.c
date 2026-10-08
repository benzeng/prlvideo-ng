
undefined8 FUN_100abed70(long param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  undefined8 local_58;
  double local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  if (*(char *)(param_1 + 0x50) == '\0') {
    uVar4 = 0;
  }
  else if (*(long *)(param_1 + 0x20) == 0) {
    uVar4 = 0;
  }
  else if (*(int *)(*(long *)(param_1 + 0x20) + 4) == 0) {
    uVar4 = 0;
  }
  else if (*(long *)(param_1 + 0x28) == 0) {
    uVar4 = 0;
  }
  else {
    local_30 = 0;
    local_28._0_4_ = -1;
    local_28._4_4_ = -1;
    uVar4 = 0;
    FUN_100ae7f00(&local_30,0,0);
    local_40 = 0;
    local_38._0_4_ = -1;
    local_38._4_4_ = -1;
    local_48 = 0;
    if ((*(long *)(param_1 + 0x20) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x28);
    }
    uVar4 = FUN_100319c50(uVar4);
    cVar1 = FUN_100330fe0(uVar4,param_2,&local_40,&local_48,&local_50);
    if (cVar1 == '\0') {
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      if ((*(long *)(param_1 + 0x20) != 0) &&
         (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) {
        uVar4 = *(undefined8 *)(param_1 + 0x28);
      }
      uVar4 = FUN_100319c50(uVar4);
      local_58 = FUN_100331080(uVar4,param_2);
      fVar7 = (float)local_50;
      iVar2 = (int)local_30;
      iVar5 = (int)((float)(iVar2 - (int)local_48) * fVar7);
      iVar3 = (int)((ulong)local_30 >> 0x20);
      iVar6 = (int)((float)(iVar3 - local_48._4_4_) * fVar7);
      local_30 = CONCAT44(iVar6,iVar5);
      local_28 = CONCAT44(iVar6 + -1 + (int)((float)((1 - iVar3) + local_28._4_4_) * fVar7),
                          iVar5 + -1 + (int)((float)((1 - iVar2) + (int)local_28) * fVar7));
      iVar5 = (int)local_40;
      iVar6 = (int)((float)(iVar5 - (int)local_48) * fVar7);
      iVar2 = (int)((ulong)local_40 >> 0x20);
      iVar3 = (int)((float)(iVar2 - local_48._4_4_) * fVar7);
      local_40 = CONCAT44(iVar3,iVar6);
      local_38 = CONCAT44(iVar3 + -1 + (int)((float)(local_38._4_4_ + (1 - iVar2)) * fVar7),
                          iVar6 + -1 + (int)((float)((int)local_38 + (1 - iVar5)) * fVar7));
      uVar4 = FUN_100abebf0(param_1,&local_58,8,&local_30,&local_40,0);
    }
  }
  return uVar4;
}

