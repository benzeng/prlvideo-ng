
void FUN_1000cee20(long param_1)

{
  uint uVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0x1f0);
  if (uVar1 == 0) {
    FUN_1000c6990(param_1);
    return;
  }
  if ((uVar1 & 0x1000000) == 0) {
    if ((uVar1 & 0x2000000) == 0) {
      if ((uVar1 & 0xc000000) == 0) {
        if ((uVar1 & 0x20200000) != 0) {
          FUN_1005a5960(param_1 + 0x370);
        }
      }
      else {
        cVar3 = FUN_1000d5f90(param_1 + 0x208);
        iVar4 = *(int *)(param_1 + 500);
        if (cVar3 == '\0') {
          if (iVar4 == 0) {
            *(undefined4 *)(param_1 + 500) = 0x80000053;
            iVar4 = -0x7fffffad;
          }
        }
        else if (iVar4 == 0) goto LAB_1000cef46;
        if ((*(byte *)(param_1 + 499) & 4) == 0) {
          if (iVar4 == -0x7ffdffe0) {
            *(undefined4 *)(param_1 + 500) = 0x80000503;
          }
        }
        else {
          FUN_1000d22a0(param_1);
        }
      }
    }
    else {
      FUN_1000cb6c0(param_1);
    }
  }
  else if (*(int *)(param_1 + 500) == 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x2b0) + 0x1940);
    if (lVar2 != 0) {
      *(undefined1 *)(lVar2 + 0xd8) = 0;
    }
  }
  else {
    FUN_1008e3970("","vm",0,"Error 0x%X occurred when trying to suspend the VM!");
    FUN_1000d22a0(param_1);
    cVar3 = FUN_1000a7e30(*(undefined8 *)(param_1 + 0x2b0));
    if (cVar3 != '\0') {
      FUN_1000d1e80(param_1,0);
    }
  }
LAB_1000cef46:
  FUN_10008f760(param_1,*(undefined4 *)(param_1 + 500));
  FUN_1000c6990(param_1);
  FUN_1008e3970("","vm",0,"SaRe action 0x%X completed (status = 0x%X)",
                *(undefined4 *)(param_1 + 0x1f0),*(undefined4 *)(param_1 + 500));
  FUN_10008fdb0(*(undefined8 *)(param_1 + 0x2b0),0x4e46,*(undefined4 *)(param_1 + 500));
  return;
}

