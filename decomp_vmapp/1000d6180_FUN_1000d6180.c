
int FUN_1000d6180(long *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 local_70 [8];
  int local_68 [16];
  
  local_68[1] = 0xffffffff;
  local_68[2] = 0xffffffff;
  local_68[0] = -1;
  iVar3 = 0;
  (**(code **)(*param_1 + 0x88))(param_1,0);
  QIODevice::read((char *)param_1,(longlong)local_68);
  if (local_68[0] == 0x65526153) {
    iVar3 = 0x40;
    iVar2 = 1;
    do {
      uVar1 = FUN_1000d6260(param_1,iVar2,local_70);
      if (0 < (int)uVar1) {
        iVar3 = (iVar3 + 0x20 + uVar1) - (uVar1 & 0xf);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != 0x14);
  }
  return iVar3;
}

