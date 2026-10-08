
int FUN_100c458e0(int param_1,undefined8 param_2,undefined8 param_3,long param_4,int param_5)

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
  
  iVar1 = FUN_100c26610(*(undefined8 *)(param_4 + 0x20));
  if (0x4000 < iVar1) {
    uVar9 = 0x69;
    uVar10 = 0x273;
LAB_100c45a4f:
    FUN_100c62ee0(4,0x67,uVar9,"rsa_eay.c",uVar10);
    return -1;
  }
  iVar1 = FUN_100c27100(*(undefined8 *)(param_4 + 0x20),*(undefined8 *)(param_4 + 0x28));
  if (iVar1 < 1) {
    uVar9 = 0x65;
    uVar10 = 0x278;
    goto LAB_100c45a4f;
  }
  iVar1 = FUN_100c26610(*(undefined8 *)(param_4 + 0x20));
  if ((0xc00 < iVar1) && (iVar1 = FUN_100c26610(*(undefined8 *)(param_4 + 0x28)), 0x40 < iVar1)) {
    uVar9 = 0x65;
    uVar10 = 0x27f;
    goto LAB_100c45a4f;
  }
  lVar5 = FUN_100c27a20();
  if (lVar5 == 0) {
    return -1;
  }
  FUN_100c27c60(lVar5);
  lVar6 = FUN_100c27e20(lVar5);
  puVar7 = (undefined8 *)FUN_100c27e20(lVar5);
  iVar1 = FUN_100c26610(*(undefined8 *)(param_4 + 0x20));
  iVar1 = (int)(iVar1 + 7 + ((uint)(iVar1 + 7 >> 0x1f) >> 0x1d)) >> 3;
  ptr = (void *)FUN_100bf3540(iVar1,"rsa_eay.c",0x28a);
  if (((lVar6 == 0) || (puVar7 == (undefined8 *)0x0)) || (ptr == (void *)0x0)) {
    uVar9 = 0x41;
    uVar10 = 0x28c;
  }
  else {
    if (param_1 <= iVar1) {
      lVar8 = FUN_100c26e20(param_2,param_1,lVar6);
      iVar4 = -1;
      if (lVar8 == 0) goto LAB_100c45a9a;
      iVar2 = FUN_100c27100(lVar6,*(undefined8 *)(param_4 + 0x20));
      if (iVar2 < 0) {
        if ((((*(byte *)(param_4 + 0x74) & 2) != 0) &&
            (lVar8 = FUN_100c33470(param_4 + 0x78,9,*(undefined8 *)(param_4 + 0x20),lVar5),
            lVar8 == 0)) ||
           (iVar2 = (**(code **)(*(long *)(param_4 + 0x10) + 0x30))
                              (puVar7,lVar6,*(undefined8 *)(param_4 + 0x28),
                               *(undefined8 *)(param_4 + 0x20),lVar5,*(undefined8 *)(param_4 + 0x78)
                              ), iVar2 == 0)) goto LAB_100c45a9a;
        if (param_5 == 5) {
          if (((*(ulong *)*puVar7 & 0xf) != 0xc) &&
             (iVar2 = FUN_100c23090(puVar7,*(undefined8 *)(param_4 + 0x20),puVar7), iVar2 == 0))
          goto LAB_100c45a9a;
          uVar3 = FUN_100c26ff0(puVar7,ptr);
          iVar4 = FUN_100c49d90(param_3,iVar1,ptr,uVar3,iVar1);
        }
        else {
          uVar3 = FUN_100c26ff0(puVar7,ptr);
          if (param_5 == 3) {
            iVar4 = FUN_100c48a40(param_3,iVar1,ptr,uVar3,iVar1);
          }
          else {
            if (param_5 != 1) {
              uVar9 = 0x76;
              uVar10 = 0x2bd;
              goto LAB_100c45b19;
            }
            iVar4 = FUN_100c483d0(param_3,iVar1,ptr,uVar3,iVar1);
          }
        }
        if (-1 < iVar4) goto LAB_100c45a9a;
        uVar9 = 0x72;
        uVar10 = 0x2c1;
      }
      else {
        uVar9 = 0x84;
        uVar10 = 0x29e;
      }
LAB_100c45b19:
      FUN_100c62ee0(4,0x67,uVar9,"rsa_eay.c",uVar10);
      goto LAB_100c45a9a;
    }
    uVar9 = 0x6c;
    uVar10 = 0x295;
  }
  FUN_100c62ee0(4,0x67,uVar9,"rsa_eay.c",uVar10);
  iVar4 = -1;
LAB_100c45a9a:
  FUN_100c27d40(lVar5);
  FUN_100c27ab0(lVar5);
  if (ptr == (void *)0x0) {
    return iVar4;
  }
  _OPENSSL_cleanse(ptr,(long)iVar1);
  FUN_100bf3910(ptr);
  return iVar4;
}

