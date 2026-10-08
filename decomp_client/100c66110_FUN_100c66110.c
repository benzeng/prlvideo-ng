
undefined8
FUN_100c66110(long *param_1,int *param_2,long param_3,long param_4,long *param_5,int param_6)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  
  uVar9 = 0;
  if (param_6 == 0) {
LAB_100c66144:
    *(undefined4 *)(param_1 + 2) = uVar9;
  }
  else {
    if (param_6 != -1) {
      uVar9 = 1;
      goto LAB_100c66144;
    }
    uVar9 = (undefined4)param_1[2];
  }
  piVar4 = (int *)*param_1;
  piVar1 = piVar4;
  if ((param_1[1] == 0) || (piVar1 = (int *)0x0, piVar4 == (int *)0x0)) {
    piVar4 = piVar1;
    if (param_2 != (int *)0x0) {
      if (piVar4 != (int *)0x0) goto LAB_100c66190;
      goto LAB_100c661ec;
    }
    if (piVar4 == (int *)0x0) {
      uVar6 = 0x83;
      uVar8 = 0xc2;
      goto LAB_100c66480;
    }
  }
  else if ((param_2 != (int *)0x0) && (*param_2 != *piVar4)) {
LAB_100c66190:
    lVar3 = param_1[0xe];
    if ((*(code **)(piVar4 + 10) == (code *)0x0) ||
       (iVar2 = (**(code **)(piVar4 + 10))(param_1), iVar2 != 0)) {
      if (((void *)param_1[0xf] != (void *)0x0) &&
         (_OPENSSL_cleanse((void *)param_1[0xf],(long)*(int *)(*param_1 + 0x30)), param_1[0xf] != 0)
         ) {
        FUN_100bf3910();
      }
      if (param_1[1] != 0) {
        FUN_100c557e0();
      }
      ___bzero(param_1,0xa8);
    }
    *(undefined4 *)(param_1 + 2) = uVar9;
    param_1[0xe] = lVar3;
LAB_100c661ec:
    if (param_3 == 0) {
      param_3 = FUN_100c574e0(*param_2);
      lVar3 = 0;
      if (param_3 != 0) goto LAB_100c6625c;
    }
    else {
      iVar2 = FUN_100c55720(param_3);
      if (iVar2 == 0) {
        uVar6 = 0x86;
        uVar8 = 0x8e;
        goto LAB_100c66480;
      }
LAB_100c6625c:
      param_2 = (int *)FUN_100c57500(param_3,*param_2);
      lVar3 = param_3;
      if (param_2 == (int *)0x0) {
        uVar6 = 0x86;
        uVar8 = 0x9d;
        goto LAB_100c66480;
      }
    }
    param_1[1] = lVar3;
    *param_1 = (long)param_2;
    if (param_2[0xc] == 0) {
      param_1[0xf] = 0;
      piVar4 = param_2;
    }
    else {
      lVar3 = FUN_100bf3540(param_2[0xc],"evp_enc.c",0xb1);
      param_1[0xf] = lVar3;
      if (lVar3 == 0) {
        uVar6 = 0x41;
        uVar8 = 0xb3;
        goto LAB_100c66480;
      }
      piVar4 = (int *)*param_1;
    }
    *(int *)(param_1 + 0xd) = param_2[2];
    param_1[0xe] = 0;
    if ((*(byte *)(piVar4 + 4) & 0x40) != 0) {
      if (piVar4 == (int *)0x0) {
        uVar6 = 0x83;
        uVar8 = 0x255;
LAB_100c6645f:
        FUN_100c62ee0(6,0x7c,uVar6,"evp_enc.c",uVar8);
      }
      else {
        if (*(code **)(piVar4 + 0x12) == (code *)0x0) {
          uVar6 = 0x84;
          uVar8 = 0x25a;
          goto LAB_100c6645f;
        }
        iVar2 = (**(code **)(piVar4 + 0x12))(param_1,0,0,0);
        if (iVar2 != 0) {
          if (iVar2 != -1) goto LAB_100c66333;
          uVar6 = 0x85;
          uVar8 = 0x261;
          goto LAB_100c6645f;
        }
      }
      uVar6 = 0x86;
      uVar8 = 0xbd;
LAB_100c66480:
      FUN_100c62ee0(6,0x7b,uVar6,"evp_enc.c",uVar8);
      return 0;
    }
  }
LAB_100c66333:
  if ((0x10 < *(uint *)(*param_1 + 4)) || ((0x10102U >> (*(uint *)(*param_1 + 4) & 0x1f) & 1) == 0))
  {
    FUN_100bf2cd0("evp_enc.c",0xcf,
                  "ctx->cipher->block_size == 1 || ctx->cipher->block_size == 8 || ctx->cipher->block_size == 16"
                 );
  }
  uVar5 = FUN_100c6f890(param_1);
  if ((uVar5 & 0x10) == 0) {
    uVar5 = FUN_100c6f890(param_1);
    uVar6 = 0;
    switch(uVar5 & 0xf0007) {
    case 0:
    case 1:
      goto switchD_100c663a0_caseD_0;
    case 3:
    case 4:
      *(undefined4 *)(param_1 + 0xb) = 0;
    case 2:
      iVar2 = FUN_100c6fa50(param_1);
      if (0x10 < iVar2) {
        FUN_100bf2cd0("evp_enc.c",0xe1,"EVP_CIPHER_CTX_iv_length(ctx) <= (int)sizeof(ctx->iv)");
      }
      plVar7 = param_1 + 3;
      if (param_5 != (long *)0x0) {
        iVar2 = FUN_100c6fa50(param_1);
        _memcpy(plVar7,param_5,(long)iVar2);
      }
      iVar2 = FUN_100c6fa50(param_1);
      break;
    case 5:
      *(undefined4 *)(param_1 + 0xb) = 0;
      if (param_5 == (long *)0x0) goto switchD_100c663a0_caseD_0;
      iVar2 = FUN_100c6fa50(param_1);
      plVar7 = param_5;
      break;
    default:
      goto switchD_100c663a0_default;
    }
    _memcpy(param_1 + 5,plVar7,(long)iVar2);
  }
switchD_100c663a0_caseD_0:
  lVar3 = *param_1;
  if ((param_4 != 0) || ((*(byte *)(lVar3 + 0x10) & 0x20) != 0)) {
    iVar2 = (**(code **)(lVar3 + 0x18))(param_1,param_4,param_5,uVar9);
    if (iVar2 == 0) {
      return 0;
    }
    lVar3 = *param_1;
  }
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(int *)((long)param_1 + 0x84) = *(int *)(lVar3 + 4) + -1;
  uVar6 = 1;
switchD_100c663a0_default:
  return uVar6;
}

