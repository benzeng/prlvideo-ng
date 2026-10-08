
void FUN_10037ac20(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (((*(long *)(param_1 + 0x30) != 0) && (*(int *)(*(long *)(param_1 + 0x30) + 4) != 0)) &&
     (*(long *)(param_1 + 0x38) != 0)) {
    lVar2 = FUN_100323e00();
    if ((lVar2 != 0) && (*(int *)(*(long *)(param_2 + 0x28) + 4) != 0)) {
      uVar3 = 0;
      if ((*(long *)(param_1 + 0x30) != 0) &&
         (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x30) + 4) != 0)) {
        uVar3 = 0;
        if (*(long *)(param_1 + 0x38) != 0) {
          uVar3 = FUN_100323e00(*(long *)(param_1 + 0x38));
        }
      }
      lVar2 = FUN_100319cd0(uVar3);
      if (*(char *)(lVar2 + 0x31) != '\0') {
        uVar3 = 0;
        if ((*(long *)(param_1 + 0x30) != 0) &&
           (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x30) + 4) != 0)) {
          uVar3 = 0;
          if (*(long *)(param_1 + 0x38) != 0) {
            uVar3 = FUN_100323e00(*(long *)(param_1 + 0x38));
          }
        }
        uVar3 = FUN_100319390(uVar3);
        iVar1 = FUN_10018a9d0(uVar3);
        if (iVar1 == 0x30000004) {
          uVar3 = 0;
          if ((*(long *)(param_1 + 0x30) != 0) &&
             (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x30) + 4) != 0)) {
            uVar3 = 0;
            if (*(long *)(param_1 + 0x38) != 0) {
              uVar3 = FUN_100323e00(*(long *)(param_1 + 0x38));
            }
          }
          uVar3 = FUN_100319c40(uVar3);
          FUN_10032ee40(uVar3,param_2 + 0x28);
          return;
        }
      }
    }
  }
  return;
}

