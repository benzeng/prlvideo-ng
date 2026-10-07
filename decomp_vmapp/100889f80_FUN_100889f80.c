
void FUN_100889f80(int *param_1,long param_2,int *param_3,void *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  *param_3 = 0;
  if (0 < param_5) {
    iVar4 = param_1[1];
    if (0x50 < iVar4) {
      FUN_10081d560("encode.c",0x9f,"ctx->length <= (int)sizeof(ctx->enc_data)");
      iVar4 = param_1[1];
    }
    iVar1 = *param_1;
    if (iVar1 + param_5 < iVar4) {
      _memcpy((void *)((long)param_1 + (long)iVar1 + 8),param_4,(long)param_5);
      *param_1 = *param_1 + param_5;
    }
    else {
      iVar2 = 0;
      if (iVar1 == 0) goto LAB_10088a07e;
      iVar4 = iVar4 - iVar1;
      _memcpy((void *)((long)param_1 + (long)iVar1 + 8),param_4,(long)iVar4);
      param_4 = (void *)((long)param_4 + (long)iVar4);
      param_5 = param_5 - iVar4;
      iVar2 = FUN_10088a0b0(param_2,param_1 + 2,param_1[1]);
      *param_1 = 0;
      *(undefined2 *)(param_2 + iVar2) = 10;
      param_2 = param_2 + 1 + (long)iVar2;
      iVar2 = iVar2 + 1;
      while( true ) {
        iVar4 = param_1[1];
LAB_10088a07e:
        if (param_5 < iVar4) break;
        iVar4 = FUN_10088a0b0(param_2,param_4);
        param_4 = (void *)((long)param_4 + (long)param_1[1]);
        param_5 = param_5 - param_1[1];
        lVar3 = (long)iVar4;
        *(undefined1 *)(param_2 + lVar3) = 10;
        *(undefined1 *)(param_2 + 1 + lVar3) = 0;
        param_2 = param_2 + 1 + lVar3;
        iVar2 = iVar2 + 1 + iVar4;
      }
      if (param_5 != 0) {
        _memcpy(param_1 + 2,param_4,(long)param_5);
      }
      *param_1 = param_5;
      *param_3 = iVar2;
    }
  }
  return;
}

