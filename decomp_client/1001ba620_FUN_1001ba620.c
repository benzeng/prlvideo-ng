
void FUN_1001ba620(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((*(long *)(param_1 + 0x20) != 0) && (*(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) &&
     (*(long *)(param_1 + 0x28) != 0)) {
    iVar1 = FUN_10018a9d0();
    if (iVar1 != 0x30000004) {
      uVar2 = 0;
      if ((*(long *)(param_1 + 0x20) != 0) &&
         (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) {
        uVar2 = *(undefined8 *)(param_1 + 0x28);
      }
      iVar1 = FUN_10018a9d0(uVar2);
      if (iVar1 != 0x30000005) {
        uVar2 = 0;
        if ((*(long *)(param_1 + 0x20) != 0) &&
           (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) {
          uVar2 = *(undefined8 *)(param_1 + 0x28);
        }
        iVar1 = FUN_10018a9d0(uVar2);
        if (iVar1 != 0x3000000c) {
          uVar2 = 0;
          if ((*(long *)(param_1 + 0x20) != 0) &&
             (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) {
            uVar2 = *(undefined8 *)(param_1 + 0x28);
          }
          iVar1 = FUN_10018a9d0(uVar2);
          if (iVar1 != 0x3000000d) {
            *(undefined4 *)(param_1 + 0x1c) = 1;
            uVar2 = 0;
            if ((*(long *)(param_1 + 0x20) != 0) &&
               (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) {
              uVar2 = *(undefined8 *)(param_1 + 0x28);
            }
            FUN_1001b9c70(param_1,uVar2,0,1,*(undefined1 *)(param_1 + 0x19));
            return;
          }
        }
      }
    }
  }
  return;
}

