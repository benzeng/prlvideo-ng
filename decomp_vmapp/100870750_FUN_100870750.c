
ulong FUN_100870750(long param_1,void *param_2,long *param_3,undefined8 param_4,ulong param_5)

{
  byte bVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  uint local_38 [2];
  
  lVar2 = *(long *)(param_1 + 0x28);
  if (*(long *)(lVar2 + 0x20) == 0) {
    local_38[0] = FUN_100870fa0(param_5 & 0xffffffff,param_4,param_2,
                                *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x20),
                                *(undefined4 *)(lVar2 + 0x18));
  }
  else {
    if (*(int *)(lVar2 + 0x18) != 1) {
      if (*(int *)(lVar2 + 0x18) != 5) {
        return 0xffffffff;
      }
      lVar6 = *(long *)(lVar2 + 0x38);
      if (lVar6 == 0) {
        uVar3 = FUN_100891d80(*(undefined8 *)(param_1 + 0x10));
        lVar6 = FUN_10081ddd0(uVar3,"rsa_pmeth.c",0x8c);
        *(long *)(lVar2 + 0x38) = lVar6;
        if (lVar6 == 0) {
          return 0xffffffff;
        }
      }
      iVar4 = FUN_100870fa0(param_5 & 0xffffffff,param_4,lVar6,
                            *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x20),5);
      if (iVar4 < 1) {
        return 0;
      }
      bVar1 = *(byte *)(*(long *)(lVar2 + 0x38) + -1 + (long)iVar4);
      uVar3 = FUN_1008946b0(*(undefined8 *)(lVar2 + 0x20));
      uVar5 = FUN_10086ecb0(uVar3);
      if (bVar1 != uVar5) {
        FUN_100887ce0(4,0x8d,100,"rsa_pmeth.c",0x122);
        return 0;
      }
      uVar7 = (long)iVar4 - 1;
      iVar4 = FUN_1008946d0(*(undefined8 *)(lVar2 + 0x20));
      if ((int)uVar7 != iVar4) {
        FUN_100887ce0(4,0x8d,0x8f,"rsa_pmeth.c",0x127);
        return 0;
      }
      if (param_2 != (void *)0x0) {
        _memcpy(param_2,*(void **)(lVar2 + 0x38),uVar7);
      }
      goto LAB_100870895;
    }
    uVar3 = FUN_1008946b0();
    iVar4 = FUN_10086c9b0(uVar3,0,0,param_2,local_38,param_4,param_5,
                          *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x20));
    if (iVar4 < 1) {
      return 0;
    }
  }
  uVar7 = (ulong)local_38[0];
  if ((int)local_38[0] < 0) {
    return uVar7;
  }
LAB_100870895:
  *param_3 = (long)(int)uVar7;
  return 1;
}

