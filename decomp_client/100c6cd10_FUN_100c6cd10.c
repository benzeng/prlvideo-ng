
undefined4 FUN_100c6cd10(undefined8 *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long local_b8;
  undefined1 local_b0 [52];
  undefined4 local_7c;
  undefined1 local_78 [64];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  *param_3 = 0;
  FUN_100c65850(local_b0);
  iVar2 = FUN_100c65d60(local_b0,param_1);
  lVar6 = 0;
  uVar3 = 0;
  if (iVar2 != 0) {
    iVar2 = FUN_100c65bc0(local_b0,local_78,&local_7c);
    lVar6 = 0;
    uVar3 = 0;
    if (iVar2 != 0) {
      FUN_100c65c50(local_b0);
      puVar1 = (undefined4 *)*param_1;
      if ((*(byte *)(puVar1 + 4) & 4) == 0) {
        if ((puVar1[0x14] == 0) ||
           ((iVar2 = *param_4, iVar2 != puVar1[0x14] &&
            ((puVar1[0x15] == 0 ||
             ((iVar2 != puVar1[0x15] &&
              ((puVar1[0x16] == 0 ||
               ((iVar2 != puVar1[0x16] && ((puVar1[0x17] == 0 || (iVar2 != puVar1[0x17])))))))))))))
           ) {
          uVar4 = 0x6e;
          uVar5 = 0x7b;
        }
        else {
          if (*(code **)(puVar1 + 0x10) != (code *)0x0) {
            uVar3 = (**(code **)(puVar1 + 0x10))
                              (*puVar1,local_78,local_7c,param_2,param_3,
                               *(undefined8 *)(param_4 + 8));
            goto LAB_100c6ced3;
          }
          uVar4 = 0x68;
          uVar5 = 0x80;
        }
        FUN_100c62ee0(6,0x6b,uVar4,"p_sign.c",uVar5);
        uVar3 = 0;
        goto LAB_100c6ced3;
      }
      iVar2 = FUN_100c6d160(param_4);
      local_b8 = (long)iVar2;
      uVar3 = 0;
      lVar6 = FUN_100c71540(param_4,0);
      if (lVar6 == 0) {
        lVar6 = 0;
      }
      else {
        iVar2 = FUN_100c71dd0(lVar6);
        uVar3 = 0;
        if (0 < iVar2) {
          uVar3 = 0;
          iVar2 = FUN_100c71a40(lVar6,0xffffffff,0xf8,1,0,*param_1);
          if (0 < iVar2) {
            iVar2 = FUN_100c71e50(lVar6,param_2,&local_b8,local_78,local_7c);
            if (0 < iVar2) {
              *param_3 = (undefined4)local_b8;
              uVar3 = 1;
            }
          }
        }
      }
    }
  }
  FUN_100c71960(lVar6);
LAB_100c6ced3:
  if (*(long *)PTR____stack_chk_guard_1021e1840 == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

