
void FUN_1005237f0(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  long local_30;
  long local_28;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == *(long *)(param_1 + 0x28)) {
LAB_1005238bb:
    *param_2 = *(long *)(param_1 + 0x38);
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 0x40);
    FUN_100522c70(param_2,*(char *)(param_1 + 0x44) != '\0');
    plVar2 = *(long **)(param_1 + 0x20);
    if (plVar2 != *(long **)(param_1 + 0x28)) {
      param_2[1] = *plVar2;
      uVar3 = (undefined4)plVar2[1];
      goto LAB_100523917;
    }
    FUN_1007eb930(&local_30);
    local_28 = local_30;
  }
  else {
    uVar7 = (ulong)(*(long *)(param_1 + 0x28) - lVar1) >> 4;
    iVar6 = 0;
    if (1 < (int)uVar7) {
      iVar6 = 1;
      do {
        uVar8 = (int)(iVar6 + (uint)uVar7) / 2;
        iVar5 = uVar8 + 1;
        if (*(long *)(lVar1 + (long)(int)uVar8 * 0x10) <= *param_3) {
          uVar8 = (uint)uVar7;
          iVar6 = iVar5;
        }
        uVar7 = (ulong)uVar8;
      } while (iVar6 < (int)uVar8);
      iVar6 = iVar6 + -1;
    }
    if (iVar6 < 0) goto LAB_1005238bb;
    lVar4 = (long)iVar6 * 0x10;
    if (*param_3 < *(long *)(lVar1 + lVar4)) goto LAB_1005238bb;
    *param_2 = *(long *)(lVar1 + lVar4);
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)(lVar1 + 8 + lVar4);
    FUN_100522c70(param_2,*(char *)(lVar1 + 0xc + lVar4) != '\0');
    lVar1 = *(long *)(param_1 + 0x20);
    if (iVar6 < (int)((ulong)(*(long *)(param_1 + 0x28) - lVar1) >> 4) + -1) {
      lVar4 = (long)(iVar6 + 1) * 0x10;
      param_2[1] = *(long *)(lVar1 + lVar4);
      uVar3 = *(undefined4 *)(lVar1 + 8 + lVar4);
      goto LAB_100523917;
    }
    FUN_1007eb930(&local_28);
  }
  param_2[1] = local_28;
  uVar3 = (undefined4)param_2[2];
LAB_100523917:
  *(undefined4 *)((long)param_2 + 0x14) = uVar3;
  return;
}

