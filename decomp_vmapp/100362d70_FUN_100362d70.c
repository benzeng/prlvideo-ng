
void FUN_100362d70(long param_1,long param_2,undefined8 param_3,uint param_4,int param_5)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar4 = (ulong)param_4;
  if (((int)((ulong)(*(long *)(param_2 + 0x48) - *(long *)(param_2 + 0x40)) >> 3) == 0) &&
     ((*(ushort *)(param_2 + 0xb0) & 0x1000) == 0)) {
    FUN_10038d590(*(undefined8 *)(param_2 + 0x58),*(undefined8 *)(param_1 + 0x38),param_3,uVar4,
                  param_5);
  }
  else {
    FUN_10038d780(*(undefined8 *)(param_2 + 0x58),*(undefined8 *)(param_1 + 0x38),param_3,uVar4,
                  param_5);
  }
  if ((*(char *)(param_2 + 0xb4) != '\0') &&
     (lVar1 = *(long *)(param_2 + 0x40), (int)((ulong)(*(long *)(param_2 + 0x48) - lVar1) >> 3) != 0
     )) {
    uVar2 = 0;
    do {
      uVar3 = *(uint *)(&DAT_100b3ca14 + (ulong)*(uint *)(*(long *)(lVar1 + uVar2 * 8) + 0x1c) * 8)
              >> 0x18;
      (**(code **)(**(long **)(param_1 + 0x28) + 0x18))
                (*(long **)(param_1 + 0x28),param_2,uVar4 / uVar3,
                 (ulong)((param_4 - 1) + param_5 + uVar3) / (ulong)uVar3,uVar2 & 0xffffffff);
      lVar1 = *(long *)(param_2 + 0x40);
      uVar2 = uVar2 + 1;
    } while ((uint)uVar2 < (uint)((ulong)(*(long *)(param_2 + 0x48) - lVar1) >> 3));
  }
  *(int *)(param_2 + 0x84) = *(int *)(param_2 + 0x84) + 1;
  FUN_10032f000(param_2 + 0x68,*(undefined8 *)(param_2 + 0x70));
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(long *)(param_2 + 0x68) = param_2 + 0x70;
  *(undefined8 *)(param_2 + 0x70) = 0;
  return;
}

