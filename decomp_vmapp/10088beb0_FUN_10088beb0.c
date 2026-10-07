
undefined8 FUN_10088beb0(long *param_1,long *param_2)

{
  code *pcVar1;
  int iVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((param_2 == (long *)0x0) || (*param_2 == 0)) {
    uVar4 = 0x6f;
    uVar5 = 0x273;
    goto LAB_10088bf32;
  }
  if ((param_2[1] != 0) && (iVar2 = FUN_10087a520(), iVar2 == 0)) {
    uVar4 = 0x26;
    uVar5 = 0x279;
    goto LAB_10088bf32;
  }
  if (*param_1 == 0) {
LAB_10088bf48:
    if (param_1[0xf] != 0) {
      FUN_10081e1a0();
    }
    if (param_1[1] != 0) {
      FUN_10087a5e0();
    }
    ___bzero(param_1,0xa8);
  }
  else {
    pcVar1 = *(code **)(*param_1 + 0x28);
    if ((pcVar1 == (code *)0x0) || (iVar2 = (*pcVar1)(param_1), iVar2 != 0)) {
      if ((void *)param_1[0xf] != (void *)0x0) {
        _OPENSSL_cleanse((void *)param_1[0xf],(long)*(int *)(*param_1 + 0x30));
      }
      goto LAB_10088bf48;
    }
  }
  _memcpy(param_1,param_2,0xa8);
  if ((param_2[0xf] != 0) && (*(int *)(*param_2 + 0x30) != 0)) {
    pvVar3 = (void *)FUN_10081ddd0(*(int *)(*param_2 + 0x30),"evp_enc.c",0x282);
    param_1[0xf] = (long)pvVar3;
    if (pvVar3 == (void *)0x0) {
      uVar4 = 0x41;
      uVar5 = 0x284;
LAB_10088bf32:
      FUN_100887ce0(6,0xa3,uVar4,"evp_enc.c",uVar5);
      return 0;
    }
    _memcpy(pvVar3,(void *)param_2[0xf],(long)*(int *)(*param_2 + 0x30));
  }
  if ((*(byte *)(*param_2 + 0x11) & 4) == 0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010088bfeb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(*param_2 + 0x48))(param_2,8,0,param_1);
  return uVar4;
}

