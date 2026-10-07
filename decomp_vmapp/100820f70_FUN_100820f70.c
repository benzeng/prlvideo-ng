
undefined8 FUN_100820f70(long param_1,uint param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  uint local_38 [2];
  long local_30;
  
  uVar3 = 0;
  if (param_1 != 0) {
    if (DAT_1011c06d0 == 0) {
      FUN_10081e310(3);
      DAT_1011c06d0 = FUN_1008856e0(FUN_100820d40,FUN_100820d90);
      FUN_10081e310(2);
      if (DAT_1011c06d0 == 0) {
        return 0;
      }
    }
    local_38[0] = param_2 & 0xffff7fff;
    local_30 = param_1;
    lVar1 = FUN_100885dc0(DAT_1011c06d0,local_38);
    uVar3 = 0;
    if (lVar1 != 0) {
      if ((param_2 & 0x8000) == 0) {
        iVar2 = -1;
        uVar3 = 0;
        do {
          if (*(int *)(lVar1 + 4) == 0) goto LAB_10082103b;
          iVar2 = iVar2 + 1;
          if (9 < iVar2) {
            return 0;
          }
          local_30 = *(undefined8 *)(lVar1 + 0x10);
          lVar1 = FUN_100885dc0(DAT_1011c06d0,local_38);
        } while (lVar1 != 0);
      }
      else {
LAB_10082103b:
        uVar3 = *(undefined8 *)(lVar1 + 0x10);
      }
    }
  }
  return uVar3;
}

