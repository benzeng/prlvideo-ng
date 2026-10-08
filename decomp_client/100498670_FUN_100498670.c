
undefined8 * FUN_100498670(undefined8 *param_1,long param_2,long *param_3)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  *param_1 = PTR_shared_null_1021e15e8;
  lVar1 = *param_3;
  iVar3 = QString::compare_helper
                    (*(long *)(lVar1 + 0x10) + lVar1,*(undefined4 *)(lVar1 + 4),
                     "{A6FC2C1A-4A8F-4459-8B22-9E7D89E5F6EA}",0xffffffff,1);
  if (iVar3 == 0) {
    uVar4 = FUN_10044e660(param_2);
    cVar2 = FUN_1003bf030(uVar4);
    if (cVar2 != '\0') {
      local_30[0] = *(undefined8 *)(*(long *)(param_2 + 0x38) + 200);
      FUN_100359270(param_1,local_30);
    }
    uVar4 = FUN_10044e660(param_2);
    cVar2 = FUN_1003bf090(uVar4);
    if (cVar2 != '\0') {
      local_38 = *(undefined8 *)(*(long *)(param_2 + 0x38) + 0xd0);
      FUN_100359270(param_1,&local_38);
    }
    uVar4 = FUN_10044e660(param_2);
    cVar2 = FUN_1003bf150(uVar4);
    if (cVar2 != '\0') {
      local_40 = *(undefined8 *)(*(long *)(param_2 + 0x38) + 0xd8);
      FUN_100359270(param_1,&local_40);
    }
  }
  else {
    lVar1 = *param_3;
    iVar3 = QString::compare_helper
                      (*(long *)(lVar1 + 0x10) + lVar1,*(undefined4 *)(lVar1 + 4),
                       "{2D88EAEF-0F0A-4C46-AEDC-9B9CBF4F3A58}",0xffffffff,1);
    if (iVar3 == 0) {
      uVar4 = FUN_10044e660(param_2);
      cVar2 = FUN_1003bf0f0(uVar4);
      if (cVar2 != '\0') {
        local_48 = *(undefined8 *)(*(long *)(param_2 + 0x38) + 0x128);
        FUN_100359270(param_1,&local_48);
      }
    }
  }
  return param_1;
}

