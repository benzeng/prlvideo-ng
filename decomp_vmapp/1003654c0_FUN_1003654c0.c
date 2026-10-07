
uint FUN_1003654c0(long param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  undefined8 local_38;
  
  uVar5 = FUN_1003646f0(param_1,param_2,1);
  if (uVar5 == 0) {
    lVar2 = *(long *)(param_1 + 8);
    iVar6 = *(int *)(lVar2 + 0x10);
    if (iVar6 != 0) {
      lVar7 = *(long *)(lVar2 + 0x18);
      if (*(int *)(lVar7 + 0x28) != 1) {
        if (*(int *)(lVar7 + 0x28) == 2) {
          lVar7 = FUN_10035bfc0(lVar2);
          lVar3 = *(long *)(lVar2 + 0x18);
          *(long *)(lVar3 + 0x38) = lVar7;
          *(long *)(lVar7 + 0x30) = lVar3;
          *(long *)(lVar2 + 0x18) = lVar7;
          iVar6 = *(int *)(lVar2 + 0x10);
        }
        *(undefined8 *)(lVar2 + 0x20) = 0;
        iVar1 = *(int *)(lVar2 + 0x28);
        *(int *)(lVar7 + 4) = iVar1;
        *(undefined4 *)(lVar7 + 0x1c) = 0xffffffff;
        *(int *)(lVar7 + 0x24) = iVar6;
        *(undefined4 *)(lVar7 + 0x28) = 1;
        if ((iVar1 - 3U < 3) && (*(int *)(lVar7 + 8) != 0)) {
          (*DAT_1011c56e0)(0x8914);
        }
      }
    }
    cVar4 = FUN_1003651d0(param_1,param_2,&local_38);
    if (cVar4 != '\0') {
      iVar6 = FUN_10036ae80(*(undefined8 *)(param_1 + 0xb0),param_2,
                            **(undefined8 **)(param_1 + 0xb8),local_38,*param_3,param_3[2],
                            param_3[3],param_3[1],param_3[4]);
      uVar5 = (uint)(iVar6 != 0);
    }
  }
  return uVar5;
}

