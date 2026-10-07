
undefined8
FUN_1007fd9f0(long param_1,int param_2,undefined4 param_3,undefined8 param_4,undefined4 param_5)

{
  undefined1 *puVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  size_t sVar5;
  undefined1 uVar6;
  
  if (*(int *)(param_1 + 0x48) == param_2) {
    puVar1 = *(undefined1 **)(*(long *)(param_1 + 0x50) + 8);
    iVar3 = (**(code **)(*(long *)(*(long *)(param_1 + 8) + 200) + 0x28))
                      (param_1,param_4,param_5,*(long *)(param_1 + 0x80) + 0x290);
    if (iVar3 < 1) {
      return 0;
    }
    lVar2 = *(long *)(param_1 + 0x80);
    *(int *)(lVar2 + 0x310) = iVar3;
    sVar5 = (size_t)iVar3;
    _memcpy(puVar1 + 4,(void *)(lVar2 + 0x290),sVar5);
    uVar6 = (undefined1)iVar3;
    if (*(int *)(param_1 + 4) == 0x1000) {
      if (0x40 < iVar3) {
        FUN_10081d560("s3_both.c",0xb7,"i <= EVP_MAX_MD_SIZE");
      }
      _memcpy((void *)(*(long *)(param_1 + 0x80) + 0x420),
              (void *)(*(long *)(param_1 + 0x80) + 0x290),sVar5);
      *(undefined1 *)(*(long *)(param_1 + 0x80) + 0x460) = uVar6;
    }
    else {
      if (0x40 < iVar3) {
        FUN_10081d560("s3_both.c",0xbb,"i <= EVP_MAX_MD_SIZE");
      }
      _memcpy((void *)(*(long *)(param_1 + 0x80) + 0x461),
              (void *)(*(long *)(param_1 + 0x80) + 0x290),sVar5);
      *(undefined1 *)(*(long *)(param_1 + 0x80) + 0x4a1) = uVar6;
    }
    *puVar1 = 0x14;
    puVar1[1] = (char)((uint)iVar3 >> 0x10);
    puVar1[2] = (char)((uint)iVar3 >> 8);
    puVar1[3] = uVar6;
    *(int *)(param_1 + 0x60) = iVar3 + 4;
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0x48) = param_3;
  }
  uVar4 = FUN_1007fd930(param_1,0x16);
  return uVar4;
}

