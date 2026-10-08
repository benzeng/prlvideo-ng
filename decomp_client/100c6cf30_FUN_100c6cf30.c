
undefined4 FUN_100c6cf30(undefined8 *param_1,undefined8 param_2,undefined4 param_3,int *param_4)

{
  long lVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined1 local_b0 [52];
  undefined4 local_7c;
  undefined1 local_78 [64];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar1;
  FUN_100c65850(local_b0);
  iVar3 = FUN_100c65d60(local_b0,param_1);
  uVar4 = 0;
  lVar5 = 0;
  if (iVar3 != 0) {
    iVar3 = FUN_100c65bc0(local_b0,local_78,&local_7c);
    uVar4 = 0;
    lVar5 = 0;
    if (iVar3 != 0) {
      FUN_100c65c50(local_b0);
      puVar2 = (undefined4 *)*param_1;
      if ((*(byte *)(puVar2 + 4) & 4) == 0) {
        if ((puVar2[0x14] == 0) ||
           ((iVar3 = *param_4, iVar3 != puVar2[0x14] &&
            ((puVar2[0x15] == 0 ||
             ((iVar3 != puVar2[0x15] &&
              ((puVar2[0x16] == 0 ||
               ((iVar3 != puVar2[0x16] && ((puVar2[0x17] == 0 || (iVar3 != puVar2[0x17])))))))))))))
           ) {
          FUN_100c62ee0(6,0x6c,0x6e,"p_verify.c",0x6a);
          uVar4 = 0xffffffff;
        }
        else if (*(code **)(puVar2 + 0x12) == (code *)0x0) {
          FUN_100c62ee0(6,0x6c,0x69,"p_verify.c",0x6e);
          uVar4 = 0;
        }
        else {
          uVar4 = (**(code **)(puVar2 + 0x12))
                            (*puVar2,local_78,local_7c,param_2,param_3,*(undefined8 *)(param_4 + 8))
          ;
        }
        goto LAB_100c6d0dd;
      }
      lVar5 = FUN_100c71540(param_4,0);
      uVar4 = 0xffffffff;
      if (lVar5 == 0) {
        lVar5 = 0;
      }
      else {
        iVar3 = FUN_100c71f70(lVar5);
        if (0 < iVar3) {
          uVar4 = 0xffffffff;
          iVar3 = FUN_100c71a40(lVar5,0xffffffff,0xf8,1,0,*param_1);
          if (0 < iVar3) {
            uVar4 = FUN_100c71ff0(lVar5,param_2,param_3,local_78,local_7c);
          }
        }
      }
    }
  }
  FUN_100c71960(lVar5);
LAB_100c6d0dd:
  if (lVar1 == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

