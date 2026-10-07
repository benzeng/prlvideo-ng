
void FUN_100546f60(undefined8 *param_1,long param_2,ulong param_3,uint param_4,long *param_5,
                  int param_6)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = param_5[7];
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[3] = 0;
  param_1[4] = lVar6;
  *param_1 = &PTR_FUN_10111d918;
  param_1[5] = param_5;
  param_1[6] = 0;
  uVar3 = ((param_3 - 1) + (ulong)param_4) / (ulong)param_4 + 0x1f >> 5;
  iVar2 = (int)uVar3;
  *(int *)(param_1 + 7) = iVar2;
  *(uint *)((long)param_1 + 0x3c) = param_4;
  *(undefined4 *)(param_1 + 8) = 0;
  if ((param_6 != 0) && (lVar6 != 0)) {
    if (param_6 < 0) {
      lVar6 = 0;
      if (iVar2 != 0) {
        while( true ) {
          param_4 = param_4 << 5;
          lVar5 = (ulong)param_4 * lVar6;
          uVar1 = (int)param_3 - (int)lVar5;
          if (lVar5 + (ulong)param_4 <= param_3) {
            uVar1 = param_4;
          }
          (**(code **)(*param_5 + 0x48))(param_5,param_2 + lVar5,uVar1);
          if (*(uint *)(param_1 + 7) <= (int)lVar6 + 1U) break;
          param_4 = *(uint *)((long)param_1 + 0x3c);
          param_2 = param_1[1];
          param_3 = param_1[2];
          param_5 = (long *)param_1[5];
          lVar6 = lVar6 + 1;
        }
      }
      param_1[4] = 0;
    }
    else {
      uVar3 = (uVar3 & 0xffffffff) << 2;
      pvVar4 = operator_new__(uVar3,(nothrow_t *)PTR_nothrow_100ba21c8);
      param_1[6] = pvVar4;
      if (pvVar4 == (void *)0x0) {
        FUN_1008e3970("","TransMem",0,"CBufferCompression() failed to allocate bitmap");
        return;
      }
      *(uint *)(param_1 + 8) = (1 < param_6) + 1;
      _memset(pvVar4,0xff,uVar3);
    }
  }
  return;
}

