
void FUN_1003f35e0(long *param_1)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  size_t sVar4;
  undefined1 local_30 [20];
  int local_1c;
  
  if (((*(byte *)((long)param_1 + 0x6c) & 2) != 0) ||
     (uVar2 = *(uint *)(param_1 + 0x19), uVar2 == 0xffffffff)) {
    uVar2 = (uint)CONCAT11((char)*(undefined2 *)(param_1[0xb] + 7),
                           (char)((ushort)*(undefined2 *)(param_1[0xb] + 7) >> 8));
  }
  uVar1 = *(undefined2 *)(param_1[0xb] + 2);
  iVar3 = (**(code **)(*(long *)param_1[1] + 0x40))
                    ((long *)param_1[1],*(byte *)(param_1[0xb] + 1) & 3,
                     CONCAT11((char)uVar1,(char)((ushort)uVar1 >> 8)),param_1[9],uVar2 & 0xffff,
                     &local_1c,local_30);
  if (iVar3 == 0) {
    if (local_1c == 2) {
      sVar4 = 0x12;
      if ((ulong)*(uint *)(param_1 + 0xd) < 0x12) {
        sVar4 = (ulong)*(uint *)(param_1 + 0xd);
      }
      _memcpy((void *)param_1[0xc],local_30,sVar4);
      goto LAB_1003f36a2;
    }
    if (local_1c != 0) goto LAB_1003f3688;
    iVar3 = (**(code **)(*param_1 + 0x278))(param_1,uVar2 & 0xffff,(int)param_1[0x19]);
  }
  else {
LAB_1003f3688:
    iVar3 = (**(code **)(*param_1 + 0x268))(param_1,0x52400,param_1[0xc]);
  }
  if (iVar3 != -1) {
    return;
  }
LAB_1003f36a2:
  (**(code **)(*param_1 + 0x278))(param_1,uVar2 & 0xffff,uVar2 & 0xffff);
  return;
}

