
undefined8 FUN_1008d5550(long param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  uint *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  uint local_bc;
  undefined8 local_b8;
  long local_b0;
  undefined1 local_a8 [48];
  undefined1 local_78 [64];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar1;
  FUN_10088a650(local_a8);
  iVar4 = FUN_100821ab0(*(undefined8 *)(param_2 + 0x18));
  if (iVar4 != 0x16) {
    iVar4 = FUN_100821ab0(*(undefined8 *)(param_2 + 0x18));
    if (iVar4 != 0x18) {
      uVar7 = 0x72;
      uVar9 = 0x411;
      goto LAB_1008d576b;
    }
  }
  iVar4 = FUN_100821ab0(**(undefined8 **)(param_3 + 0x10));
  if (param_1 != 0) {
    do {
      lVar6 = FUN_10087e1f0(param_1,0x208);
      if (lVar6 == 0) break;
      FUN_10087db60(lVar6,0x78,0,&local_b0);
      if (local_b0 == 0) {
        uVar7 = 0x44;
        uVar9 = 0x421;
        goto LAB_1008d576b;
      }
      uVar7 = FUN_100894720();
      iVar5 = FUN_1008946b0(uVar7);
      if (iVar5 == iVar4) {
LAB_1008d5684:
        iVar5 = FUN_10088ab60(local_a8,local_b0);
        uVar7 = 0;
        if (iVar5 == 0) goto LAB_1008d5773;
        lVar6 = *(long *)(param_3 + 0x18);
        if (lVar6 == 0) {
LAB_1008d5831:
          puVar3 = *(undefined4 **)(param_3 + 0x28);
          lVar6 = FUN_1008b7420(param_4);
          uVar7 = 0xffffffff;
          if (lVar6 == 0) goto LAB_1008d5773;
          iVar4 = FUN_100891b50(local_a8,*(undefined8 *)(puVar3 + 2),*puVar3,lVar6);
          FUN_1008924e0(lVar6);
          uVar7 = 1;
          if (0 < iVar4) goto LAB_1008d5773;
          uVar7 = 0x69;
          uVar9 = 0x471;
        }
        else {
          iVar5 = FUN_100885600(lVar6);
          if (iVar5 == 0) goto LAB_1008d5831;
          local_b8 = 0;
          iVar5 = FUN_10088a9c0(local_a8,local_78,&local_bc);
          uVar7 = 0;
          if (iVar5 == 0) goto LAB_1008d5773;
          lVar8 = FUN_1008d5970(lVar6,0x33);
          if ((lVar8 == 0) || (puVar2 = *(uint **)(lVar8 + 8), puVar2 == (uint *)0x0)) {
            FUN_100887ce0(0x21,0x71,0x6c,"pk7_doit.c",0x442);
            uVar7 = 0;
            goto LAB_1008d5773;
          }
          if (*puVar2 == local_bc) {
            iVar5 = _memcmp(*(void **)(puVar2 + 2),local_78,(ulong)*puVar2);
            if (iVar5 != 0) goto LAB_1008d572e;
            uVar7 = FUN_100821930(iVar4);
            uVar7 = FUN_100890b60(uVar7);
            iVar4 = FUN_10088a720(local_a8,uVar7,0);
            uVar7 = 0;
            if (iVar4 == 0) goto LAB_1008d5773;
            iVar4 = FUN_1008a52d0(lVar6,&local_b8,&DAT_100be5e80);
            if (0 < iVar4) {
              iVar4 = FUN_10088a910(local_a8,local_b8,(long)iVar4);
              uVar7 = 0;
              if (iVar4 != 0) {
                FUN_10081e1a0(local_b8);
                goto LAB_1008d5831;
              }
              goto LAB_1008d5773;
            }
            uVar7 = 0xd;
            uVar9 = 0x45d;
          }
          else {
LAB_1008d572e:
            uVar7 = 0x65;
            uVar9 = 0x452;
          }
        }
        FUN_100887ce0(0x21,0x71,uVar7,"pk7_doit.c",uVar9);
        uVar7 = 0xffffffff;
        goto LAB_1008d5773;
      }
      uVar7 = FUN_100894720(local_b0);
      iVar5 = FUN_1008946c0(uVar7);
      if (iVar5 == iVar4) goto LAB_1008d5684;
      param_1 = FUN_10087e260(lVar6);
    } while (param_1 != 0);
  }
  uVar7 = 0x6c;
  uVar9 = 0x41c;
LAB_1008d576b:
  FUN_100887ce0(0x21,0x71,uVar7,"pk7_doit.c",uVar9);
  uVar7 = 0;
LAB_1008d5773:
  FUN_10088aa50(local_a8);
  if (lVar1 == local_38) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

