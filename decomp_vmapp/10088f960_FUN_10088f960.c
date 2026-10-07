
ulong FUN_10088f960(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  void *ptr;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  size_t len;
  ulong uVar6;
  
  lVar3 = *(long *)(param_1 + 0x78);
  if (*(int *)(lVar3 + 0xf4) == 0) {
    return 0xffffffff;
  }
  if (*(int *)(lVar3 + 0x29c) < 0) {
    if (*(int *)(lVar3 + 0xf8) == 0) {
      return 0xffffffff;
    }
    if (param_3 != 0) {
      if (param_2 == 0) {
        iVar4 = FUN_1008446d0(lVar3 + 0x100,param_3,param_4);
      }
      else if (*(int *)(param_1 + 0x10) == 0) {
        if (*(long *)(lVar3 + 0x2a0) == 0) {
          iVar4 = FUN_100844cb0(lVar3 + 0x100,param_3,param_2,param_4);
        }
        else {
          iVar4 = FUN_1008453c0();
        }
      }
      else if (*(long *)(lVar3 + 0x2a0) == 0) {
        iVar4 = FUN_100844860();
      }
      else {
        iVar4 = FUN_1008450b0();
      }
      if (iVar4 != 0) {
        return 0xffffffff;
      }
      return param_4 & 0xffffffff;
    }
    if (*(int *)(param_1 + 0x10) == 0) {
      if (*(int *)(lVar3 + 0x294) < 0) {
        return 0xffffffff;
      }
      iVar4 = FUN_1008456c0(lVar3 + 0x100,param_1 + 0x38);
      if (iVar4 != 0) {
        return 0xffffffff;
      }
    }
    else {
      FUN_100845790(lVar3 + 0x100,param_1 + 0x38,0x10);
      *(undefined4 *)(lVar3 + 0x294) = 0x10;
    }
    *(undefined4 *)(lVar3 + 0xf8) = 0;
    return 0;
  }
  if (param_2 != param_3) {
    return 0xffffffff;
  }
  if (param_4 < 0x18) {
    return 0xffffffff;
  }
  uVar5 = 0x13;
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar5 = 0x18;
  }
  iVar4 = FUN_10088b3a0(param_1,uVar5,8,param_3);
  uVar6 = 0xffffffff;
  if (iVar4 < 1) goto LAB_10088fbe1;
  lVar2 = lVar3 + 0x100;
  lVar1 = param_1 + 0x38;
  iVar4 = FUN_1008446d0(lVar2,lVar1,(long)*(int *)(lVar3 + 0x29c));
  if (iVar4 == 0) {
    ptr = (void *)(param_3 + 8);
    len = param_4 - 0x18;
    if (*(int *)(param_1 + 0x10) != 0) {
      if (*(long *)(lVar3 + 0x2a0) == 0) {
        iVar4 = FUN_100844860(lVar2,ptr,ptr);
      }
      else {
        iVar4 = FUN_1008450b0();
      }
      uVar6 = 0xffffffff;
      if (iVar4 != 0) goto LAB_10088fbe1;
      FUN_100845790(lVar2,(param_4 - 0x10) + param_3,0x10);
      len = param_4;
LAB_10088fc09:
      uVar6 = len & 0xffffffff;
      goto LAB_10088fbe1;
    }
    if (*(long *)(lVar3 + 0x2a0) == 0) {
      iVar4 = FUN_100844cb0(lVar2,ptr,ptr);
    }
    else {
      iVar4 = FUN_1008453c0(lVar2,ptr,ptr);
    }
    if (iVar4 == 0) {
      FUN_100845790(lVar2,lVar1,0x10);
      iVar4 = FUN_10081d820(lVar1,(param_4 - 0x10) + param_3,0x10);
      if (iVar4 == 0) goto LAB_10088fc09;
      _OPENSSL_cleanse(ptr,len);
    }
  }
  uVar6 = 0xffffffff;
LAB_10088fbe1:
  *(undefined4 *)(lVar3 + 0xf8) = 0;
  *(undefined4 *)(lVar3 + 0x29c) = 0xffffffff;
  return uVar6;
}

