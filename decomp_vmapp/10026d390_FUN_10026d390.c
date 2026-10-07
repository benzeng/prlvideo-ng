
void FUN_10026d390(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined4 *local_38;
  
  lVar2 = *(long *)(param_2 + 0x38);
  local_38 = (undefined4 *)0x0;
  lVar1 = param_1 + 0x8d8;
  FUN_100402390(lVar1);
  if ((*(byte *)(lVar2 + 0x15) & 2) == 0) {
    *(undefined4 *)(lVar2 + 0x10) = 0;
    param_1 = param_1 + 0xb0;
    lVar5 = *(long *)(lVar2 + 8);
    while( true ) {
      iVar3 = FUN_10008d820(param_1,lVar5,8,&local_38);
      if (iVar3 == 0) break;
      *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + 1;
      uVar4 = local_38[1] & 0xfffe;
      if ((local_38[1] & 0xfffe) == 0) {
        uVar4 = 0x10000;
      }
      FUN_100402710(lVar1,param_2,*local_38,uVar4);
      if ((int)local_38[1] < 0) {
        FUN_10008d470(param_1);
        goto LAB_10026d4cf;
      }
      lVar5 = *(long *)(lVar2 + 8) + (ulong)*(uint *)(lVar2 + 0x10) * 8;
    }
    FUN_1008e3970("","LocalDevices",0,"Can\'t mmap memory region? @%llx:%x",lVar5,8);
    *(byte *)(param_2 + 0xc0) = *(byte *)(param_2 + 0xc0) | 4;
    *(undefined8 *)(param_2 + 0x88) = 0;
    FUN_10008d470(param_1);
  }
  else {
    *(undefined4 *)(lVar2 + 0x10) = 1;
    FUN_100402710(lVar1,param_2,*(undefined8 *)(lVar2 + 8),*(undefined4 *)(lVar2 + 0x18));
LAB_10026d4cf:
    FUN_100402b80(lVar1,param_2);
    FUN_100402d70(lVar1);
    FUN_100402c40(lVar1,param_2);
  }
  return;
}

