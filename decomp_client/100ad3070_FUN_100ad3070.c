
undefined8 FUN_100ad3070(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined **local_40;
  int *local_38;
  undefined1 local_29;
  
  local_40 = &PTR_FUN_10223b2c8;
  local_38 = *(int **)(param_2 + 0x998);
  if (*local_38 == 0) {
    if (local_38[2] < 0) {
      piVar3 = (int *)QArrayData::allocate(0x20,8,local_38[2] & 0x7fffffff,0);
      local_38 = piVar3;
      if (piVar3 == (int *)0x0) {
        qBadAlloc();
      }
      *(byte *)((long)piVar3 + 0xb) = *(byte *)((long)piVar3 + 0xb) | 0x80;
      piVar3 = local_38;
    }
    else {
      local_38 = (int *)QArrayData::allocate(0x20,8,(long)local_38[1],0);
      piVar3 = local_38;
      if (local_38 == (int *)0x0) {
        qBadAlloc();
        piVar3 = (int *)0x0;
      }
    }
    if ((piVar3[2] & 0x7fffffffU) != 0) {
      lVar5 = *(long *)(param_2 + 0x998);
      lVar6 = (long)*(int *)(lVar5 + 4) << 5;
      if (lVar6 != 0) {
        puVar4 = (undefined8 *)(lVar5 + *(long *)(lVar5 + 0x10));
        puVar7 = (undefined8 *)(*(long *)(piVar3 + 4) + (long)piVar3);
        do {
          puVar7[3] = puVar4[3];
          puVar7[2] = puVar4[2];
          uVar2 = *puVar4;
          puVar1 = puVar4 + 1;
          puVar4 = puVar4 + 4;
          puVar7[1] = *puVar1;
          *puVar7 = uVar2;
          puVar7 = puVar7 + 4;
          lVar6 = lVar6 + -0x20;
        } while (lVar6 != 0);
        lVar5 = *(long *)(param_2 + 0x998);
      }
      piVar3[1] = *(int *)(lVar5 + 4);
    }
  }
  else if (*local_38 != -1) {
    LOCK();
    *local_38 = *local_38 + 1;
    local_29 = *local_38 != 0;
    UNLOCK();
    local_38 = *(int **)(param_2 + 0x998);
  }
  FUN_100ae6900(*(undefined8 *)(param_2 + 0xac0),&local_40);
  FUN_100ad3450(param_1,param_2,&local_40);
  FUN_100ae5820(&local_40);
  return param_1;
}

