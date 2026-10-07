
void FUN_100289920(long param_1,long param_2)

{
  ushort uVar1;
  byte bVar2;
  undefined1 uVar3;
  
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined2 *)(param_2 + 10) = 0x50a;
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(*(long *)(param_2 + 0x88) + 8);
  bVar2 = *(byte *)(*(long *)(param_2 + 0x88) + 6);
  uVar1 = 7;
  if (((ulong)bVar2 < 0x40) && ((*(ulong *)(param_1 + 0x10a8) >> ((ulong)bVar2 & 0x3f) & 1) != 0)) {
    if (*(int *)(param_1 + 0x1098) == 1) {
      uVar3 = 1;
      goto LAB_10028999f;
    }
    if (*(int *)(param_1 + 0x1098) == 2) {
      uVar1 = (ushort)*(byte *)(param_1 + 0x108c);
      uVar3 = 0x30;
      bVar2 = 0;
      goto LAB_10028999f;
    }
  }
  bVar2 = 0;
  uVar3 = 0;
LAB_10028999f:
  *(undefined2 *)(param_2 + 0x1e) = 0x10;
  *(undefined2 *)(param_2 + 0x22) = 9;
  *(undefined1 *)(param_2 + 0x1d) = uVar3;
  *(ushort *)(param_2 + 0x20) = uVar1;
  *(byte *)(param_2 + 0xe) = bVar2;
  return;
}

