
void FUN_1003694e0(long param_1,ulong param_2,int *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  
  uVar3 = 1 << ((byte)param_2 & 0x1f);
  *(uint *)(param_1 + 0x220) = *(uint *)(param_1 + 0x220) | uVar3;
  lVar4 = (param_2 & 0xffffffff) * 0x20;
  if (((((*param_3 != *(int *)(param_1 + 0x10 + lVar4)) ||
        (param_3[1] != *(int *)(param_1 + 0x14 + lVar4))) ||
       (param_3[2] != *(int *)(param_1 + 0x18 + lVar4))) ||
      ((param_3[3] != *(int *)(param_1 + 0x1c + lVar4) ||
       (param_3[4] != *(int *)(param_1 + 0x20 + lVar4))))) ||
     ((param_3[5] != *(int *)(param_1 + 0x24 + lVar4) ||
      ((param_3[6] != *(int *)(param_1 + 0x28 + lVar4) ||
       (param_3[7] != *(int *)(param_1 + 0x2c + lVar4))))))) {
    puVar1 = (undefined8 *)(param_1 + 0x10 + lVar4);
    puVar1[3] = *(undefined8 *)(param_3 + 6);
    puVar1[2] = *(undefined8 *)(param_3 + 4);
    uVar2 = *(undefined8 *)param_3;
    puVar1[1] = *(undefined8 *)(param_3 + 2);
    *puVar1 = uVar2;
    *(uint *)(param_1 + 0x224) = *(uint *)(param_1 + 0x224) | uVar3;
  }
  return;
}

