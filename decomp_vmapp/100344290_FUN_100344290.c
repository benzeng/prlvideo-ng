
void FUN_100344290(long param_1,uint param_2,int *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (ulong)param_2 * 0x10;
  if ((((*(int *)(param_1 + 0x518 + lVar3) != *param_3) ||
       (*(int *)(param_1 + 0x51c + lVar3) != param_3[1])) ||
      (*(int *)(param_1 + 0x520 + lVar3) != param_3[2])) ||
     (*(int *)(param_1 + 0x524 + lVar3) != param_3[3])) {
    puVar1 = (undefined8 *)(param_1 + 0x518 + lVar3);
    uVar2 = *(undefined8 *)param_3;
    puVar1[1] = *(undefined8 *)(param_3 + 2);
    *puVar1 = uVar2;
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1 << ((byte)param_2 & 0x1f);
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 0x80;
  }
  return;
}

