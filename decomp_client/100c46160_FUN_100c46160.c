
int FUN_100c46160(int param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined4 param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  void *ptr;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long local_88;
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
  iVar2 = FUN_100c26610(*(undefined8 *)(param_4 + 0x20));
  iVar2 = (int)(iVar2 + 7 + ((uint)(iVar2 + 7 >> 0x1f) >> 0x1d)) >> 3;
  ptr = (void *)FUN_100bf3540(iVar2,"rsa_eay.c",0x1fa);
  if (((lVar8 == 0) || (lVar9 == 0)) || (ptr == (void *)0x0)) {
    FUN_100c62ee0(4,0x65,0x41,"rsa_eay.c",0x1fc);
    iVar6 = -1;
    goto LAB_100c462c8;
  }
  if (iVar2 < param_1) {
    FUN_100c62ee0(4,0x65,0x6c,"rsa_eay.c",0x206);
    iVar6 = -1;
    goto LAB_100c462c8;
  }
  lVar10 = FUN_100c26e20(param_2,param_1,lVar8);
  if (lVar10 == 0) {
    iVar6 = -1;
    goto LAB_100c462c8;
  }
  iVar6 = -1;
  iVar3 = FUN_100c27100(lVar8,*(undefined8 *)(param_4 + 0x20));
  if (iVar3 < 0) {
    uVar4 = *(uint *)(param_4 + 0x74);
    if ((uVar4 & 0x80) == 0) {
      local_68 = FUN_100c46c00(param_4,&local_34,lVar7);
      if (local_68 == 0) {
        uVar11 = 0x44;
        uVar12 = 0x217;
        goto LAB_100c462bb;
      }
      if (local_34 == 0) {
        local_88 = FUN_100c27e20(lVar7);
        if (local_88 == 0) {
          uVar11 = 0x41;
          uVar12 = 0x21e;
          goto LAB_100c462bb;
        }
        FUN_100bf2780(9,0x19,"rsa_eay.c",0x146);
        iVar3 = FUN_100c2c110(lVar8,local_88,local_68,lVar7);
        FUN_100bf2780(10,0x19,"rsa_eay.c",0x148);
      }
      else {
        local_88 = 0;
        iVar3 = FUN_100c2c110(lVar8,0,local_68,lVar7);
      }
      if (iVar3 == 0) goto LAB_100c462c8;
      uVar4 = *(uint *)(param_4 + 0x74);
      bVar1 = true;
    }
    else {
      local_88 = 0;
      bVar1 = false;
      local_68 = 0;
    }
    if (((uVar4 & 0x20) == 0) &&
       (((*(long *)(param_4 + 0x38) == 0 || (*(long *)(param_4 + 0x40) == 0)) ||
        ((*(long *)(param_4 + 0x48) == 0 ||
         ((*(long *)(param_4 + 0x50) == 0 || (*(long *)(param_4 + 0x58) == 0)))))))) {
      if ((uVar4 & 0x100) == 0) {
        puVar13 = *(undefined8 **)(param_4 + 0x30);
        local_50 = *puVar13;
        local_48 = *(undefined4 *)(puVar13 + 1);
        local_44 = *(undefined4 *)((long)puVar13 + 0xc);
        local_40 = *(undefined4 *)(puVar13 + 2);
        local_3c = *(uint *)((long)puVar13 + 0x14) & 0xfffffff8 | local_3c & 1 | 6;
        puVar13 = &local_50;
      }
      else {
        puVar13 = *(undefined8 **)(param_4 + 0x30);
      }
      if (((uVar4 & 2) != 0) &&
         (lVar10 = FUN_100c33470(param_4 + 0x78,9,*(undefined8 *)(param_4 + 0x20),lVar7),
         lVar10 == 0)) goto LAB_100c462c8;
      iVar3 = (**(code **)(*(long *)(param_4 + 0x10) + 0x30))
                        (lVar9,lVar8,puVar13,*(undefined8 *)(param_4 + 0x20),lVar7,
                         *(undefined8 *)(param_4 + 0x78));
    }
    else {
      iVar3 = (**(code **)(*(long *)(param_4 + 0x10) + 0x28))(lVar9,lVar8,param_4,lVar7);
    }
    if ((iVar3 == 0) ||
       ((bVar1 && (iVar3 = FUN_100c2c220(lVar9,local_88,local_68,lVar7), iVar3 == 0))))
    goto LAB_100c462c8;
    uVar5 = FUN_100c26ff0(lVar9,ptr);
    switch(param_5) {
    case 1:
      iVar6 = FUN_100c485e0(param_3,iVar2,ptr,uVar5,iVar2);
      break;
    case 2:
      iVar6 = FUN_100c48840(param_3,iVar2,ptr,uVar5,iVar2);
      break;
    case 3:
      iVar6 = FUN_100c48a40(param_3,iVar2,ptr,uVar5,iVar2);
      break;
    case 4:
      iVar6 = FUN_100c48d80(param_3,iVar2,ptr,uVar5,iVar2,0,0);
      break;
    default:
      uVar11 = 0x76;
      uVar12 = 0x256;
      goto LAB_100c462bb;
    }
    if (-1 < iVar6) goto LAB_100c462c8;
    uVar11 = 0x72;
    uVar12 = 0x25a;
  }
  else {
    uVar11 = 0x84;
    uVar12 = 0x210;
  }
LAB_100c462bb:
  FUN_100c62ee0(4,0x65,uVar11,"rsa_eay.c",uVar12);
LAB_100c462c8:
  FUN_100c27d40(lVar7);
  FUN_100c27ab0(lVar7);
  if (ptr != (void *)0x0) {
    _OPENSSL_cleanse(ptr,(long)iVar2);
    FUN_100bf3910(ptr);
  }
  return iVar6;
}

