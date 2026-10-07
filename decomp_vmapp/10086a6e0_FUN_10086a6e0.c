
int FUN_10086a6e0(int param_1,undefined8 param_2,undefined8 param_3,long param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  void *ptr;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  iVar1 = FUN_10084b410(*(undefined8 *)(param_4 + 0x20));
  if (0x4000 < iVar1) {
    uVar9 = 0x69;
    uVar10 = 0x273;
LAB_10086a84f:
    FUN_100887ce0(4,0x67,uVar9,"rsa_eay.c",uVar10);
    return -1;
  }
  iVar1 = FUN_10084bf00(*(undefined8 *)(param_4 + 0x20),*(undefined8 *)(param_4 + 0x28));
  if (iVar1 < 1) {
    uVar9 = 0x65;
    uVar10 = 0x278;
    goto LAB_10086a84f;
  }
  iVar1 = FUN_10084b410(*(undefined8 *)(param_4 + 0x20));
  if ((0xc00 < iVar1) && (iVar1 = FUN_10084b410(*(undefined8 *)(param_4 + 0x28)), 0x40 < iVar1)) {
    uVar9 = 0x65;
    uVar10 = 0x27f;
    goto LAB_10086a84f;
  }
  lVar5 = FUN_10084c820();
  if (lVar5 == 0) {
    return -1;
  }
  FUN_10084ca60(lVar5);
  lVar6 = FUN_10084cc20(lVar5);
  puVar7 = (undefined8 *)FUN_10084cc20(lVar5);
  iVar1 = FUN_10084b410(*(undefined8 *)(param_4 + 0x20));
  iVar1 = (int)(iVar1 + 7 + ((uint)(iVar1 + 7 >> 0x1f) >> 0x1d)) >> 3;
  ptr = (void *)FUN_10081ddd0(iVar1,"rsa_eay.c",0x28a);
  if (((lVar6 == 0) || (puVar7 == (undefined8 *)0x0)) || (ptr == (void *)0x0)) {
    uVar9 = 0x41;
    uVar10 = 0x28c;
  }
  else {
    if (param_1 <= iVar1) {
      lVar8 = FUN_10084bc20(param_2,param_1,lVar6);
      iVar4 = -1;
      if (lVar8 == 0) goto LAB_10086a89a;
      iVar2 = FUN_10084bf00(lVar6,*(undefined8 *)(param_4 + 0x20));
      if (iVar2 < 0) {
        if ((((*(byte *)(param_4 + 0x74) & 2) != 0) &&
            (lVar8 = FUN_100858270(param_4 + 0x78,9,*(undefined8 *)(param_4 + 0x20),lVar5),
            lVar8 == 0)) ||
           (iVar2 = (**(code **)(*(long *)(param_4 + 0x10) + 0x30))
                              (puVar7,lVar6,*(undefined8 *)(param_4 + 0x28),
                               *(undefined8 *)(param_4 + 0x20),lVar5,*(undefined8 *)(param_4 + 0x78)
                              ), iVar2 == 0)) goto LAB_10086a89a;
        if (param_5 == 5) {
          if (((*(ulong *)*puVar7 & 0xf) != 0xc) &&
             (iVar2 = FUN_100847e90(puVar7,*(undefined8 *)(param_4 + 0x20),puVar7), iVar2 == 0))
          goto LAB_10086a89a;
          uVar3 = FUN_10084bdf0(puVar7,ptr);
          iVar4 = FUN_10086eb90(param_3,iVar1,ptr,uVar3,iVar1);
        }
        else {
          uVar3 = FUN_10084bdf0(puVar7,ptr);
          if (param_5 == 3) {
            iVar4 = FUN_10086d840(param_3,iVar1,ptr,uVar3,iVar1);
          }
          else {
            if (param_5 != 1) {
              uVar9 = 0x76;
              uVar10 = 0x2bd;
              goto LAB_10086a919;
            }
            iVar4 = FUN_10086d1d0(param_3,iVar1,ptr,uVar3,iVar1);
          }
        }
        if (-1 < iVar4) goto LAB_10086a89a;
        uVar9 = 0x72;
        uVar10 = 0x2c1;
      }
      else {
        uVar9 = 0x84;
        uVar10 = 0x29e;
      }
LAB_10086a919:
      FUN_100887ce0(4,0x67,uVar9,"rsa_eay.c",uVar10);
      goto LAB_10086a89a;
    }
    uVar9 = 0x6c;
    uVar10 = 0x295;
  }
  FUN_100887ce0(4,0x67,uVar9,"rsa_eay.c",uVar10);
  iVar4 = -1;
LAB_10086a89a:
  FUN_10084cb40(lVar5);
  FUN_10084c8b0(lVar5);
  if (ptr == (void *)0x0) {
    return iVar4;
  }
  _OPENSSL_cleanse(ptr,(long)iVar1);
  FUN_10081e1a0(ptr);
  return iVar4;
}

