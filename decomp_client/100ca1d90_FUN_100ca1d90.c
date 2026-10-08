
undefined4 * FUN_100ca1d90(undefined8 param_1,int *param_2,char *param_3)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 local_84;
  undefined4 local_80 [2];
  undefined1 local_78 [72];
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_30 = lVar1;
  iVar3 = _strcmp(param_3,"hash");
  if (iVar3 == 0) {
    puVar4 = (undefined4 *)FUN_100c8b370(4);
    if (puVar4 != (undefined4 *)0x0) {
      if (param_2 == (int *)0x0) {
LAB_100ca1ef1:
        uVar8 = 0x72;
        uVar7 = 0x7a;
      }
      else {
        if (*param_2 == 1) goto LAB_100ca1f3b;
        if (*(long **)(param_2 + 6) == (long *)0x0) {
          if (*(long **)(param_2 + 4) == (long *)0x0) goto LAB_100ca1ef1;
          plVar6 = (long *)(**(long **)(param_2 + 4) + 0x30);
        }
        else {
          plVar6 = (long *)(**(long **)(param_2 + 6) + 0x28);
        }
        piVar2 = *(int **)(*plVar6 + 8);
        if (piVar2 == (int *)0x0) {
          uVar8 = 0x72;
          uVar7 = 0x84;
        }
        else {
          uVar8 = *(undefined8 *)(piVar2 + 2);
          iVar3 = *piVar2;
          uVar7 = FUN_100c6ca00();
          iVar3 = FUN_100c65f10(uVar8,(long)iVar3,local_78,&local_84,uVar7,0);
          if (iVar3 == 0) goto LAB_100ca1f30;
          iVar3 = FUN_100c8b0b0(puVar4,local_78,local_84);
          if (iVar3 != 0) goto LAB_100ca1f3b;
          uVar8 = 0x41;
          uVar7 = 0x8d;
        }
      }
      FUN_100c62ee0(0x22,0x73,uVar8,"v3_skey.c",uVar7);
      goto LAB_100ca1f30;
    }
    FUN_100c62ee0(0x22,0x73,0x41,"v3_skey.c",0x72);
  }
  else {
    puVar4 = (undefined4 *)FUN_100c8b370(4);
    if (puVar4 == (undefined4 *)0x0) {
      FUN_100c62ee0(0x22,0x70,0x41,"v3_skey.c",0x57);
    }
    else {
      lVar5 = FUN_100c9fc70(param_3,local_80);
      *(long *)(puVar4 + 2) = lVar5;
      if (lVar5 != 0) {
        *puVar4 = local_80[0];
        goto LAB_100ca1f3b;
      }
LAB_100ca1f30:
      FUN_100c8b2f0(puVar4);
    }
  }
  puVar4 = (undefined4 *)0x0;
LAB_100ca1f3b:
  if (lVar1 == local_30) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

