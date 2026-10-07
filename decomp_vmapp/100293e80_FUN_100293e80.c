
undefined8 FUN_100293e80(long param_1,byte param_2)

{
  undefined4 *puVar1;
  ushort uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = *(ushort *)(param_1 + 0xff0);
  lVar3 = (ulong)*(ushort *)(param_1 + 0xfee) * 0x300 + *(long *)(param_1 + 0x1000);
  lVar4 = (ulong)uVar2 * 0x80;
  puVar1 = (undefined4 *)(lVar4 + 0x4690 + lVar3);
  *(uint *)(lVar4 + 0x4694 + lVar3) = (uint)param_2;
  if (param_2 == 0) {
    *puVar1 = 0;
  }
  else {
    FUN_1003fb1f0(puVar1,(char)uVar2,1);
  }
  return 0;
}

