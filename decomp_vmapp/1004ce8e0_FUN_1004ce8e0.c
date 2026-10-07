
undefined4 FUN_1004ce8e0(long param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  undefined4 local_64;
  int *local_58;
  int *local_50;
  int *local_48;
  undefined4 local_40;
  int local_38;
  undefined1 local_31;
  
  QMutex::lock();
  uVar1 = *(uint *)(param_2 + 8);
  iVar8 = 0;
  uVar6 = 0;
  do {
    uVar9 = uVar6 + 4;
    local_64 = 0xf0000009;
    if (uVar1 < uVar9) goto LAB_1004ceacb;
    local_38 = 0;
    FUN_1004d6ff0(&local_58,param_1 + 8);
    local_50 = local_58 + (long)local_58[2] * 2 + 4;
    local_48 = local_58 + (long)local_58[3] * 2 + 4;
    local_40 = 1;
    iVar7 = 6;
    if (local_58[2] != local_58[3]) {
      do {
        local_40 = 1;
        plVar2 = *(long **)local_50;
        cVar4 = FUN_1004d84c0(*plVar2);
        if ((cVar4 != '\0') && ((iVar8 == 0) != (*(char *)(*plVar2 + 0x31) != '\0'))) {
          lVar3 = *(long *)(*plVar2 + 0x10);
          if ((uVar9 + 2 + (long)*(int *)(lVar3 + 4) * 2 <= (ulong)*(uint *)(param_2 + 8)) &&
             (uVar5 = FUN_1002a5a50(param_2,uVar9,lVar3 + *(long *)(lVar3 + 0x10),
                                    (long)*(int *)(lVar3 + 4) * 2 + 2), uVar5 != 0)) {
            uVar9 = uVar5 + uVar9;
            lVar3 = *(long *)(*plVar2 + 0x20);
            if ((uVar9 + 2 + (long)*(int *)(lVar3 + 4) * 2 <= (ulong)*(uint *)(param_2 + 8)) &&
               (uVar5 = FUN_1002a5a50(param_2,uVar9,lVar3 + *(long *)(lVar3 + 0x10),
                                      (long)*(int *)(lVar3 + 4) * 2 + 2), uVar5 != 0)) {
              uVar9 = uVar5 + uVar9;
              local_38 = local_38 + 1;
              goto LAB_1004cea2d;
            }
          }
          iVar7 = 5;
          goto LAB_1004cea6c;
        }
LAB_1004cea2d:
        local_50 = local_50 + 2;
        local_40 = 1;
      } while (local_50 != local_48);
      iVar7 = 6;
    }
LAB_1004cea6c:
    if (*local_58 != -1) {
      if (*local_58 != 0) {
        LOCK();
        *local_58 = *local_58 + -1;
        local_31 = *local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1004cea96;
      }
      FUN_1004d6ab0(&local_58,local_58);
    }
LAB_1004cea96:
    if (iVar7 != 6) goto LAB_1004ceacb;
    FUN_1002a5a50(param_2,uVar6,&local_38,4);
    iVar8 = iVar8 + 1;
    uVar6 = uVar9;
  } while (iVar8 < 2);
  *(int *)(param_2 + 0x10) = (int)uVar9;
  local_64 = 0;
LAB_1004ceacb:
  QMutex::unlock();
  return local_64;
}

