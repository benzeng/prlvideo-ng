
void FUN_10035e790(undefined8 param_1,long param_2,uint *param_3,undefined4 param_4)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint local_48 [6];
  
  puVar6 = local_48;
  if (param_3 == (uint *)0x0) {
    puVar6 = (uint *)0x0;
  }
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[2] = 0;
  local_48[3] = 0;
  local_48[4] = 0;
  local_48[5] = 0;
  if (*(int *)(param_2 + 0x1c) != 0) {
    uVar8 = 0;
    do {
      if (param_3 != (uint *)0x0) {
        bVar2 = (byte)uVar8;
        iVar4 = 1 << (bVar2 & 0x1f);
        iVar1 = iVar4 + -1;
        uVar5 = (param_3[2] - 1) + iVar4 >> (bVar2 & 0x1f);
        uVar7 = *param_3 >> (bVar2 & 0x1f);
        *puVar6 = uVar7;
        uVar3 = uVar7 + 1;
        if (uVar5 != uVar7) {
          uVar3 = uVar5;
        }
        puVar6[2] = uVar3;
        uVar5 = param_3[3] + iVar1 >> (bVar2 & 0x1f);
        uVar7 = param_3[1] >> (bVar2 & 0x1f);
        puVar6[1] = uVar7;
        uVar3 = uVar7 + 1;
        if (uVar5 != uVar7) {
          uVar3 = uVar5;
        }
        puVar6[3] = uVar3;
        uVar5 = iVar1 + param_3[5] >> (bVar2 & 0x1f);
        uVar7 = param_3[4] >> (bVar2 & 0x1f);
        puVar6[4] = uVar7;
        uVar3 = uVar7 + 1;
        if (uVar5 != uVar7) {
          uVar3 = uVar5;
        }
        puVar6[5] = uVar3;
      }
      FUN_10035e0e0(param_1,param_2,puVar6,param_4,uVar8);
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)(param_2 + 0x1c));
  }
  return;
}

