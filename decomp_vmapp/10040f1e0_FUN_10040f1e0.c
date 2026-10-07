
void FUN_10040f1e0(long param_1,uint *param_2,long param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (*(char *)(param_1 + 0x30) == '\0') {
    iVar2 = _AudioConverterFillComplexBuffer
                      (*(undefined8 *)(param_1 + 0x60),FUN_10040f290,param_1,param_2,param_3,0);
    if (1 < iVar2 + 1U) {
      iVar3 = FUN_1008e38f0(&DAT_101119cd8);
      if (iVar3 != 0) {
        FUN_1008e3970("","PrlAudioCore",0,"Failed to convert audio data (%d)",iVar2);
        return;
      }
    }
  }
  else {
    ___bzero(*(undefined8 *)(param_3 + 0x10),*(undefined4 *)(param_3 + 0xc));
    lVar1 = *(long *)(param_1 + 8);
    uVar4 = *(int *)(lVar1 + 0x68) - *(int *)(lVar1 + 100) & *(uint *)(lVar1 + 0x70);
    lVar1 = *(long *)(param_1 + 8);
    if (*param_2 <= uVar4) {
      uVar4 = *param_2;
    }
    *(uint *)(lVar1 + 100) = uVar4 + *(int *)(lVar1 + 100) & *(uint *)(lVar1 + 0x70);
  }
  return;
}

