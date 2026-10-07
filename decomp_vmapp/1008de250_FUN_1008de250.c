
undefined8 FUN_1008de250(long param_1,int *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 local_128;
  undefined4 uStack_124;
  
  iVar2 = *param_2;
  if (iVar2 == 3) {
    uVar5 = FUN_1008df5d0(param_1,param_2,0);
    return uVar5;
  }
  if (iVar2 != 2) {
    if (iVar2 != 0) {
      uVar6 = 0x86;
      uVar5 = 0x9b;
      uVar7 = 0x2e7;
      goto LAB_1008de4a3;
    }
    lVar1 = *(long *)(param_2 + 2);
    if (*(long *)(lVar1 + 0x28) == 0) {
      uVar6 = 0x8c;
      uVar5 = 0x85;
      uVar7 = 0x166;
      goto LAB_1008de4a3;
    }
    lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x18);
    lVar3 = FUN_100895fc0(*(long *)(lVar1 + 0x28),0);
    if (lVar3 == 0) {
      return 0;
    }
    iVar2 = FUN_100896e40(lVar3);
    lVar8 = 0;
    uVar5 = 0;
    if (iVar2 < 1) goto LAB_1008de5d8;
    uVar5 = 0;
    iVar2 = FUN_1008964c0(lVar3,0xffffffff,0x200,10,0,param_2);
    if (iVar2 < 1) {
      uVar5 = 0x6e;
      uVar6 = 0x173;
    }
    else {
      iVar2 = FUN_100896ec0(lVar3,0,&local_128,*(undefined8 *)(*(int **)(lVar1 + 0x18) + 2),
                            (long)**(int **)(lVar1 + 0x18));
      if (iVar2 < 1) {
        lVar8 = 0;
        goto LAB_1008de5d8;
      }
      lVar8 = FUN_10081ddd0(local_128,"cms_env.c",0x17c);
      if (lVar8 != 0) {
        iVar2 = FUN_100896ec0(lVar3,lVar8,&local_128,*(undefined8 *)(*(int **)(lVar1 + 0x18) + 2),
                              (long)**(int **)(lVar1 + 0x18));
        if (iVar2 < 1) {
          FUN_100887ce0(0x2e,0x8c,0x68,"cms_env.c",0x186);
          uVar5 = 0;
        }
        else {
          if (*(void **)(lVar4 + 0x20) != (void *)0x0) {
            _OPENSSL_cleanse(*(void **)(lVar4 + 0x20),*(size_t *)(lVar4 + 0x28));
            FUN_10081e1a0(*(undefined8 *)(lVar4 + 0x20));
          }
          *(long *)(lVar4 + 0x20) = lVar8;
          *(ulong *)(lVar4 + 0x28) = CONCAT44(uStack_124,local_128);
          uVar5 = 1;
        }
        goto LAB_1008de5d8;
      }
      uVar5 = 0x41;
      uVar6 = 0x17f;
    }
    FUN_100887ce0(0x2e,0x8c,uVar5,"cms_env.c",uVar6);
    uVar5 = 0;
    lVar8 = 0;
LAB_1008de5d8:
    FUN_1008963e0(lVar3);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    if (lVar8 != 0) {
      FUN_10081e1a0(lVar8);
      return 0;
    }
    return uVar5;
  }
  lVar1 = *(long *)(param_2 + 2);
  if (*(long *)(lVar1 + 0x20) == 0) {
    uVar6 = 0x87;
    uVar5 = 0x82;
    uVar7 = 0x2a1;
LAB_1008de4a3:
    FUN_100887ce0(0x2e,uVar6,uVar5,"cms_env.c",uVar7);
    return 0;
  }
  lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x18);
  iVar2 = FUN_100821ab0(**(undefined8 **)(lVar1 + 0x10));
  lVar4 = 0;
  if (iVar2 - 0x314U < 3) {
    lVar4 = (ulong)(iVar2 - 0x314U) * 8 + 0x10;
  }
  if (lVar4 != *(long *)(lVar1 + 0x28)) {
    uVar6 = 0x87;
    uVar5 = 0x76;
    uVar7 = 0x2a8;
    goto LAB_1008de4a3;
  }
  if (**(int **)(lVar1 + 0x18) < 0x10) {
    uVar5 = 0x75;
    uVar6 = 0x2b0;
  }
  else {
    iVar2 = FUN_10082f8e0(*(undefined8 *)(lVar1 + 0x20),lVar4 << 3,&local_128);
    if (iVar2 == 0) {
      lVar4 = FUN_10081ddd0(**(int **)(lVar1 + 0x18) + -8,"cms_env.c",0x2ba);
      if (lVar4 != 0) {
        uVar5 = 0;
        iVar2 = FUN_10082fa50(&local_128,0,lVar4,*(undefined8 *)(*(undefined4 **)(lVar1 + 0x18) + 2)
                              ,**(undefined4 **)(lVar1 + 0x18));
        if (iVar2 < 1) {
          FUN_100887ce0(0x2e,0x87,0x9d,"cms_env.c",0x2c6);
          FUN_10081e1a0(lVar4);
        }
        else {
          *(long *)(lVar3 + 0x20) = lVar4;
          *(long *)(lVar3 + 0x28) = (long)iVar2;
          uVar5 = 1;
        }
        goto LAB_1008de58b;
      }
      uVar5 = 0x41;
      uVar6 = 0x2bd;
    }
    else {
      uVar5 = 0x73;
      uVar6 = 0x2b6;
    }
  }
  FUN_100887ce0(0x2e,0x87,uVar5,"cms_env.c",uVar6);
  uVar5 = 0;
LAB_1008de58b:
  _OPENSSL_cleanse(&local_128,0xf4);
  return uVar5;
}

