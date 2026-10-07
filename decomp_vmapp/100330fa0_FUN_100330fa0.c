
void FUN_100330fa0(long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  int *piVar6;
  uint uVar7;
  undefined4 local_28;
  undefined4 local_24;
  
  iVar4 = *(int *)(param_2 + 0x38);
  iVar1 = iVar4;
  if (iVar4 == 0) {
    iVar1 = *(int *)(param_2 + 0x34);
  }
  piVar6 = &DAT_100b3ab94;
  uVar5 = 0;
  do {
    if (*piVar6 == iVar1) {
      uVar7 = *(uint *)(&DAT_100b3ab90 + uVar5 * 0x24);
      uVar2 = *(undefined4 *)(param_2 + 0x3c);
      uVar3 = *(undefined4 *)(param_2 + 0x40);
      _local_28 = CONCAT44(uVar2,uVar3);
      if ((0x1b < uVar7) || ((0x8000081U >> (uVar7 & 0x1f) & 1) == 0)) goto LAB_100331023;
      goto LAB_10033104b;
    }
    uVar5 = uVar5 + 1;
    piVar6 = piVar6 + 9;
  } while (uVar5 < 0x3d);
  _local_28 = CONCAT44(*(undefined4 *)(param_2 + 0x3c),*(undefined4 *)(param_2 + 0x40));
  uVar7 = 0x8e;
LAB_100331023:
  uVar2 = FUN_10038e740(uVar7,&local_24);
  local_24 = uVar2;
  uVar3 = FUN_10038e740(uVar7,&local_28);
  _local_28 = CONCAT44(local_24,uVar3);
  iVar4 = *(int *)(param_2 + 0x38);
  uVar2 = local_24;
LAB_10033104b:
  FUN_1002fca00(*(undefined8 *)(param_1 + 0x10),param_2 + 4,param_2 + 0x14,uVar2,uVar3,iVar4 == 0);
  return;
}

