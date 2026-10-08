
int FUN_100c45530(undefined4 param_1,undefined8 param_2,long param_3,long param_4,undefined4 param_5
                 )

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  void *ptr;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  iVar1 = FUN_100c26610(*(undefined8 *)(param_4 + 0x20));
  if (0x4000 < iVar1) {
    uVar8 = 0x69;
    uVar9 = 0xa4;
LAB_100c456ac:
    FUN_100c62ee0(4,0x68,uVar8,"rsa_eay.c",uVar9);
    return -1;
  }
  iVar1 = FUN_100c27100(*(undefined8 *)(param_4 + 0x20),*(undefined8 *)(param_4 + 0x28));
  if (iVar1 < 1) {
    uVar8 = 0x65;
    uVar9 = 0xa9;
    goto LAB_100c456ac;
  }
  iVar1 = FUN_100c26610(*(undefined8 *)(param_4 + 0x20));
  if ((0xc00 < iVar1) && (iVar1 = FUN_100c26610(*(undefined8 *)(param_4 + 0x28)), 0x40 < iVar1)) {
    uVar8 = 0x65;
    uVar9 = 0xb0;
    goto LAB_100c456ac;
  }
  lVar4 = FUN_100c27a20();
  if (lVar4 == 0) {
    return -1;
  }
  FUN_100c27c60(lVar4);
  lVar5 = FUN_100c27e20(lVar4);
  lVar6 = FUN_100c27e20(lVar4);
  iVar1 = FUN_100c26610(*(undefined8 *)(param_4 + 0x20));
  iVar1 = (int)(iVar1 + 7 + ((uint)(iVar1 + 7 >> 0x1f) >> 0x1d)) >> 3;
  ptr = (void *)FUN_100bf3540(iVar1,"rsa_eay.c",0xbb);
  if (((lVar5 == 0) || (lVar6 == 0)) || (ptr == (void *)0x0)) {
    uVar8 = 0x41;
    uVar9 = 0xbd;
LAB_100c456e9:
    FUN_100c62ee0(4,0x68,uVar8,"rsa_eay.c",uVar9);
    iVar3 = -1;
  }
  else {
    switch(param_5) {
    case 1:
      iVar2 = FUN_100c48510(ptr,iVar1,param_2,param_1);
      break;
    case 2:
      iVar2 = FUN_100c48770(ptr,iVar1,param_2,param_1);
      break;
    case 3:
      iVar2 = FUN_100c489d0(ptr,iVar1,param_2,param_1);
      break;
    case 4:
      iVar2 = FUN_100c48ab0(ptr,iVar1,param_2,param_1,0,0);
      break;
    default:
      uVar8 = 0x76;
      uVar9 = 0xd1;
      goto LAB_100c456e9;
    }
    iVar3 = -1;
    if ((0 < iVar2) && (lVar7 = FUN_100c26e20(ptr,iVar1,lVar5), lVar7 != 0)) {
      iVar2 = FUN_100c27100(lVar5,*(undefined8 *)(param_4 + 0x20));
      if (iVar2 < 0) {
        if ((((*(byte *)(param_4 + 0x74) & 2) == 0) ||
            (lVar7 = FUN_100c33470(param_4 + 0x78,9,*(undefined8 *)(param_4 + 0x20),lVar4),
            lVar7 != 0)) &&
           (iVar2 = (**(code **)(*(long *)(param_4 + 0x10) + 0x30))
                              (lVar6,lVar5,*(undefined8 *)(param_4 + 0x28),
                               *(undefined8 *)(param_4 + 0x20),lVar4,*(undefined8 *)(param_4 + 0x78)
                              ), iVar2 != 0)) {
          iVar3 = FUN_100c26610(lVar6);
          iVar2 = FUN_100c26ff0(lVar6,(iVar1 - ((int)(iVar3 + 7 +
                                                     ((uint)(iVar3 + 7 >> 0x1f) >> 0x1d)) >> 3)) +
                                      param_3);
          iVar3 = iVar1;
          if (iVar2 < iVar1) {
            ___bzero(param_3,(ulong)(uint)((iVar1 + -1) - iVar2) + 1);
          }
        }
      }
      else {
        FUN_100c62ee0(4,0x68,0x84,"rsa_eay.c",0xdd);
      }
    }
  }
  FUN_100c27d40(lVar4);
  FUN_100c27ab0(lVar4);
  if (ptr == (void *)0x0) {
    return iVar3;
  }
  _OPENSSL_cleanse(ptr,(long)iVar1);
  FUN_100bf3910(ptr);
  return iVar3;
}

