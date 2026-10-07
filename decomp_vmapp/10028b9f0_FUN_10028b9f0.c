
undefined8 FUN_10028b9f0(long param_1,long param_2,int param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_48;
  long local_40;
  int local_38;
  
  lVar1 = *(long *)(param_2 + 0xe0);
  iVar2 = FUN_100410280(*(long *)(param_2 + 0x88) + 0x18,&local_48,
                        *(undefined4 *)(param_1 + 0x3a3b0));
  uVar3 = 0xffffffff;
  if ((lVar1 != 0) && (iVar2 == 0)) {
    *(undefined4 *)(lVar1 + 0x40) = 0;
    *(undefined4 *)(lVar1 + 0xc0) = 0;
    *(undefined4 *)(lVar1 + 0xc4) = 0;
    *(undefined4 *)(lVar1 + 0x30) = 0;
    *(undefined8 *)(lVar1 + 0x28) = 0;
    *(undefined8 *)(lVar1 + 0x20) = 0;
    *(undefined8 *)(lVar1 + 0x18) = 0;
    if (local_38 == 1) {
      *(undefined4 *)(lVar1 + 0x30) = 1;
    }
    *(undefined8 *)(lVar1 + 0x18) = local_48;
    *(ulong *)(lVar1 + 0x20) = (ulong)*(uint *)(param_1 + 0x3a3b0) * local_40;
    uVar3 = 0;
    if (param_3 == 0) {
      FUN_1004035a0(param_1 + 0x3a148,lVar1,*(undefined8 *)(param_1 + 0x3a110),8000000);
      *(byte *)(lVar1 + 0x31) = *(byte *)(lVar1 + 0x31) | 0x10;
      *(undefined4 *)(param_2 + 0xd4) = 1;
    }
  }
  return uVar3;
}

