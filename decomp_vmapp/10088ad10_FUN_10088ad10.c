
bool FUN_10088ad10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  bool bVar2;
  long local_68 [5];
  code *pcStack_40;
  
  local_68[4] = 0;
  pcStack_40 = (code *)0x0;
  local_68[2] = 0;
  local_68[3] = 0;
  local_68[0] = 0;
  local_68[1] = 0;
  FUN_100894730(local_68,1);
  iVar1 = FUN_10088a720(local_68,param_5,param_6);
  if (iVar1 == 0) {
    bVar2 = false;
  }
  else {
    iVar1 = (*pcStack_40)(local_68,param_1,param_2);
    if (iVar1 == 0) {
      bVar2 = false;
    }
    else {
      if (0x40 < *(int *)(local_68[0] + 8)) {
        FUN_10081d560("digest.c",0x109,"ctx->digest->md_size <= EVP_MAX_MD_SIZE");
      }
      iVar1 = (**(code **)(local_68[0] + 0x28))(local_68,param_3);
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = *(undefined4 *)(local_68[0] + 8);
      }
      if (*(code **)(local_68[0] + 0x38) != (code *)0x0) {
        (**(code **)(local_68[0] + 0x38))(local_68);
        FUN_100894730(local_68,2);
      }
      ___bzero(local_68[3],(long)*(int *)(local_68[0] + 0x68));
      bVar2 = iVar1 != 0;
    }
  }
  FUN_10088aa50(local_68);
  return bVar2;
}

