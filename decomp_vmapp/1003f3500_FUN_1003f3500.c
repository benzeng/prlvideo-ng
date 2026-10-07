
undefined8 FUN_1003f3500(long *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  size_t sVar6;
  undefined1 local_30 [20];
  int local_1c;
  
  uVar1 = *(uint *)(param_1[0xb] + 2);
  if (((*(byte *)((long)param_1 + 0x6c) & 2) != 0) ||
     (uVar3 = *(uint *)(param_1 + 0x19), uVar2 = uVar3, uVar3 == 0xffffffff)) {
    uVar2 = (uint)CONCAT11((char)*(undefined2 *)(param_1[0xb] + 7),
                           (char)((ushort)*(undefined2 *)(param_1[0xb] + 7) >> 8));
    uVar3 = *(uint *)(param_1 + 0x19);
  }
  iVar4 = (**(code **)(*(long *)param_1[1] + 0x78))
                    ((long *)param_1[1],*(byte *)(param_1[0xb] + 1) & 3,
                     uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8,param_1[9],uVar3 & 0xffff,&local_1c,
                     local_30);
  if (iVar4 == 0) {
    if (local_1c == 2) {
      sVar6 = 0x12;
      if ((ulong)*(uint *)(param_1 + 0xd) < 0x12) {
        sVar6 = (ulong)*(uint *)(param_1 + 0xd);
      }
      _memcpy((void *)param_1[0xc],local_30,sVar6);
      return 0xffffffff;
    }
    if (local_1c == 0) {
      uVar5 = (**(code **)(*param_1 + 0x278))(param_1,uVar2 & 0xffff,(int)param_1[0x19]);
      return uVar5;
    }
  }
  uVar5 = (**(code **)(*param_1 + 0x268))(param_1,0x52400,param_1[0xc]);
  return uVar5;
}

