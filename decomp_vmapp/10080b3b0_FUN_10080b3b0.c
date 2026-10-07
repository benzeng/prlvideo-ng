
void FUN_10080b3b0(long param_1,int param_2,undefined4 param_3,undefined8 param_4,undefined4 param_5
                  )

{
  short sVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  size_t sVar5;
  
  if (*(int *)(param_1 + 0x48) == param_2) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x50) + 8);
    iVar4 = (**(code **)(*(long *)(*(long *)(param_1 + 8) + 200) + 0x28))
                      (param_1,param_4,param_5,*(long *)(param_1 + 0x80) + 0x290);
    lVar3 = *(long *)(param_1 + 0x80);
    *(int *)(lVar3 + 0x310) = iVar4;
    sVar5 = (size_t)iVar4;
    _memcpy((void *)(lVar2 + 0xc),(void *)(lVar3 + 0x290),sVar5);
    if (*(int *)(param_1 + 4) == 0x1000) {
      if (0x40 < iVar4) {
        FUN_10081d560("d1_both.c",0x407,"i <= EVP_MAX_MD_SIZE");
      }
      _memcpy((void *)(*(long *)(param_1 + 0x80) + 0x420),
              (void *)(*(long *)(param_1 + 0x80) + 0x290),sVar5);
      *(char *)(*(long *)(param_1 + 0x80) + 0x460) = (char)iVar4;
    }
    else {
      if (0x40 < iVar4) {
        FUN_10081d560("d1_both.c",0x40b,"i <= EVP_MAX_MD_SIZE");
      }
      _memcpy((void *)(*(long *)(param_1 + 0x80) + 0x461),
              (void *)(*(long *)(param_1 + 0x80) + 0x290),sVar5);
      *(char *)(*(long *)(param_1 + 0x80) + 0x4a1) = (char)iVar4;
    }
    lVar2 = *(long *)(param_1 + 0x88);
    if (*(int *)(lVar2 + 0x280) == 0) {
      sVar1 = *(short *)(lVar2 + 0x232);
      *(short *)(lVar2 + 0x230) = sVar1;
      *(short *)(lVar2 + 0x232) = sVar1 + 1;
    }
    else {
      sVar1 = *(short *)(lVar2 + 0x230);
    }
    *(undefined1 *)(lVar2 + 0x290) = 0x14;
    *(size_t *)(lVar2 + 0x298) = sVar5;
    *(short *)(lVar2 + 0x2a0) = sVar1;
    *(undefined8 *)(lVar2 + 0x2a8) = 0;
    *(size_t *)(lVar2 + 0x2b0) = sVar5;
    *(int *)(param_1 + 0x60) = iVar4 + 0xc;
    *(undefined4 *)(param_1 + 100) = 0;
    FUN_10080b5d0(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = param_3;
  }
  FUN_10080a2e0(param_1,0x16);
  return;
}

