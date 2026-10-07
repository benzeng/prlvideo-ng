
undefined8 FUN_1008a3790(undefined8 param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long local_60;
  undefined1 local_58 [32];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar5 = 0;
  iVar2 = FUN_100880ec0(param_1,"        Subject OCSP hash: ");
  if (0 < iVar2) {
    uVar5 = 0;
    iVar2 = FUN_1008a1170(*(undefined8 *)(*param_2 + 0x28),0);
    lVar3 = FUN_10081ddd0(iVar2,"t_x509.c",0x108);
    local_60 = lVar3;
    if (lVar3 != 0) {
      FUN_1008a1170(*(undefined8 *)(*param_2 + 0x28),&local_60);
      uVar4 = FUN_100891760();
      uVar5 = 0;
      iVar2 = FUN_10088ad10(lVar3,(long)iVar2,local_58,0,uVar4,0);
      if (iVar2 == 0) {
LAB_1008a391b:
        FUN_10081e1a0(lVar3);
      }
      else {
        lVar6 = 0;
        do {
          iVar2 = FUN_100880ec0(param_1,"%02X",local_58[lVar6]);
          if (iVar2 < 1) goto LAB_1008a391b;
          lVar6 = lVar6 + 1;
        } while (lVar6 < 0x14);
        FUN_10081e1a0(lVar3);
        uVar5 = 0;
        iVar2 = FUN_100880ec0(param_1,"\n        Public key OCSP hash: ");
        if (0 < iVar2) {
          piVar1 = *(int **)(*(long *)(*param_2 + 0x30) + 8);
          uVar5 = *(undefined8 *)(piVar1 + 2);
          iVar2 = *piVar1;
          uVar4 = FUN_100891760();
          lVar3 = 0;
          iVar2 = FUN_10088ad10(uVar5,(long)iVar2,local_58,0,uVar4,0);
          uVar5 = 0;
          if (iVar2 != 0) {
            do {
              uVar5 = 0;
              iVar2 = FUN_100880ec0(param_1,"%02X",local_58[lVar3]);
              if (iVar2 < 1) goto LAB_1008a3923;
              lVar3 = lVar3 + 1;
            } while (lVar3 < 0x14);
            FUN_100880ec0(param_1,"\n");
            uVar5 = 1;
          }
        }
      }
    }
  }
LAB_1008a3923:
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}

