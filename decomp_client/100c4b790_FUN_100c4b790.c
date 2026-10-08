
ulong FUN_100c4b790(long param_1,undefined8 param_2,ulong param_3,void *param_4,size_t param_5)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  size_t local_38;
  
  lVar1 = *(long *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x20);
  if (*(long *)(lVar1 + 0x20) == 0) {
    lVar5 = *(long *)(lVar1 + 0x38);
    if (lVar5 == 0) {
      uVar4 = FUN_100c6d160();
      lVar5 = FUN_100bf3540(uVar4,"rsa_pmeth.c",0x8c);
      *(long *)(lVar1 + 0x38) = lVar5;
      if (lVar5 == 0) {
        return 0xffffffff;
      }
    }
    iVar3 = FUN_100c4c1a0(param_3 & 0xffffffff,param_2,lVar5,uVar2,*(undefined4 *)(lVar1 + 0x18));
    local_38 = (size_t)iVar3;
    if (iVar3 == 0) {
      return 0;
    }
  }
  else {
    iVar3 = *(int *)(lVar1 + 0x18);
    if (iVar3 == 6) {
      lVar5 = *(long *)(lVar1 + 0x38);
      if (lVar5 == 0) {
        uVar4 = FUN_100c6d160();
        lVar5 = FUN_100bf3540(uVar4,"rsa_pmeth.c",0x8c);
        *(long *)(lVar1 + 0x38) = lVar5;
        if (lVar5 == 0) {
          return 0xffffffff;
        }
      }
      iVar3 = FUN_100c4c1a0(param_3 & 0xffffffff,param_2,lVar5,uVar2,3);
      if (iVar3 < 1) {
        return 0;
      }
      iVar3 = FUN_100c493f0(uVar2,param_4,*(undefined8 *)(lVar1 + 0x20),
                            *(undefined8 *)(lVar1 + 0x28),*(undefined8 *)(lVar1 + 0x38),
                            *(undefined4 *)(lVar1 + 0x30));
      return (ulong)(0 < iVar3);
    }
    if (iVar3 != 5) {
      if (iVar3 != 1) {
        return 0xffffffff;
      }
      uVar4 = FUN_100c6fc30(*(long *)(lVar1 + 0x20));
      uVar6 = FUN_100c48040(uVar4,param_4,param_5,param_2,param_3 & 0xffffffff,uVar2);
      return uVar6;
    }
    iVar3 = FUN_100c4b950(param_1,0,&local_38,param_2,param_3);
    if (iVar3 < 1) {
      return 0;
    }
  }
  uVar6 = 0;
  if (local_38 == param_5) {
    iVar3 = _memcmp(param_4,*(void **)(lVar1 + 0x38),param_5);
    uVar6 = (ulong)(iVar3 == 0);
  }
  return uVar6;
}

