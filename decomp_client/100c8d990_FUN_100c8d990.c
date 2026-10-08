
undefined8
FUN_100c8d990(undefined8 param_1,long *param_2,long param_3,undefined8 param_4,undefined4 param_5,
             undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  char *pcVar5;
  size_t sVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 local_4e8 [1032];
  undefined1 local_e0 [168];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  if (param_3 != 0) {
    uVar2 = FUN_100c6fb60(param_3);
    lVar4 = FUN_100bf70a0(uVar2);
    if (lVar4 != 0) goto LAB_100c8d9e5;
    uVar7 = 0x71;
    uVar8 = 0x141;
    goto LAB_100c8db71;
  }
LAB_100c8d9e5:
  if (param_2[2] != 0) {
    lVar4 = param_2[7];
    if ((lVar4 != 0) && (lVar1 = param_2[6], 0 < (long)(int)lVar1)) {
      if (param_3 == 0) {
        uVar7 = 0x7f;
        uVar8 = 0x14e;
      }
      else {
        uVar2 = FUN_100c6fb60(param_2[3]);
        pcVar5 = (char *)FUN_100bf70a0(uVar2);
        if (pcVar5 != (char *)0x0) {
          sVar6 = _strlen(pcVar5);
          if (0x400 < sVar6 + 0x24 + (long)*(int *)(param_3 + 0xc) * 2) {
            FUN_100bf2cd0("pem_info.c",0x165,
                          "strlen(objstr) + 23 + 2 * enc->iv_len + 13 <= sizeof buf");
          }
          local_4e8[0] = 0;
          FUN_100c8dcc0(local_4e8,10);
          FUN_100c8dd40(local_4e8,pcVar5,*(undefined4 *)(param_3 + 0xc),param_2 + 4);
          iVar3 = FUN_100c8f540(param_1,"RSA PRIVATE KEY",local_4e8,lVar4,(long)(int)lVar1);
          goto LAB_100c8daee;
        }
        uVar7 = 0x71;
        uVar8 = 0x15f;
      }
LAB_100c8db71:
      FUN_100c62ee0(9,0x75,uVar7,"pem_info.c",uVar8);
      uVar7 = 0;
      goto LAB_100c8db78;
    }
    iVar3 = FUN_100c8ff40(param_1,*(undefined8 *)(*(long *)(param_2[2] + 0x18) + 0x20),param_3,
                          param_4,param_5,param_6,param_7);
LAB_100c8daee:
    uVar7 = 0;
    if (iVar3 < 1) goto LAB_100c8db78;
  }
  if (*param_2 != 0) {
    iVar3 = FUN_100c90b40(param_1);
    uVar7 = 0;
    if (iVar3 < 1) goto LAB_100c8db78;
  }
  uVar7 = 1;
LAB_100c8db78:
  _OPENSSL_cleanse(local_e0,0xa8);
  _OPENSSL_cleanse(local_4e8,0x400);
  if (*(long *)PTR____stack_chk_guard_1021e1840 == local_38) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

