
undefined8 FUN_100c51e90(long param_1,byte *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  lVar3 = FUN_100c27a20();
  if (lVar3 == 0) {
    return 0;
  }
  lVar4 = FUN_100c26720();
  if (lVar4 == 0) {
    FUN_100c27ab0(lVar3);
    return 0;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (*(int *)(puVar1 + 1) == 1) {
    if ((*(long *)*puVar1 == 2) && (*(int *)(puVar1 + 2) == 0)) {
      lVar5 = FUN_100c2b7e0(*(undefined8 *)(param_1 + 8),0x18);
      if (lVar5 != 0xb) {
        *param_2 = *param_2 | 8;
      }
      goto LAB_100c51f03;
    }
    if ((*(long *)*puVar1 == 5) && (*(int *)(puVar1 + 2) == 0)) {
      uVar6 = FUN_100c2b7e0(*(undefined8 *)(param_1 + 8),10);
      if ((uVar6 | 4) != 7) {
        *param_2 = *param_2 | 8;
      }
      goto LAB_100c51f03;
    }
  }
  *param_2 = *param_2 | 4;
LAB_100c51f03:
  uVar7 = 0;
  iVar2 = FUN_100c2e6c0(*(undefined8 *)(param_1 + 8),0,lVar3,0);
  if (iVar2 == 0) {
    *param_2 = *param_2 | 1;
    uVar7 = 1;
  }
  else {
    iVar2 = FUN_100c2b0f0(lVar4,*(undefined8 *)(param_1 + 8));
    if (iVar2 != 0) {
      iVar2 = FUN_100c2e6c0(lVar4,0,lVar3,0);
      uVar7 = 1;
      if (iVar2 == 0) {
        *param_2 = *param_2 | 2;
      }
    }
  }
  FUN_100c27ab0(lVar3);
  if (lVar4 != 0) {
    FUN_100c266b0(lVar4);
  }
  return uVar7;
}

