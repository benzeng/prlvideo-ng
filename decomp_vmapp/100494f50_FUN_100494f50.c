
undefined8 FUN_100494f50(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_2 + 8);
  iVar1 = *(int *)(*(long *)(param_2 + 0x10) + 4);
  if (iVar1 != 0) {
    iVar3 = iVar3 + 4 + iVar1;
  }
  if ((iVar3 + 0x3cU <= (uint)*(ushort *)(param_3 + 0x14)) &&
     (lVar2 = FUN_1002a6010(param_3), lVar2 != 0)) {
    FUN_100494fd0(param_1,param_2,lVar2);
    return 0;
  }
  FUN_1008e3970("TCHOST","ToolsCenterHost",0,"Not enough space for cmd pass to guest");
  return 0x80034001;
}

