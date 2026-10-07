
undefined8 FUN_1008b3800(long *param_1,long param_2,ulong *param_3,code *param_4,undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  bool bVar6;
  int local_530;
  int local_52c;
  undefined1 local_528 [1024];
  undefined1 local_128 [72];
  undefined1 local_e0 [168];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_52c = 0;
  uVar4 = 1;
  local_38 = lVar1;
  if (*param_1 != 0) {
    uVar2 = *param_3;
    if (param_4 == (code *)0x0) {
      iVar3 = FUN_1008b2650(local_528,0x400,0,param_5);
    }
    else {
      iVar3 = (*param_4)();
    }
    if (iVar3 < 1) {
      FUN_100887ce0(9,0x6a,0x68,"pem_lib.c",0x1c5);
      uVar4 = 0;
    }
    else {
      lVar5 = *param_1;
      uVar4 = FUN_100891710();
      iVar3 = FUN_10088c1c0(lVar5,uVar4,param_1 + 1,local_528,iVar3,1,local_128,0);
      uVar4 = 0;
      if (iVar3 != 0) {
        local_530 = (int)uVar2;
        FUN_10088ae60(local_e0);
        iVar3 = FUN_10088bc60(local_e0,*param_1,0,local_128,param_1 + 1);
        bVar6 = true;
        if (iVar3 != 0) {
          iVar3 = FUN_10088b630(local_e0,param_2,&local_52c,param_2,uVar2 & 0xffffffff);
          if (iVar3 != 0) {
            iVar3 = FUN_10088b8f0(local_e0,param_2 + local_52c,&local_530);
            bVar6 = iVar3 == 0;
          }
        }
        FUN_10088b320(local_e0);
        _OPENSSL_cleanse(local_528,0x400);
        _OPENSSL_cleanse(local_128,0x40);
        lVar5 = (long)local_530;
        local_530 = (int)(local_52c + lVar5);
        if (bVar6) {
          FUN_100887ce0(9,0x6a,0x65,"pem_lib.c",0x1dd);
          uVar4 = 0;
        }
        else {
          *param_3 = local_52c + lVar5;
          uVar4 = 1;
        }
      }
    }
  }
  if (lVar1 == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

