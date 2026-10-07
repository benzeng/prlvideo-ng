
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100376010(long param_1,undefined8 param_2,uint param_3,undefined4 param_4,
                  undefined8 *param_5)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  undefined8 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  undefined1 auVar9 [16];
  uint local_68;
  int iStack_64;
  int local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined1 local_48 [16];
  
  if (param_3 != 0) {
    if ((*(byte *)(param_5 + 0x17) & 4) == 0) {
      param_3 = *(uint *)(param_5 + 0xe);
    }
    if (param_3 != 0) {
      iVar1 = *(int *)(param_1 + 0x400);
      puVar3 = (uint *)param_5[5];
      uVar2 = *(uint *)*param_5;
      puVar8 = (uint *)param_5[4];
      uVar7 = 0;
      do {
        uVar6 = param_3;
        if ((iVar1 != 0x80000) && (puVar8 != puVar3)) {
          uVar6 = *puVar8;
          if (uVar6 <= uVar7) {
            uVar7 = 0xffffffff;
          }
          iVar5 = FUN_100376860();
          if (iVar5 != -1) {
            local_48 = *(undefined1 (*) [16])(puVar8 + 1);
            if ((uVar2 & 0xfffffe00) == 0xffff0000) {
              auVar9 = minps(local_48,_DAT_100b2ea30);
              local_48 = maxps(auVar9,_DAT_100b3d570);
            }
            (*DAT_1011c6e18)(iVar5,1,local_48);
          }
          puVar8 = puVar8 + 5;
        }
        if ((-1 < (int)uVar7) && (iVar5 = FUN_100376860(), iVar5 != -1)) {
          local_60 = uVar6 - uVar7;
          local_58 = 0;
          local_50 = 0;
          uStack_54 = 0;
          puVar4 = *(undefined8 **)(param_1 + 0x260);
          local_68 = uVar7;
          iStack_64 = iVar5;
          uStack_5c = param_4;
          if (puVar4 == *(undefined8 **)(param_1 + 0x268)) {
            FUN_100376bc0(param_1 + 600,&local_68);
          }
          else {
            *(undefined4 *)(puVar4 + 3) = 0;
            puVar4[2] = 0;
            puVar4[1] = CONCAT44(param_4,local_60);
            *puVar4 = CONCAT44(iVar5,uVar7);
            *(long *)(param_1 + 0x260) = *(long *)(param_1 + 0x260) + 0x1c;
          }
        }
        uVar7 = uVar6 + 1;
      } while (uVar7 < param_3);
    }
  }
  return;
}

