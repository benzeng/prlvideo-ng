
void FUN_1002ac6b0(long param_1,uint param_2,int param_3,int param_4,int param_5,int param_6)

{
  long *plVar1;
  uint *puVar2;
  ulong uVar3;
  long lVar4;
  
  uVar3 = (ulong)param_2;
  lVar4 = uVar3 * 0x8f0;
  if (((*(long *)(param_1 + 0x9c0 + lVar4) != 0) ||
      (((*(long *)(param_1 + 0x9b8 + lVar4) == 0 && (*(char *)(param_1 + 0x870) == '\0')) ||
       (1 < *(int *)(param_1 + 0x8c0))))) && (*(char *)(param_1 + 0x9dc + lVar4) != '\0')) {
    puVar2 = (uint *)(param_1 + 0x930 + lVar4);
    plVar1 = (long *)(*(long *)(param_1 + 0x978 + lVar4) + 0xf0);
    *plVar1 = *plVar1 + 1;
    if ((*(char *)(param_1 + 0x8d0) != '\0') && (*(char *)(param_1 + 0x870) == '\0')) {
      if (*(uint *)(param_1 + 0x940 + lVar4) < 0x1f) {
        FUN_1002ac850(param_1,uVar3,param_3,param_4,param_5,param_6);
        FUN_1004b2ab0(DAT_1011cc7f0,uVar3,*(undefined8 *)(param_1 + 0x988 + lVar4),
                      *(undefined4 *)(param_1 + 0x990 + lVar4),param_3,param_4,param_5 - param_3,
                      param_6 - param_4);
      }
      else {
        FUN_1004b2ab0(DAT_1011cc7f0,param_2,(ulong)*puVar2 + *(long *)(param_1 + 0x920),
                      *(undefined4 *)(param_1 + 0x934 + lVar4),param_3,param_4,param_5 - param_3,
                      param_6 - param_4);
      }
    }
    FUN_100433ca0(*(undefined8 *)(*(long *)(param_1 + 8) + 0xf0),uVar3,*puVar2,param_3,param_4,
                  param_5 - param_3,param_6 - param_4);
  }
  return;
}

