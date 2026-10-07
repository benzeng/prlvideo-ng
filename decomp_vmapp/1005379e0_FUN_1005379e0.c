
undefined8 FUN_1005379e0(long param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 *puVar4;
  
  uVar2 = 0xf0000003;
  if (0xb < *(ushort *)(param_2 + 0x14)) {
    lVar3 = FUN_1002a6010(param_2);
    cVar1 = FUN_1005389d0(*(long *)(param_1 + 0x40) + 0x30,*(undefined4 *)(lVar3 + 4),param_2);
    uVar2 = 0xffffffff;
    if (cVar1 == '\0') {
      puVar4 = (undefined4 *)FUN_1002a6010(param_2);
      *puVar4 = 0xffffffff;
      uVar2 = 0;
    }
  }
  return uVar2;
}

