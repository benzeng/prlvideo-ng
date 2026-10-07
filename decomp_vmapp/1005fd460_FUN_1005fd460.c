
uint FUN_1005fd460(undefined8 *param_1,long param_2)

{
  char cVar1;
  uint uVar2;
  ulong in_RAX;
  ulong uVar3;
  undefined8 uStack_28;
  
  uStack_28 = in_RAX;
  uVar2 = FUN_1005fd1f0();
  if ((int)uVar2 < 0) {
    FUN_1008e3970("Backup","vdisk",0,"init failed, err = 0x%X",uVar2);
  }
  else {
    uVar3 = (**(code **)(*(long *)*param_1 + 0x2f8))();
    if ((uVar3 & 2) == 0) {
      FUN_1008e3970("Backup","vdisk",0,"Disk MUST be opened with WRITE flag");
      uVar2 = 0x80021014;
    }
    else {
      uStack_28 = uStack_28 & 0xffffffffffffff;
      uVar2 = FUN_1005fd550(param_1,param_2,(long)&uStack_28 + 7);
      if (-1 < (int)uVar2) {
        cVar1 = (**(code **)(*(long *)*param_1 + 0xd8))();
        if (((cVar1 == '\0') || (uStack_28._7_1_ != '\0')) || ((*(byte *)(param_2 + 0x18) & 1) == 0)
           ) {
          *(undefined1 *)(param_2 + 0x1c) = 1;
        }
        uVar2 = FUN_1005fdb10(param_1,param_2);
        if (-1 < (int)uVar2) {
          uVar2 = FUN_1005fe050(param_1,param_2);
          uVar2 = (int)uVar2 >> 0x1f & uVar2;
        }
      }
    }
  }
  return uVar2;
}

