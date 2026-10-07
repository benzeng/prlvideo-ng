
undefined8 FUN_1003f2b80(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  size_t sVar4;
  long lVar5;
  undefined1 local_28 [20];
  int local_14;
  
  iVar1 = (**(code **)(*(long *)param_1[1] + 0x30))((long *)param_1[1],&local_14,local_28);
  if (iVar1 == 0) {
    if (local_14 == 4) {
      lVar3 = *param_1;
      lVar5 = param_1[0xc];
      uVar2 = 0x23a00;
      goto LAB_1003f2bff;
    }
    if (local_14 == 2) {
      sVar4 = 0x12;
      if ((ulong)*(uint *)(param_1 + 0xd) < 0x12) {
        sVar4 = (ulong)*(uint *)(param_1 + 0xd);
      }
      _memcpy((void *)param_1[0xc],local_28,sVar4);
      return 0xffffffff;
    }
    if (local_14 == 0) {
      uVar2 = (**(code **)(*param_1 + 0x260))(param_1);
      return uVar2;
    }
  }
  lVar3 = *param_1;
  lVar5 = param_1[0xc];
  uVar2 = 0x20400;
LAB_1003f2bff:
  uVar2 = (**(code **)(lVar3 + 0x268))(param_1,uVar2,lVar5);
  return uVar2;
}

