
undefined8 FUN_1004ce580(long *param_1,long param_2)

{
  long lVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  if ((3 < *(ushort *)(param_2 + 0x14)) && (*(short *)(param_2 + 0x16) != 0)) {
    lVar1 = FUN_1002a6120(param_2,0,1);
    if (lVar1 != 0) {
      puVar2 = (undefined4 *)FUN_1002a6010(param_2);
      uVar3 = FUN_1004cfa70(*param_1 + 0x48,lVar1,*puVar2);
      return uVar3;
    }
  }
  return 0xf0000003;
}

