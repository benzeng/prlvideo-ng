
undefined4
FUN_1008d67d0(undefined8 param_1,undefined8 param_2,undefined4 param_3,int *param_4,long param_5,
             undefined8 param_6,undefined4 param_7)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [64];
  long local_38;
  
  lVar5 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar2 = 0;
  local_38 = lVar5;
  uVar8 = 0;
  if (param_5 == 0) goto LAB_1008d6999;
  if (((param_4 == (int *)0x0) || (*param_4 != 0x10)) ||
     (piVar1 = *(int **)(param_4 + 2), piVar1 == (int *)0x0)) {
    FUN_100887ce0(0x23,0x78,0x65,"p12_crpt.c",0x56);
  }
  else {
    local_90 = *(undefined8 *)(piVar1 + 2);
    uVar2 = 0;
    puVar4 = (undefined8 *)FUN_1008b1280(0,&local_90,(long)*piVar1);
    if (puVar4 == (undefined8 *)0x0) {
      FUN_100887ce0(0x23,0x78,0x65,"p12_crpt.c",0x5c);
    }
    else {
      local_98 = 1;
      if (puVar4[1] != 0) {
        local_98 = FUN_10089b410();
      }
      uVar6 = *(undefined8 *)((undefined4 *)*puVar4 + 2);
      uVar8 = *(undefined4 *)*puVar4;
      uVar2 = FUN_100894670(param_5);
      iVar3 = FUN_1008d6e10(param_2,param_3,uVar6,uVar8,1,local_98,uVar2,local_78,param_6);
      if (iVar3 == 0) {
        uVar6 = 0x6b;
        uVar7 = 0x68;
      }
      else {
        uVar2 = FUN_100894660(param_5);
        iVar3 = FUN_1008d6e10(param_2,param_3,uVar6,uVar8,2,local_98,uVar2,local_88,param_6);
        if (iVar3 != 0) {
          FUN_1008b12e0(puVar4);
          uVar2 = FUN_10088af10(param_1,param_5,0,local_78,local_88,param_7);
          _OPENSSL_cleanse(local_78,0x40);
          _OPENSSL_cleanse(local_88,0x10);
          goto LAB_1008d698f;
        }
        uVar6 = 0x6a;
        uVar7 = 0x6e;
      }
      FUN_100887ce0(0x23,0x78,uVar6,"p12_crpt.c",uVar7);
      FUN_1008b12e0(puVar4);
      uVar2 = 0;
    }
  }
LAB_1008d698f:
  lVar5 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar8 = uVar2;
LAB_1008d6999:
  if (lVar5 == local_38) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

