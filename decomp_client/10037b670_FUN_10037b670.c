
void FUN_10037b670(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (((*(long *)(param_1 + 0x30) != 0) && (*(int *)(*(long *)(param_1 + 0x30) + 4) != 0)) &&
     (*(long *)(param_1 + 0x38) != 0)) {
    lVar2 = FUN_100323e00();
    if (lVar2 != 0) {
      iVar1 = QGuiApplication::mouseButtons();
      if ((iVar1 != 0) && (*(char *)(param_1 + 0x40) == '\0')) {
        uVar3 = 0;
        if ((*(long *)(param_1 + 0x30) != 0) &&
           (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x30) + 4) != 0)) {
          uVar3 = 0;
          if (*(long *)(param_1 + 0x38) != 0) {
            uVar3 = FUN_100323e00(*(long *)(param_1 + 0x38));
          }
        }
        uVar3 = FUN_100319ca0(uVar3);
        FUN_100334540(uVar3,param_1,param_2 & 0xffffffff,param_2 >> 0x20,0,1);
        *(undefined1 *)(param_1 + 0x40) = 1;
      }
    }
  }
  return;
}

