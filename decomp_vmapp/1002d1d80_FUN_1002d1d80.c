
undefined8 FUN_1002d1d80(undefined8 param_1,int *param_2,undefined8 *param_3)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  
  param_3[1] = 0;
  *param_3 = 0;
  param_3[1] = 0xc00001000000;
  iVar1 = *param_2;
  uVar5 = param_2[1];
  bVar4 = (byte)(uVar5 >> 8) & 0x1f;
  bVar2 = (byte)((uint)iVar1 >> 0x10) & 0x1f;
  bVar3 = (byte)uVar5 & 0x1f;
  uVar5 = ~(((iVar1 + 0x49434878U << bVar3 | iVar1 + 0x49434878U >> 0x20 - bVar3) -
            ((uVar5 ^ 0x49434878) << bVar2 | (uVar5 ^ 0x49434878) >> 0x20 - bVar2)) +
           (iVar1 + 0xb6bcb788U >> bVar4 | iVar1 + 0xb6bcb788U << 0x20 - bVar4));
  *(uint *)(param_3 + 1) = uVar5 & 0xffff | 0x1000000;
  *(uint *)((long)param_3 + 0xc) = uVar5 & 0xffff0000 | 0xc000;
  return 0x2c00;
}

