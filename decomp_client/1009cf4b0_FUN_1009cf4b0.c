
undefined1 FUN_1009cf4b0(int *param_1,long param_2,uint param_3,ulong *param_4)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  ssize_t sVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined1 uVar11;
  ulong uVar12;
  undefined2 local_5a;
  int *local_58;
  uint local_50;
  ulong local_48;
  undefined8 local_40;
  int local_38;
  ulong uVar10;
  
  uVar4 = 0x7fffffff;
  if (param_3 != 0) {
    uVar4 = param_3;
  }
  uVar8 = 0;
  do {
    if (*(int *)(param_2 + uVar8 * 4) == 0) break;
    uVar8 = uVar8 + 1;
  } while ((uint)uVar8 < uVar4);
  local_50 = param_1[2];
  local_40 = 0;
  iVar1 = (int)uVar8;
  local_38 = 3;
  local_48 = (ulong)(iVar1 + 1) * 2 + 4;
  uVar12 = (ulong)(iVar1 + 1) * 2 + 0xb & 0x3fffffff8;
  uVar7 = *(ulong *)(param_1 + 4);
  local_58 = param_1;
  if (uVar7 < local_50 + uVar12) {
    iVar5 = _getpagesize();
    uVar10 = (long)iVar5;
    if ((ulong)(long)iVar5 <= uVar12) {
      uVar10 = uVar12;
    }
    lVar9 = uVar10 + uVar7;
    iVar5 = _ftruncate(*param_1,lVar9);
    if (iVar5 != 0) {
      local_50 = 0xffffffff;
      uVar11 = 0;
      goto LAB_1009cf61f;
    }
    *(long *)(param_1 + 4) = lVar9;
    local_50 = param_1[2];
  }
  param_1[2] = (int)uVar12 + local_50;
  if (local_50 == 0xffffffff) {
    uVar11 = 0;
  }
  else {
    local_40 = CONCAT44(local_40._4_4_,iVar1 * 2);
    cVar3 = FUN_1009cefd0(param_1,param_2,uVar8 & 0xffffffff,&local_58);
    piVar2 = local_58;
    uVar11 = 0;
    if (cVar3 != '\0') {
      local_5a = 0;
      uVar8 = (ulong)(local_50 + 4 + iVar1 * 2);
      if (*(ulong *)(local_58 + 4) < uVar8 + 2) {
        uVar11 = 0;
      }
      else {
        uVar7 = _lseek(*local_58,uVar8,0);
        if (uVar7 == uVar8) {
          sVar6 = _write(*piVar2,&local_5a,2);
          if (sVar6 == 2) {
            *param_4 = local_48 & 0xffffffff | (ulong)local_50 << 0x20;
            uVar11 = 1;
          }
          else {
            uVar11 = 0;
          }
        }
        else {
          uVar11 = 0;
        }
      }
    }
  }
LAB_1009cf61f:
  piVar2 = local_58;
  if (((local_38 != 2) && (uVar8 = (ulong)local_50, uVar8 + 4 <= *(ulong *)(local_58 + 4))) &&
     (uVar7 = _lseek(*local_58,uVar8,0), uVar7 == uVar8)) {
    _write(*piVar2,&local_40,4);
  }
  return uVar11;
}

