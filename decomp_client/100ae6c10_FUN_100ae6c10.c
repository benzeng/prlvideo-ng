
void FUN_100ae6c10(long param_1,char param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  
  iVar2 = (param_2 == '\0') + 1;
  lVar1 = *(long *)(param_1 + 8);
  if (*(int *)(lVar1 + 4) == 0) {
    if (iVar2 <= DAT_10230ffd0) {
      FUN_100df99c0("CHRCLIENT","ChrProtocol",iVar2,"\t\tDisplay configuration is inValid");
      return;
    }
  }
  else {
    lVar3 = 0;
    if (0 < *(int *)(lVar1 + 4)) {
      uVar4 = 0;
      do {
        if (iVar2 <= DAT_10230ffd0) {
          lVar1 = lVar1 + *(long *)(lVar1 + 0x10);
          FUN_100df99c0("CHRCLIENT","ChrProtocol",iVar2,"\t\t%d: [%d;%d] w=%d; h=%d",
                        uVar4 & 0xffffffff,*(undefined4 *)(lVar3 + 0x18 + lVar1),
                        *(undefined4 *)(lVar3 + 0x1c + lVar1),*(undefined2 *)(lVar3 + 4 + lVar1),
                        *(undefined2 *)(lVar3 + 6 + lVar1));
          lVar1 = *(long *)(param_1 + 8);
        }
        uVar4 = uVar4 + 1;
        lVar3 = lVar3 + 0x20;
      } while ((long)uVar4 < (long)*(int *)(lVar1 + 4));
    }
  }
  return;
}

