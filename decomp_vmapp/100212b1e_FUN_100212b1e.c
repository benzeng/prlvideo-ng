
undefined4 FUN_100212b1e(void *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  
  *(undefined4 *)((long)param_1 + 0x60) = 0;
  *(undefined4 *)((long)param_1 + 100) = 0;
  *(undefined4 *)((long)param_1 + 0xa4) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x120) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0xa0) = 0;
  if (*(long *)((long)param_1 + 0x28) == 0) {
    *(undefined4 *)((long)param_1 + 0xa0) = 1;
    if ((*(long *)((long)param_1 + 0x98) == 0) && (iVar2 = FUN_1001f7f2c(param_1), iVar2 == -1)) {
      return 0xffffffff;
    }
    lVar1 = *(long *)((long)param_1 + 0x98);
    *(undefined4 *)(lVar1 + 200) = 1;
    uVar3 = FUN_1001eadb1(lVar1);
    *(undefined8 *)((long)param_1 + 0x28) = uVar3;
    if (*(long *)((long)param_1 + 0x28) == 0) {
      return 0xffffffff;
    }
    uVar3 = FUN_1001f7d2b(*(undefined8 *)(lVar1 + 0x98));
    *(undefined8 *)(lVar1 + 0x30) = uVar3;
    if (*(long *)(lVar1 + 0x30) == 0) {
      return 0xffffffff;
    }
    **(undefined8 **)(lVar1 + 0x30) = *(undefined8 *)((long)param_1 + 0x28);
    *(undefined4 *)(lVar1 + 0x38) = 1;
  }
  if (*(long *)(*(long *)((long)param_1 + 0x28) + 0x90) != 0) {
    _xmlHashScan(*(xmlHashTablePtr *)(*(long *)((long)param_1 + 0x28) + 0x90),FUN_100209a48,param_1)
    ;
  }
  return 0;
}

