
void FUN_100389700(float param_1,long *param_2,long param_3,int *param_4,ulong param_5,int param_6,
                  undefined4 param_7,char param_8,char param_9,undefined1 param_10)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  uint local_3c;
  
  param_5 = param_5 & 0xffffffff;
  lVar5 = 0;
  if (*(long **)(param_3 + 0x48) != *(long **)(param_3 + 0x40)) {
    lVar5 = **(long **)(param_3 + 0x40);
  }
  if (param_4 == (int *)0x0) {
    (*DAT_1011c5bc0)(0xc11);
  }
  else {
    (*DAT_1011c5c78)(0xc11);
    iVar2 = *param_4;
    iVar3 = param_4[1];
    if (*(uint *)(DAT_1011c8478 + 0x1c) < 2) {
      (*DAT_1011c69c8)(iVar2,iVar3,param_4[2] - iVar2,param_4[3] - iVar3);
    }
    else {
      (*DAT_1011c7e78)(0,iVar2,iVar3,param_4[2] - iVar2,param_4[3] - iVar3);
    }
  }
  local_3c = 0;
  if (param_8 != '\0') {
    (*DAT_1011c5848)((double)param_1);
    (*DAT_1011c5ba0)(1);
    local_3c = 0x100;
  }
  if (param_9 != '\0') {
    (*DAT_1011c5858)(param_10);
    (*DAT_1011c6b18)(0xffffffff);
    local_3c = local_3c | 0x400;
  }
  (*DAT_1011c5738)(0x8d40,(int)param_2[4]);
  if (param_6 != 0) {
    uVar6 = 1 << ((byte)param_7 & 0x1f);
    do {
      (**(code **)(*param_2 + 0x38))(param_2,lVar5,param_5,param_7);
      (*DAT_1011c5820)(local_3c);
      uVar4 = 0;
      if (*(int *)(param_3 + 0x24) != 5) {
        uVar4 = param_5;
      }
      puVar1 = (uint *)(*(long *)(lVar5 + 0x88) + uVar4 * 4);
      *puVar1 = *puVar1 | uVar6;
      puVar1 = (uint *)(*(long *)(param_3 + 0x90) + uVar4 * 4);
      *puVar1 = *puVar1 & ~uVar6;
      param_5 = (ulong)((int)param_5 + 1);
      param_6 = param_6 + -1;
    } while (param_6 != 0);
  }
  *(undefined1 *)(param_3 + 0xd0) = 0;
  return;
}

