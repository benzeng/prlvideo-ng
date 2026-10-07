
undefined8 FUN_1004cf770(long param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined4 local_5c;
  int *local_58;
  int *local_50;
  int *local_48;
  undefined4 local_40;
  int local_38;
  undefined1 local_31;
  
  QMutex::lock();
  uVar1 = *(uint *)(param_2 + 8);
  local_38 = 0;
  FUN_1004d6ff0(&local_58,param_1 + 8);
  local_50 = local_58 + (long)local_58[2] * 2 + 4;
  local_48 = local_58 + (long)local_58[3] * 2 + 4;
  iVar5 = 4;
  if (local_58[2] != local_58[3]) {
    uVar6 = 4;
    iVar7 = 8;
    do {
      local_40 = 1;
      iVar5 = (int)uVar6;
      puVar2 = *(undefined8 **)local_50;
      cVar3 = FUN_1004d84c0(*puVar2);
      if (cVar3 != '\0') {
        local_5c = FUN_1004d8470(*puVar2);
        if ((ulong)uVar1 < uVar6 + 4) goto LAB_1004cf84c;
        iVar4 = FUN_1002a5a50(param_2,uVar6,&local_5c,4);
        uVar6 = (ulong)(uint)(iVar5 + iVar4);
        local_38 = local_38 + 1;
      }
      iVar5 = (int)uVar6;
      local_50 = local_50 + 2;
    } while (local_50 != local_48);
  }
  local_40 = 1;
  iVar7 = 2;
LAB_1004cf84c:
  if (*local_58 != -1) {
    if (*local_58 != 0) {
      LOCK();
      *local_58 = *local_58 + -1;
      local_31 = *local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004cf876;
    }
    FUN_1004d6ab0(&local_58,local_58);
  }
LAB_1004cf876:
  uVar8 = 0xf0000009;
  if (iVar7 == 2) {
    uVar8 = 0;
    FUN_1002a5a50(param_2,0,&local_38,4);
    *(int *)(param_2 + 0x10) = iVar5;
  }
  QMutex::unlock();
  return uVar8;
}

