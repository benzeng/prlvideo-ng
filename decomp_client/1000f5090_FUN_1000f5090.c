
char FUN_1000f5090(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  undefined **local_58 [2];
  undefined **local_48 [2];
  undefined **local_38 [2];
  
  FUN_100d72f10(local_38);
  local_38[0] = &PTR_FUN_10226cbf8;
  FUN_100d72f10(local_48);
  local_48[0] = &PTR_FUN_10226cb78;
  FUN_100d72f10(local_58);
  local_58[0] = &PTR_FUN_10226d418;
  iVar1 = FUN_1000f6140();
  cVar2 = '\x03';
  if (iVar1 == 0) {
    iVar1 = FUN_100d74380(local_48,1);
    if (iVar1 == 0) {
      iVar1 = FUN_100d74590(local_48,local_38);
      if (iVar1 == 0) {
        iVar1 = FUN_100d742c0(local_48,2);
        if (iVar1 == 0) {
          iVar1 = FUN_100d744a0(local_48,param_1 + 0x30);
          if (iVar1 == 0) {
            iVar1 = FUN_100d74f40(param_3,local_48);
            if (iVar1 == 0) {
              if (*(int *)(*(long *)(param_2 + 0x50) + 4) != 0) {
                iVar1 = FUN_1000f6460();
                if (iVar1 != 0) goto LAB_1000f519e;
              }
              iVar1 = FUN_1000f6460();
              if (iVar1 == 0) {
                iVar1 = FUN_100d75030(param_3,local_58);
                cVar2 = (iVar1 != 0) * '\x03';
              }
            }
          }
        }
      }
    }
  }
LAB_1000f519e:
  FUN_100d72f50(local_58);
  FUN_100d72f50(local_48);
  FUN_100d72f50(local_38);
  return cVar2;
}

