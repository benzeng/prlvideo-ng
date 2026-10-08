
void FUN_100348b00(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((*(long *)(param_1 + 0x18) != 0) && (*(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) &&
     (*(long *)(param_1 + 0x20) != 0)) {
    cVar1 = FUN_10018ffd0();
    if (cVar1 != '\0') {
      uVar3 = 0;
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
        uVar3 = *(undefined8 *)(param_1 + 0x20);
      }
      iVar2 = FUN_10018a9d0(uVar3);
      if (iVar2 == 0x30000005) {
        uVar3 = 0;
        if ((*(long *)(param_1 + 0x18) != 0) &&
           (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
          uVar3 = *(undefined8 *)(param_1 + 0x20);
        }
        FUN_100192d10(uVar3,0x27f,0,0);
        return;
      }
    }
  }
  return;
}

