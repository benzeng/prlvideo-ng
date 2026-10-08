
void FUN_100554f80(long param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  QString *pQVar3;
  char cVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  bool bVar10;
  int *local_60;
  int *local_58;
  int *local_50;
  uint local_48;
  QString local_40;
  int *local_38;
  undefined1 local_29;
  
  if (*(long *)(param_1 + 0x60) != *param_2) {
    FUN_10055a620(&local_38);
    piVar2 = *(int **)(param_1 + 0x60);
    *(int **)(param_1 + 0x60) = local_38;
    local_38 = piVar2;
    FUN_1000fe670(&local_38);
  }
  puVar1 = (undefined8 *)(param_1 + 0x68);
  if (*(long *)(param_1 + 0x68) != *param_3) {
    FUN_1002101d0(&local_38,param_3);
    piVar2 = (int *)*puVar1;
    *puVar1 = local_38;
    local_38 = piVar2;
    if (*piVar2 != -1) {
      if (*piVar2 != 0) {
        LOCK();
        *piVar2 = *piVar2 + -1;
        local_29 = *piVar2 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10055500f;
      }
      FUN_1001c45d0(&local_38,piVar2);
    }
  }
LAB_10055500f:
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  FUN_1002101d0(&local_60,puVar1);
  local_58 = local_60 + (long)local_60[2] * 2 + 4;
  local_50 = local_60 + (long)local_60[3] * 2 + 4;
  local_48 = 1;
  if (local_60[2] != local_60[3]) {
    do {
      if (local_48 == 0) {
LAB_1005550b7:
        local_58 = local_58 + 2;
        local_48 = 1;
      }
      else {
        pQVar3 = *(QString **)local_58;
        cVar4 = operator==(pQVar3,(QString *)(param_1 + 0x58));
        if (cVar4 == '\0') goto LAB_1005550b7;
        QString::operator=(&local_40,pQVar3 + 1);
        local_58 = local_58 + 2;
        uVar6 = local_48 ^ 1;
        bVar10 = local_48 == 1;
        local_48 = uVar6;
        if (bVar10) break;
      }
    } while (local_58 != local_50);
  }
  if (*local_60 != -1) {
    if (*local_60 != 0) {
      LOCK();
      *local_60 = *local_60 + -1;
      UNLOCK();
      local_38 = (int *)CONCAT71(local_38._1_7_,*local_60 != 0);
      if (*local_60 != 0) goto LAB_1005550ff;
    }
    FUN_1001c45d0(&local_60,local_60);
  }
LAB_1005550ff:
  if (*(int *)(local_40.field0_0x0 + 4) != 0) {
    lVar5 = *(long *)(param_1 + 0x60);
    uVar7 = (ulong)*(uint *)(lVar5 + 8);
    uVar9 = 0xffffffff;
    uVar8 = 0;
    if ((int)*(uint *)(lVar5 + 8) < *(int *)(lVar5 + 0xc)) {
      do {
        cVar4 = operator==(&local_40,*(QString **)(lVar5 + 0x10 + ((long)(int)uVar7 + uVar8) * 8));
        if (cVar4 != '\0') {
          uVar9 = uVar8 & 0xffffffff;
          break;
        }
        uVar8 = uVar8 + 1;
        lVar5 = *(long *)(param_1 + 0x60);
        uVar7 = (ulong)*(int *)(lVar5 + 8);
      } while ((long)uVar8 < (long)((long)*(int *)(lVar5 + 0xc) - uVar7));
    }
    FUN_100555230(param_1,uVar9);
    FUN_1005559d0(param_1,uVar9);
  }
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      local_38 = (int *)CONCAT71(local_38._1_7_,*(int *)local_40.field0_0x0 != 0);
      if (*(int *)local_40.field0_0x0 != 0) {
        return;
      }
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return;
}

