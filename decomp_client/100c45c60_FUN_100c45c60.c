
int FUN_100c45c60(undefined8 param_1,undefined8 param_2,long param_3,long param_4,int param_5)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  void *ptr;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long local_90;
  long local_68;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  uint local_3c;
  int local_34;
  
  local_34 = 0;
  lVar7 = FUN_100c27a20();
  if (lVar7 == 0) {
    return -1;
  }
  FUN_100c27c60(lVar7);
  lVar8 = FUN_100c27e20(lVar7);
  lVar9 = FUN_100c27e20(lVar7);
  iVar3 = FUN_100c26610(*(undefined8 *)(param_4 + 0x20));
  iVar3 = (int)(iVar3 + 7 + ((uint)(iVar3 + 7 >> 0x1f) >> 0x1d)) >> 3;
  ptr = (void *)FUN_100bf3540(iVar3,"rsa_eay.c",0x172);
  if (((lVar8 == 0) || (lVar9 == 0)) || (ptr == (void *)0x0)) {
    uVar11 = 0x41;
    uVar12 = 0x174;
LAB_100c45d4d:
    FUN_100c62ee0(4,0x66,uVar11,"rsa_eay.c",uVar12);
    iVar4 = -1;
  }
  else {
    if (param_5 == 5) {
      iVar4 = FUN_100c49ce0(ptr,iVar3,param_2);
    }
    else if (param_5 == 3) {
      iVar4 = FUN_100c489d0(ptr,iVar3,param_2);
    }
    else {
      if (param_5 != 1) {
        uVar11 = 0x76;
        uVar12 = 0x184;
        goto LAB_100c45d4d;
      }
      iVar4 = FUN_100c48340(ptr,iVar3,param_2);
    }
    if (iVar4 < 1) {
      iVar4 = -1;
      goto LAB_100c45e05;
    }
    lVar10 = FUN_100c26e20(ptr,iVar3,lVar8);
    if (lVar10 == 0) {
      iVar4 = -1;
      goto LAB_100c45e05;
    }
    iVar5 = FUN_100c27100(lVar8,*(undefined8 *)(param_4 + 0x20));
    iVar4 = -1;
    if (-1 < iVar5) {
      FUN_100c62ee0(4,0x66,0x84,"rsa_eay.c",400);
      goto LAB_100c45e05;
    }
    uVar6 = *(uint *)(param_4 + 0x74);
    if ((uVar6 & 0x80) == 0) {
      local_68 = FUN_100c46c00(param_4,&local_34,lVar7);
      if (local_68 == 0) {
        FUN_100c62ee0(4,0x66,0x44,"rsa_eay.c",0x197);
        goto LAB_100c45e05;
      }
      if (local_34 == 0) {
        local_90 = FUN_100c27e20(lVar7);
        if (local_90 == 0) {
          uVar11 = 0x41;
          uVar12 = 0x19e;
          goto LAB_100c45d4d;
        }
        FUN_100bf2780(9,0x19,"rsa_eay.c",0x146);
        iVar4 = FUN_100c2c110(lVar8,local_90,local_68,lVar7);
        FUN_100bf2780(10,0x19,"rsa_eay.c",0x148);
      }
      else {
        local_90 = 0;
        iVar4 = FUN_100c2c110(lVar8,0,local_68,lVar7);
      }
      if (iVar4 == 0) {
        iVar4 = -1;
        goto LAB_100c45e05;
      }
      uVar6 = *(uint *)(param_4 + 0x74);
      bVar2 = true;
    }
    else {
      local_90 = 0;
      bVar2 = false;
      local_68 = 0;
    }
    if (((uVar6 & 0x20) == 0) &&
       (((*(long *)(param_4 + 0x38) == 0 || (*(long *)(param_4 + 0x40) == 0)) ||
        ((*(long *)(param_4 + 0x48) == 0 ||
         ((*(long *)(param_4 + 0x50) == 0 || (*(long *)(param_4 + 0x58) == 0)))))))) {
      if ((uVar6 & 0x100) == 0) {
        puVar13 = &local_50;
        FUN_100c26700(puVar13);
        puVar1 = *(undefined8 **)(param_4 + 0x30);
        local_50 = *puVar1;
        local_48 = *(undefined4 *)(puVar1 + 1);
        local_44 = *(undefined4 *)((long)puVar1 + 0xc);
        local_40 = *(undefined4 *)(puVar1 + 2);
        local_3c = *(uint *)((long)puVar1 + 0x14) & 0xfffffff8 | local_3c & 1 | 6;
        uVar6 = *(uint *)(param_4 + 0x74);
      }
      else {
        puVar13 = *(undefined8 **)(param_4 + 0x30);
      }
      if (((uVar6 & 2) != 0) &&
         (lVar10 = FUN_100c33470(param_4 + 0x78,9,*(undefined8 *)(param_4 + 0x20),lVar7),
         lVar10 == 0)) {
        iVar4 = -1;
        goto LAB_100c45e05;
      }
      iVar5 = (**(code **)(*(long *)(param_4 + 0x10) + 0x30))
                        (lVar9,lVar8,puVar13,*(undefined8 *)(param_4 + 0x20),lVar7,
                         *(undefined8 *)(param_4 + 0x78));
    }
    else {
      iVar5 = (**(code **)(*(long *)(param_4 + 0x10) + 0x28))(lVar9,lVar8,param_4,lVar7);
    }
    iVar4 = -1;
    if ((iVar5 != 0) &&
       ((!bVar2 || (iVar5 = FUN_100c2c220(lVar9,local_90,local_68,lVar7), iVar4 = -1, iVar5 != 0))))
    {
      if (param_5 == 5) {
        FUN_100c23090(lVar8,*(undefined8 *)(param_4 + 0x20),lVar9);
        iVar4 = FUN_100c27160(lVar9,lVar8);
        if (0 < iVar4) {
          lVar9 = lVar8;
        }
      }
      iVar4 = FUN_100c26610(lVar9);
      iVar5 = FUN_100c26ff0(lVar9,(iVar3 - ((int)(iVar4 + 7 + ((uint)(iVar4 + 7 >> 0x1f) >> 0x1d))
                                           >> 3)) + param_3);
      iVar4 = iVar3;
      if (iVar5 < iVar3) {
        ___bzero(param_3,(ulong)(uint)((iVar3 + -1) - iVar5) + 1);
      }
    }
  }
LAB_100c45e05:
  FUN_100c27d40(lVar7);
  FUN_100c27ab0(lVar7);
  if (ptr != (void *)0x0) {
    _OPENSSL_cleanse(ptr,(long)iVar3);
    FUN_100bf3910(ptr);
  }
  return iVar4;
}

