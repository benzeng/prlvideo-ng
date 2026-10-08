
void FUN_100292e90(long *param_1,int param_2)

{
  long lVar1;
  int iVar2;
  uint in_EAX;
  int iVar3;
  int iVar4;
  int extraout_var;
  undefined8 uVar5;
  undefined8 uStack_38;
  
  if ((((param_1[5] != 0) && (*(int *)(param_1[5] + 4) != 0)) && (-1 < param_2)) &&
     (param_1[6] != 0)) {
    uStack_38 = (ulong)in_EAX;
    lVar1 = *(long *)(param_1[6] + 0x10);
    if (lVar1 != 0) {
      _PrlHandle_AddRef(lVar1);
    }
    iVar3 = _PrlJob_GetDataPtr(lVar1,0,(long)&uStack_38 + 4);
    if (lVar1 != 0) {
      _PrlHandle_Free(lVar1);
    }
    if (-1 < iVar3) {
      iVar2 = uStack_38._4_4_;
      iVar4 = QImage::size();
      QImage::size();
      iVar3 = -0x7ffffff7;
      if (extraout_var * iVar4 * 4 <= iVar2) {
        lVar1 = *(long *)(param_1[6] + 0x10);
        if (lVar1 != 0) {
          _PrlHandle_AddRef(lVar1);
        }
        uVar5 = QImage::bits();
        iVar3 = _PrlJob_GetDataPtr(lVar1,uVar5,(long)&uStack_38 + 4);
        if (lVar1 != 0) {
          _PrlHandle_Free(lVar1);
        }
      }
    }
    (**(code **)(*param_1 + 0xb0))(param_1,iVar3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100292fb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))(param_1,0x80000009);
  return;
}

