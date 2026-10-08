
undefined8 FUN_100c51630(long param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  uint local_34;
  
  lVar3 = FUN_100c27a20();
  bVar1 = false;
  lVar9 = 0;
  puVar10 = (undefined8 *)0x0;
  if (lVar3 != 0) {
    puVar4 = *(undefined8 **)(param_1 + 0x28);
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)FUN_100c26720();
      lVar9 = 0;
      puVar10 = (undefined8 *)0x0;
      if (puVar4 == (undefined8 *)0x0) goto LAB_100c517c6;
      bVar1 = true;
    }
    lVar9 = *(long *)(param_1 + 0x20);
    puVar10 = puVar4;
    if ((lVar9 == 0) && (lVar9 = FUN_100c26720(), lVar9 == 0)) {
      lVar9 = 0;
    }
    else {
      lVar5 = 0;
      if (((*(byte *)(param_1 + 0x30) & 1) == 0) ||
         (lVar5 = FUN_100c33470(param_1 + 0x38,0x1a,*(undefined8 *)(param_1 + 8),lVar3), lVar5 != 0)
         ) {
        if (bVar1) {
          lVar8 = *(long *)(param_1 + 0x40);
          if (lVar8 == 0) {
            lVar8 = *(long *)(param_1 + 0x18);
            if (lVar8 == 0) {
              iVar2 = FUN_100c26610(*(undefined8 *)(param_1 + 8));
              lVar8 = (long)(iVar2 + -1);
            }
            iVar2 = FUN_100c2aa90(puVar4,lVar8,0,0);
            if (iVar2 != 0) goto LAB_100c51742;
          }
          else {
            while (iVar2 = FUN_100c2ad60(puVar4,lVar8), iVar2 != 0) {
              if ((*(int *)(puVar4 + 1) != 0) &&
                 (((*(int *)(puVar4 + 1) != 1 || (*(long *)*puVar4 != 1)) ||
                  (*(int *)(puVar4 + 2) != 0)))) goto LAB_100c51742;
              lVar8 = *(long *)(param_1 + 0x40);
            }
          }
        }
        else {
LAB_100c51742:
          puVar6 = puVar4;
          if ((*(byte *)(param_1 + 0x30) & 2) == 0) {
            puVar6 = &local_48;
            FUN_100c26700(puVar6);
            local_48 = *puVar4;
            local_40 = *(undefined4 *)(puVar4 + 1);
            local_3c = *(undefined4 *)((long)puVar4 + 0xc);
            local_38 = *(undefined4 *)(puVar4 + 2);
            local_34 = *(uint *)((long)puVar4 + 0x14) & 0xfffffff8 | local_34 & 1 | 6;
          }
          iVar2 = (**(code **)(*(long *)(param_1 + 0x80) + 0x18))
                            (param_1,lVar9,*(undefined8 *)(param_1 + 0x10),puVar6,
                             *(undefined8 *)(param_1 + 8),lVar3,lVar5);
          if (iVar2 != 0) {
            *(long *)(param_1 + 0x20) = lVar9;
            *(undefined8 **)(param_1 + 0x28) = puVar4;
            uVar7 = 1;
            goto LAB_100c517e9;
          }
        }
      }
    }
  }
LAB_100c517c6:
  FUN_100c62ee0(5,0x67,3,"dh_key.c",0xb8);
  uVar7 = 0;
  puVar4 = puVar10;
LAB_100c517e9:
  if ((lVar9 != 0) && (*(long *)(param_1 + 0x20) == 0)) {
    FUN_100c266b0(lVar9);
  }
  if ((puVar4 != (undefined8 *)0x0) && (*(long *)(param_1 + 0x28) == 0)) {
    FUN_100c266b0(puVar4);
  }
  FUN_100c27ab0(lVar3);
  return uVar7;
}

