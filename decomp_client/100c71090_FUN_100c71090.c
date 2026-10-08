
undefined4
FUN_100c71090(undefined8 param_1,undefined8 param_2,undefined4 param_3,int *param_4,
             undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  size_t len;
  undefined4 local_84;
  undefined8 local_80;
  undefined1 local_78 [64];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  lVar6 = FUN_100c6fba0();
  if (lVar6 == 0) {
    FUN_100c62ee0(6,0xa4,0x83,"p5_crpt2.c",0x105);
    puVar7 = (undefined8 *)0x0;
    len = 0;
    uVar5 = 0;
    goto LAB_100c71275;
  }
  uVar2 = FUN_100c6fc00(param_1);
  len = (size_t)uVar2;
  if (0x40 < uVar2) {
    FUN_100bf2cd0("p5_crpt2.c",0x109,"keylen <= sizeof key");
  }
  if ((param_4 == (int *)0x0) || (*param_4 != 0x10)) {
    FUN_100c62ee0(6,0xa4,0x72,"p5_crpt2.c",0x10e);
    puVar7 = (undefined8 *)0x0;
    uVar5 = 0;
    goto LAB_100c71275;
  }
  local_80 = *(undefined8 *)(*(int **)(param_4 + 2) + 2);
  uVar5 = 0;
  puVar7 = (undefined8 *)FUN_100c8cb30(0,&local_80,(long)**(int **)(param_4 + 2));
  if (puVar7 == (undefined8 *)0x0) {
    FUN_100c62ee0(6,0xa4,0x72,"p5_crpt2.c",0x116);
    puVar7 = (undefined8 *)0x0;
    goto LAB_100c71275;
  }
  uVar2 = FUN_100c6fc00(param_1);
  len = (size_t)uVar2;
  if (puVar7[2] == 0) {
LAB_100c7115d:
    uVar3 = 0xa3;
    if ((undefined8 *)puVar7[3] != (undefined8 *)0x0) {
      uVar3 = FUN_100bf7220(*(undefined8 *)puVar7[3],0xa3);
    }
    uVar5 = 0;
    iVar4 = FUN_100c70320(1,uVar3,0,&local_84,0);
    if (iVar4 == 0) {
      FUN_100c62ee0(6,0xa4,0x7d,"p5_crpt2.c",0x129);
      goto LAB_100c71275;
    }
    uVar8 = FUN_100bf70a0(local_84);
    lVar6 = FUN_100c6bd60(uVar8);
    if (lVar6 == 0) {
      uVar8 = 0x7d;
      uVar9 = 0x12f;
    }
    else {
      if (*(int *)*puVar7 == 4) {
        puVar1 = *(undefined4 **)((int *)*puVar7 + 2);
        uVar8 = *(undefined8 *)(puVar1 + 2);
        uVar5 = *puVar1;
        uVar3 = FUN_100c76990(puVar7[1]);
        iVar4 = FUN_100c709b0(param_2,param_3,uVar8,uVar5,uVar3,lVar6,uVar2,local_78);
        uVar5 = 0;
        if (iVar4 != 0) {
          uVar5 = FUN_100c66110(param_1,0,0,local_78,0,param_7);
        }
        goto LAB_100c71275;
      }
      uVar8 = 0x7e;
      uVar9 = 0x134;
    }
  }
  else {
    lVar6 = FUN_100c76990();
    if (lVar6 == (int)uVar2) goto LAB_100c7115d;
    uVar8 = 0x7b;
    uVar9 = 0x11f;
  }
  FUN_100c62ee0(6,0xa4,uVar8,"p5_crpt2.c",uVar9);
  uVar5 = 0;
LAB_100c71275:
  _OPENSSL_cleanse(local_78,len);
  FUN_100c8cb90(puVar7);
  if (*(long *)PTR____stack_chk_guard_1021e1840 == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

