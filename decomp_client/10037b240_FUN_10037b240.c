
void FUN_10037b240(long param_1,long param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (((*(long *)(param_1 + 0x30) != 0) && (*(int *)(*(long *)(param_1 + 0x30) + 4) != 0)) &&
     (*(long *)(param_1 + 0x38) != 0)) {
    lVar4 = FUN_100323dd0();
    if (lVar4 != 0) {
      uVar5 = 0;
      if ((*(long *)(param_1 + 0x30) != 0) &&
         (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x30) + 4) != 0)) {
        uVar5 = *(undefined8 *)(param_1 + 0x38);
      }
      uVar5 = FUN_100323dd0(uVar5);
      iVar3 = FUN_10018a9d0(uVar5);
      if (iVar3 != 0x30000005) {
        uVar5 = 0;
        if ((*(long *)(param_1 + 0x30) != 0) &&
           (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x30) + 4) != 0)) {
          uVar5 = 0;
          if (*(long *)(param_1 + 0x38) != 0) {
            uVar5 = FUN_100323e00(*(long *)(param_1 + 0x38));
          }
        }
        uVar5 = FUN_100319ca0(uVar5);
        cVar2 = FUN_100334520(uVar5,*(undefined8 *)(param_2 + 0x40));
        if ((cVar2 == '\0') || (uVar1 = *(uint *)(param_2 + 0x38), (uVar1 & 7) == 0)) {
          *(byte *)(param_2 + 0x12) = *(byte *)(param_2 + 0x12) & 0xfb;
        }
        else if ((uVar1 & 1) == 0) {
          QDropEvent::setDropAction(param_2,1);
          *(byte *)(param_2 + 0x12) = *(byte *)(param_2 + 0x12) | 4;
        }
        else {
          *(uint *)(param_2 + 0x34) = uVar1;
          *(byte *)(param_2 + 0x12) = *(byte *)(param_2 + 0x12) | 4;
        }
      }
    }
  }
  return;
}

