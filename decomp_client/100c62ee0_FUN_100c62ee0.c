
void FUN_100c62ee0(int param_1,int param_2,ulong param_3,undefined8 param_4,undefined4 param_5)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_100c63000();
  iVar1 = *(int *)(lVar2 + 0x250);
  iVar1 = (iVar1 + 1) - (iVar1 + 1 + ((uint)(iVar1 + 1 >> 0x1f) >> 0x1c) & 0xfffffff0);
  *(int *)(lVar2 + 0x250) = iVar1;
  if (iVar1 == *(int *)(lVar2 + 0x254)) {
    *(uint *)(lVar2 + 0x254) =
         (iVar1 + 1) - (iVar1 + 1 + ((uint)(iVar1 + 1 >> 0x1f) >> 0x1c) & 0xfffffff0);
  }
  *(undefined4 *)(lVar2 + 0x10 + (long)iVar1 * 4) = 0;
  *(ulong *)(lVar2 + 0x50 + (long)*(int *)(lVar2 + 0x250) * 8) =
       param_3 & 0xfff | (ulong)(uint)(param_2 << 0xc) & 0xfff000 | (ulong)(uint)(param_1 << 0x18);
  *(undefined8 *)(lVar2 + 400 + (long)*(int *)(lVar2 + 0x250) * 8) = param_4;
  *(undefined4 *)(lVar2 + 0x210 + (long)*(int *)(lVar2 + 0x250) * 4) = param_5;
  iVar1 = *(int *)(lVar2 + 0x250);
  if ((*(long *)(lVar2 + 0xd0 + (long)iVar1 * 8) != 0) &&
     ((*(byte *)(lVar2 + 0x150 + (long)iVar1 * 4) & 1) != 0)) {
    FUN_100bf3910();
    *(undefined8 *)(lVar2 + 0xd0 + (long)*(int *)(lVar2 + 0x250) * 8) = 0;
    iVar1 = *(int *)(lVar2 + 0x250);
  }
  *(undefined4 *)(lVar2 + 0x150 + (long)iVar1 * 4) = 0;
  return;
}

