
undefined1 FUN_10041a360(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  undefined1 uVar5;
  bool bVar6;
  bool bVar7;
  int *local_78;
  int *local_70;
  int *local_68;
  uint local_60;
  uint *local_58;
  uint *local_50;
  uint *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  if (*param_2 == *param_1) {
    if (param_2[1] == param_1[1]) {
      FUN_10041a130(&local_58,param_2 + 2);
      local_50 = local_58 + (long)(int)local_58[2] * 2 + 4;
      local_48 = local_58 + (long)(int)local_58[3] * 2 + 4;
      local_40 = 1;
      uVar5 = 1;
      if (local_58[2] != local_58[3]) {
        do {
          local_40 = 1;
          piVar1 = *(int **)local_50;
          FUN_10041a130(&local_78,param_1 + 2);
          local_70 = local_78 + (long)local_78[2] * 2 + 4;
          local_68 = local_78 + (long)local_78[3] * 2 + 4;
          local_60 = 1;
          if (local_78[2] == local_78[3]) {
            bVar6 = false;
          }
          else {
            bVar6 = false;
            do {
              if ((((local_60 == 0) || (piVar2 = *(int **)local_70, *piVar2 != *piVar1)) ||
                  (cVar3 = operator==((QString *)(piVar2 + 2),(QString *)(piVar1 + 2)),
                  cVar3 == '\0')) || ((char)piVar2[6] != (char)piVar1[6])) {
                local_70 = local_70 + 2;
                local_60 = 1;
              }
              else {
                local_70 = local_70 + 2;
                uVar4 = local_60 ^ 1;
                bVar6 = true;
                bVar7 = local_60 == 1;
                local_60 = uVar4;
                if (bVar7) break;
              }
            } while (local_70 != local_68);
          }
          if (*local_78 != -1) {
            if (*local_78 != 0) {
              LOCK();
              *local_78 = *local_78 + -1;
              local_31 = *local_78 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10041a4bf;
            }
            FUN_10041a960(&local_78,local_78);
          }
LAB_10041a4bf:
          if (!bVar6) {
            uVar5 = 0;
            goto LAB_10041a4f0;
          }
          local_50 = local_50 + 2;
          local_40 = 1;
        } while (local_50 != local_48);
        uVar5 = 1;
      }
LAB_10041a4f0:
      if (*local_58 != 0xffffffff) {
        if (*local_58 != 0) {
          LOCK();
          *local_58 = *local_58 - 1;
          UNLOCK();
          if (*local_58 != 0) {
            return uVar5;
          }
          local_31 = 0;
        }
        FUN_10041a960(&local_58,local_58);
      }
    }
    else {
      uVar5 = 0;
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}

