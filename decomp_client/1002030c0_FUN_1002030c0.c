
/* WARNING: Removing unreachable block (ram,0x000100203146) */
/* WARNING: Removing unreachable block (ram,0x000100203176) */

long * FUN_1002030c0(long *param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  long *plVar5;
  
  if (DAT_102271188 == 0) {
    DAT_102271188 = FUN_1001ce5a0("SdkHandleWrap",0xffffffffffffffff,1);
  }
  uVar2 = DAT_102271188;
  uVar4 = QVariant::userType();
  if (uVar2 == uVar4) {
    plVar5 = (long *)QVariant::constData();
    lVar1 = *plVar5;
    *param_1 = lVar1;
    if (lVar1 != 0) {
      _PrlHandle_AddRef();
    }
  }
  else {
    cVar3 = QVariant::convert(param_2,(void *)(ulong)uVar2);
    if (cVar3 == '\0') {
      *param_1 = 0;
    }
    else {
      *param_1 = 0;
    }
  }
  return param_1;
}

