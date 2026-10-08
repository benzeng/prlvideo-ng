
long * FUN_100225050(long *param_1,long param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20 [2];
  
  *param_1 = (long)PTR_shared_null_1021e15e8;
  local_20[0] = 6;
  FUN_100129840(param_1,local_20);
  cVar1 = FUN_1002251d0(param_2);
  if (cVar1 == '\0') {
    local_2c = 1;
    FUN_100129840(param_1,&local_2c);
    uVar3 = 0;
    if ((*(long *)(param_2 + 0x18) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_2 + 0x18) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_2 + 0x20);
    }
    cVar1 = FUN_10031a7f0(uVar3,*(undefined4 *)(param_2 + 0x2c));
    if (cVar1 != '\0') {
      iVar2 = -1;
      if (*(int *)(param_2 + 0x28) != 3) {
        iVar2 = 0;
      }
      local_30 = 2;
      FUN_1002264f0(param_1,iVar2 + (*(int *)(*param_1 + 0xc) - *(int *)(*param_1 + 8)),&local_30);
    }
  }
  else {
    local_24 = 0;
    FUN_100129840(param_1,&local_24);
    uVar3 = 0;
    if ((*(long *)(param_2 + 0x18) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_2 + 0x18) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_2 + 0x20);
    }
    cVar1 = FUN_10031a7f0(uVar3,*(undefined4 *)(param_2 + 0x2c));
    if (cVar1 != '\0') {
      local_28 = 2;
      FUN_100129840(param_1,&local_28);
    }
  }
  local_34 = 3;
  FUN_100129840(param_1,&local_34);
  uVar3 = 0;
  if ((*(long *)(param_2 + 0x18) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_2 + 0x18) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_2 + 0x20);
  }
  iVar2 = FUN_100319ae0(uVar3);
  if (iVar2 == 0) {
    local_38 = 4;
    FUN_100129840(param_1,&local_38);
    local_3c = 5;
    FUN_100129840(param_1,&local_3c);
  }
  return param_1;
}

