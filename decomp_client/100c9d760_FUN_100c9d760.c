
undefined8 FUN_100c9d760(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar3 = FUN_100caa3e0(param_1,param_3);
  uVar5 = 0;
  if (lVar3 != 0) {
    iVar1 = FUN_100c60800(lVar3);
    if (0 < iVar1) {
      iVar1 = 0;
      if (param_4 == 0) {
        do {
          lVar4 = FUN_100c60820(lVar3,iVar1);
          lVar4 = FUN_100c9ceb0(param_1,param_2,*(undefined8 *)(lVar4 + 8),
                                *(undefined8 *)(lVar4 + 0x10));
          if (lVar4 == 0) {
            return 0;
          }
          FUN_100c86400(lVar4);
          iVar1 = iVar1 + 1;
          iVar2 = FUN_100c60800(lVar3);
        } while (iVar1 < iVar2);
      }
      else {
        do {
          lVar4 = FUN_100c60820(lVar3,iVar1);
          lVar4 = FUN_100c9ceb0(param_1,param_2,*(undefined8 *)(lVar4 + 8),
                                *(undefined8 *)(lVar4 + 0x10));
          if (lVar4 == 0) {
            return 0;
          }
          FUN_100c977e0(param_4,lVar4,0xffffffff);
          FUN_100c86400(lVar4);
          iVar1 = iVar1 + 1;
          iVar2 = FUN_100c60800(lVar3);
        } while (iVar1 < iVar2);
      }
    }
    uVar5 = 1;
  }
  return uVar5;
}

