
void FUN_100369040(long param_1,uint param_2,int *param_3,int param_4,char param_5)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  
  if (param_5 != '\0') {
    *(uint *)(param_1 + 0x22c) = *(uint *)(param_1 + 0x22c) | 1 << ((byte)param_2 & 0x1f);
  }
  iVar2 = param_3[6];
  if (iVar2 == 0) {
    param_3[1] = param_3[1] + param_4 * param_3[2];
  }
  uVar4 = 1 << ((byte)param_2 & 0x1f);
  *(uint *)(param_1 + 0x220) = *(uint *)(param_1 + 0x220) | uVar4;
  lVar5 = (ulong)param_2 * 0x20;
  if (((((*param_3 != *(int *)(param_1 + 0x10 + lVar5)) ||
        (param_3[1] != *(int *)(param_1 + 0x14 + lVar5))) ||
       (param_3[2] != *(int *)(param_1 + 0x18 + lVar5))) ||
      ((param_3[3] != *(int *)(param_1 + 0x1c + lVar5) ||
       (param_3[4] != *(int *)(param_1 + 0x20 + lVar5))))) ||
     ((param_3[5] != *(int *)(param_1 + 0x24 + lVar5) ||
      ((iVar2 != *(int *)(param_1 + 0x28 + lVar5) ||
       (param_3[7] != *(int *)(param_1 + 0x2c + lVar5))))))) {
    puVar1 = (undefined8 *)(param_1 + 0x10 + lVar5);
    puVar1[3] = *(undefined8 *)(param_3 + 6);
    puVar1[2] = *(undefined8 *)(param_3 + 4);
    uVar3 = *(undefined8 *)param_3;
    puVar1[1] = *(undefined8 *)(param_3 + 2);
    *puVar1 = uVar3;
    *(uint *)(param_1 + 0x224) = *(uint *)(param_1 + 0x224) | uVar4;
  }
  return;
}

