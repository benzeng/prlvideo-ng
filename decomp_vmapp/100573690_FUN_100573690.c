
void FUN_100573690(long *param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  lVar4 = param_1[0x22a];
  uVar3 = 0;
  if (param_1[1] != 0) {
    uVar3 = *(undefined8 *)(param_1[1] + 0x10);
  }
  iVar1 = FUN_1005b6d20(uVar3);
  if (iVar1 == 0) {
    uVar2 = (**(code **)(*param_1 + 0x388))(param_1);
    lVar4 = lVar4 - (ulong)uVar2;
  }
  FUN_1006849d0(lVar4,&local_28);
  *(undefined4 *)((long)param_1 + 0x114c) = local_24;
  *(undefined4 *)((long)param_1 + 0x1144) = local_20;
  *(undefined4 *)(param_1 + 0x229) = local_28;
  (**(code **)(**(long **)(param_1[1] + 0x10) + 0x178))(*(long **)(param_1[1] + 0x10),lVar4);
  iVar1 = FUN_1005aad70(param_1 + 2);
  if (iVar1 < 0) {
    FUN_1008e3970("","vdisk",0,"Error reinitializing groups 0x%x",iVar1);
  }
  return;
}

