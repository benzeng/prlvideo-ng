
ulong FUN_1003655d0(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  undefined8 in_RAX;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined8 local_28;
  
  local_28 = in_RAX;
  uVar6 = FUN_1003646f0(param_1,param_2,0);
  if ((int)uVar6 == 0) {
    plVar7 = (long *)FUN_1003443e0(param_2,0);
    uVar6 = 6;
    if (*plVar7 != 0) {
      lVar2 = *(long *)(param_1 + 8);
      iVar5 = *(int *)(lVar2 + 0x10);
      if (iVar5 != 0) {
        lVar8 = *(long *)(lVar2 + 0x18);
        if (*(int *)(lVar8 + 0x28) != 1) {
          if (*(int *)(lVar8 + 0x28) == 2) {
            lVar8 = FUN_10035bfc0(lVar2);
            lVar3 = *(long *)(lVar2 + 0x18);
            *(long *)(lVar3 + 0x38) = lVar8;
            *(long *)(lVar8 + 0x30) = lVar3;
            *(long *)(lVar2 + 0x18) = lVar8;
            iVar5 = *(int *)(lVar2 + 0x10);
          }
          *(undefined8 *)(lVar2 + 0x20) = 0;
          iVar1 = *(int *)(lVar2 + 0x28);
          *(int *)(lVar8 + 4) = iVar1;
          *(undefined4 *)(lVar8 + 0x1c) = 0xffffffff;
          *(int *)(lVar8 + 0x24) = iVar5;
          *(undefined4 *)(lVar8 + 0x28) = 1;
          if ((iVar1 - 3U < 3) && (*(int *)(lVar8 + 8) != 0)) {
            (*DAT_1011c56e0)(0x8914);
          }
        }
      }
      cVar4 = FUN_1003651d0(param_1,param_2,&local_28);
      uVar6 = 0;
      if (cVar4 != '\0') {
        iVar5 = FUN_10036a9d0(*(undefined8 *)(param_1 + 0xb0),param_2,
                              **(undefined8 **)(param_1 + 0xb8),local_28);
        uVar6 = (ulong)(iVar5 != 0);
      }
    }
  }
  return uVar6;
}

