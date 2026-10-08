
ulong FUN_100b227a0(long *param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  
  lVar2 = param_1[4];
  iVar1 = *(int *)(lVar2 + 8);
  uVar3 = (ulong)*(uint *)(lVar2 + 0x10);
  iVar4 = (int)(param_2 / uVar3);
  lVar2 = *(long *)(lVar2 + 0x18);
  (**(code **)(*param_1 + 0x100))(param_1,param_2,param_2 % uVar3);
  iVar1 = FUN_100b224b0(param_1 + 0x3013,(ulong)(uint)(iVar1 * iVar4) + lVar2 & 0xfffffffffffff000);
  if (iVar1 < 0) {
    FUN_100df99c0("","dimg",0,"Failed for read BAT for image LBA %llu (0x%llx)",param_2,param_2);
    (**(code **)(*param_1 + 0x108))(param_1);
    uVar3 = 0xffffffffffffffff;
  }
  else {
    iVar1 = (**(code **)(param_1[0x3013] + 8))(param_1 + 0x3013);
    lVar2 = (ulong)*(uint *)(param_1[4] + 0xc) *
            (ulong)*(uint *)((ulong)*(uint *)(param_1 + 0x3017) + param_1[0x3014] +
                            (ulong)(uint)(iVar4 - iVar1) * 4);
    uVar3 = -(ulong)(lVar2 == 0) | param_2 % uVar3 + lVar2;
    (**(code **)(*param_1 + 0x108))(param_1);
  }
  return uVar3;
}

