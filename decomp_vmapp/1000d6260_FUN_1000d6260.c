
uint FUN_1000d6260(long *param_1,uint param_2,long *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  int local_40;
  uint local_3c;
  uint local_38;
  
  uVar4 = 0xffffffff;
  if (param_2 < 0x14) {
    uVar2 = (**(code **)(*param_1 + 0x78))(param_1);
    (**(code **)(*param_1 + 0x88))(param_1,0x40);
    local_38 = 0xffffffff;
    local_40 = -1;
    iVar1 = QIODevice::read((char *)param_1,(longlong)&local_40);
    uVar4 = 0;
    if ((iVar1 == 0x10) && (uVar4 = 0, local_40 == 0x6974704f)) {
      lVar3 = 0x50;
      while (local_3c != param_2) {
        lVar3 = (ulong)(-local_38 & 0xf) + lVar3 + (ulong)local_38;
        (**(code **)(*param_1 + 0x88))(param_1,lVar3);
        iVar1 = QIODevice::read((char *)param_1,(longlong)&local_40);
        uVar4 = 0;
        if ((iVar1 != 0x10) || (lVar3 = lVar3 + 0x10, uVar4 = 0, local_40 != 0x6974704f))
        goto LAB_1000d6351;
      }
      *param_3 = lVar3;
      uVar4 = local_38;
    }
LAB_1000d6351:
    (**(code **)(*param_1 + 0x88))(param_1,uVar2);
  }
  return uVar4;
}

