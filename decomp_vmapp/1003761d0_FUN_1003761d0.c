
void FUN_1003761d0(long param_1,undefined8 param_2,int param_3,undefined4 param_4,long param_5)

{
  uint uVar1;
  uint *puVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint local_50;
  int iStack_4c;
  int local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  
  if ((param_3 != 0) && (uVar1 = *(uint *)(param_5 + 0x84), uVar1 != 0)) {
    puVar2 = *(uint **)(param_5 + 0x40);
    uVar6 = 0;
    puVar7 = *(uint **)(param_5 + 0x38);
    do {
      puVar8 = puVar2;
      uVar5 = uVar1;
      if (puVar7 != puVar2) {
        uVar5 = *puVar7;
        if (uVar5 <= uVar6) {
          uVar6 = 0xffffffff;
        }
        iVar4 = FUN_100376860();
        if (iVar4 != -1) {
          (*DAT_1011c6e38)(iVar4,1,puVar7 + 1);
        }
        puVar8 = puVar7 + 5;
      }
      if ((-1 < (int)uVar6) && (iVar4 = FUN_100376860(), iVar4 != -1)) {
        local_48 = uVar5 - uVar6;
        local_40 = 0;
        local_38 = 0;
        uStack_3c = 0;
        puVar3 = *(undefined8 **)(param_1 + 0x260);
        local_50 = uVar6;
        iStack_4c = iVar4;
        uStack_44 = param_4;
        if (puVar3 == *(undefined8 **)(param_1 + 0x268)) {
          FUN_100376bc0(param_1 + 600,&local_50);
        }
        else {
          *(undefined4 *)(puVar3 + 3) = 0;
          puVar3[2] = 0;
          puVar3[1] = CONCAT44(param_4,local_48);
          *puVar3 = CONCAT44(iVar4,uVar6);
          *(long *)(param_1 + 0x260) = *(long *)(param_1 + 0x260) + 0x1c;
        }
      }
      uVar6 = uVar5 + 1;
      puVar7 = puVar8;
    } while (uVar6 < uVar1);
  }
  return;
}

