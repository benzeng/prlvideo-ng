
undefined8 FUN_100537a40(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (0x813 < *(ushort *)(param_2 + 0x14)) {
    lVar1 = FUN_1002a6010(param_2);
    if (*(int *)(lVar1 + 4) == 2) {
      uVar2 = FUN_100538520(*(undefined8 *)(param_1 + 0x38),param_2);
      return uVar2;
    }
  }
  return 0xf0000003;
}

