
long FUN_1008aa970(long *param_1,long *param_2,long param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  size_t sVar7;
  long local_80;
  undefined4 local_74;
  long local_60;
  long local_58;
  long local_50;
  long *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar5 = *param_2;
  local_74 = 0x3a;
  local_50 = lVar5;
  local_48 = param_2;
  local_38 = param_3;
  if ((param_1 == (long *)0x0) || (lVar4 = *param_1, lVar4 == 0)) {
    lVar4 = FUN_1008aabb0();
    if (lVar4 == 0) {
      local_40 = 0x4b;
      uVar6 = 0x4b;
      lVar4 = 0;
      goto LAB_1008aab54;
    }
    lVar5 = *param_2;
  }
  local_58 = 0;
  if (param_3 != 0) {
    local_58 = lVar5 + param_3;
  }
  local_80 = lVar5;
  iVar2 = FUN_1008afa40(&local_80,&local_38);
  if (iVar2 == 0) {
    local_40 = 0x4e;
    uVar6 = 0x4e;
  }
  else {
    local_50 = local_80;
    lVar5 = FUN_10089f860((long *)(lVar4 + 8),&local_80,local_60);
    if (lVar5 == 0) {
      local_40 = 0x4f;
      uVar6 = 0x4f;
    }
    else {
      local_60 = (local_50 - local_80) + local_60;
      local_50 = local_80;
      lVar5 = FUN_1008a8340(lVar4 + 0x10,&local_80);
      if (lVar5 == 0) {
        local_40 = 0x50;
        uVar6 = 0x50;
      }
      else {
        local_60 = local_60 + (local_50 - local_80);
        uVar3 = FUN_100821ab0(**(undefined8 **)(lVar4 + 8));
        uVar6 = FUN_1008219f0(uVar3);
        lVar5 = FUN_100890b50(uVar6);
        *(long *)(lVar4 + 0x38) = lVar5;
        if (lVar5 == 0) {
          local_74 = 0xa5;
          local_40 = 0x57;
          uVar6 = 0x57;
        }
        else {
          piVar1 = *(int **)(*(long *)(lVar4 + 8) + 8);
          if (*piVar1 == 4) {
            piVar1 = *(int **)(piVar1 + 2);
            sVar7 = (size_t)*piVar1;
            if (0x10 < (long)sVar7) {
              local_74 = 0x87;
              local_40 = 0x5e;
              uVar6 = 0x5e;
              goto LAB_1008aab54;
            }
            _memcpy((void *)(lVar4 + 0x40),*(void **)(piVar1 + 2),sVar7);
          }
          else {
            *(undefined8 *)(lVar4 + 0x48) = 0;
            *(undefined8 *)(lVar4 + 0x40) = 0;
          }
          iVar2 = FUN_1008af9d0(&local_80);
          if (iVar2 != 0) {
            *param_2 = local_80;
            if (param_1 == (long *)0x0) {
              return lVar4;
            }
            *param_1 = lVar4;
            return lVar4;
          }
          local_40 = 0x65;
          uVar6 = 0x65;
        }
      }
    }
  }
LAB_1008aab54:
  FUN_100887ce0(0xd,0x9f,local_74,"x_pkey.c",uVar6);
  FUN_1008afef0(*param_2,(int)local_50 - (int)*param_2);
  if ((lVar4 != 0) && ((param_1 == (long *)0x0 || (*param_1 != lVar4)))) {
    FUN_1008aac80(lVar4);
  }
  return 0;
}

