
void FUN_10052a000(undefined8 *param_1,undefined2 param_2,undefined4 param_3,void *param_4,
                  uint param_5)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_100bc4f20;
  iVar1 = FUN_100529f10();
  FUN_100529ae0(param_1,param_2,1,param_5 + 0x10 + iVar1);
  *param_1 = &PTR_FUN_100bc4f20;
  lVar4 = 0;
  if (param_1[2] != 0) {
    lVar4 = *(long *)(param_1[2] + 0x10);
  }
  uVar2 = FUN_100529f10();
  uVar3 = (ulong)uVar2;
  *(undefined4 *)(lVar4 + uVar3) = param_3;
  *(undefined4 *)(lVar4 + 0xc + uVar3) = 0;
  *(undefined8 *)(lVar4 + 4 + uVar3) = 0;
  if ((param_4 != (void *)0x0) && (param_5 != 0)) {
    _memcpy((void *)(uVar3 + 0x10 + lVar4),param_4,(ulong)param_5);
  }
  return;
}

