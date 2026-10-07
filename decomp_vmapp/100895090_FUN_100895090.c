
undefined8
FUN_100895090(undefined8 param_1,char *param_2,int param_3,int *param_4,undefined8 param_5,
             undefined8 param_6,undefined4 param_7)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  size_t sVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 local_100;
  undefined1 local_f8 [48];
  undefined1 local_c8 [16];
  undefined1 local_b8 [64];
  undefined1 local_78 [64];
  long local_38;
  
  lVar10 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar10;
  FUN_10088a650(local_f8);
  if (((param_4 == (int *)0x0) || (*param_4 != 0x10)) ||
     (piVar1 = *(int **)(param_4 + 2), piVar1 == (int *)0x0)) {
    FUN_100887ce0(6,0x75,0x72,"p5_crpt.c",0x5d);
    uVar9 = 0;
  }
  else {
    local_100 = *(undefined8 *)(piVar1 + 2);
    uVar9 = 0;
    puVar7 = (undefined8 *)FUN_1008b1280(0,&local_100,(long)*piVar1);
    if (puVar7 == (undefined8 *)0x0) {
      FUN_100887ce0(6,0x75,0x72,"p5_crpt.c",99);
    }
    else {
      iVar3 = 1;
      if (puVar7[1] != 0) {
        iVar3 = FUN_10089b410();
      }
      uVar2 = *(undefined8 *)((int *)*puVar7 + 2);
      iVar6 = *(int *)*puVar7;
      uVar9 = 0;
      iVar5 = 0;
      if ((param_2 != (char *)0x0) && (iVar5 = param_3, param_3 == -1)) {
        sVar8 = _strlen(param_2);
        iVar5 = (int)sVar8;
      }
      iVar4 = FUN_10088a720(local_f8,param_6,0);
      if (iVar4 != 0) {
        iVar5 = FUN_10088a910(local_f8,param_2,(long)iVar5);
        if (iVar5 != 0) {
          iVar6 = FUN_10088a910(local_f8,uVar2,(long)iVar6);
          if (iVar6 != 0) {
            FUN_1008b12e0(puVar7);
            uVar9 = 0;
            iVar6 = FUN_10088a9c0(local_f8,local_78,0);
            if (iVar6 != 0) {
              iVar6 = FUN_1008946d0(param_6);
              uVar9 = 0;
              lVar10 = *(long *)PTR____stack_chk_guard_100ba2320;
              if (iVar6 < 0) goto LAB_1008953df;
              if (1 < iVar3) {
                iVar5 = 1;
                do {
                  uVar9 = 0;
                  iVar4 = FUN_10088a720(local_f8,param_6,0);
                  if (iVar4 == 0) goto LAB_1008953a3;
                  iVar4 = FUN_10088a910(local_f8,local_78,(long)iVar6);
                  if (iVar4 == 0) goto LAB_1008953a3;
                  uVar9 = 0;
                  iVar4 = FUN_10088a9c0(local_f8,local_78,0);
                  if (iVar4 == 0) goto LAB_1008953a3;
                  iVar5 = iVar5 + 1;
                } while (iVar5 < iVar3);
              }
              iVar3 = FUN_100894670(param_5);
              if (0x40 < iVar3) {
                FUN_10081d560("p5_crpt.c",0x87,
                              "EVP_CIPHER_key_length(cipher) <= (int)sizeof(md_tmp)");
              }
              iVar3 = FUN_100894670(param_5);
              ___memcpy_chk(local_b8,local_78,(long)iVar3,0x40);
              iVar3 = FUN_100894660(param_5);
              if (0x10 < iVar3) {
                FUN_10081d560("p5_crpt.c",0x89,"EVP_CIPHER_iv_length(cipher) <= 16");
              }
              iVar3 = FUN_100894660(param_5);
              iVar6 = FUN_100894660(param_5);
              ___memcpy_chk(local_c8,local_78 + (0x10 - iVar3),(long)iVar6,0x10);
              uVar9 = 0;
              iVar3 = FUN_10088af10(param_1,param_5,0,local_b8,local_c8,param_7);
              if (iVar3 != 0) {
                _OPENSSL_cleanse(local_78,0x40);
                _OPENSSL_cleanse(local_b8,0x40);
                _OPENSSL_cleanse(local_c8,0x10);
                uVar9 = 1;
              }
            }
          }
        }
      }
LAB_1008953a3:
      FUN_10088aa50(local_f8);
      lVar10 = *(long *)PTR____stack_chk_guard_100ba2320;
    }
  }
LAB_1008953df:
  if (lVar10 == local_38) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

