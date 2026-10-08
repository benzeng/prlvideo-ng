
undefined4 FUN_100c65b20(long *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (0x40 < *(int *)(lVar2 + 8)) {
    FUN_100bf2cd0("digest.c",0x109,"ctx->digest->md_size <= EVP_MAX_MD_SIZE");
    lVar2 = *param_1;
  }
  uVar1 = (**(code **)(lVar2 + 0x28))(param_1,param_2);
  lVar2 = *param_1;
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(lVar2 + 8);
  }
  if (*(code **)(lVar2 + 0x38) != (code *)0x0) {
    (**(code **)(lVar2 + 0x38))(param_1);
    FUN_100c6fcb0(param_1,2);
    lVar2 = *param_1;
  }
  ___bzero(param_1[3],(long)*(int *)(lVar2 + 0x68));
  FUN_100c65c50(param_1);
  return uVar1;
}

