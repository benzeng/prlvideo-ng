
void FUN_1009a5830(int *param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  undefined4 local_20;
  int local_1c;
  
  *param_1 = -0x7ffffff9;
  *(undefined1 *)(param_1 + 1) = 0;
  lVar1 = *param_2;
  *(long *)(param_1 + 2) = lVar1;
  if (lVar1 != 0) {
    _PrlHandle_AddRef();
    lVar1 = *(long *)(param_1 + 2);
    if (lVar1 != 0) {
      local_1c = 0;
      local_20 = 0;
      iVar2 = _PrlSrv_IsConnected(lVar1,&local_1c,&local_20);
      *param_1 = iVar2;
      if ((iVar2 < 0) || (local_1c == 0)) {
        iVar2 = FUN_100d44330(param_1 + 2,0,0,2,100000,4);
        *param_1 = iVar2;
        if (-1 < iVar2) {
          *(undefined1 *)(param_1 + 1) = 1;
        }
      }
    }
  }
  return;
}

