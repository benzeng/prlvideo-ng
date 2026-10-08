
void FUN_10090d45f(long param_1,long param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0x5aa;
    FUN_10090b6dd(param_1,"add range: atom is NULL");
  }
  else if (*(int *)(param_2 + 4) == 3) {
    if (*(int *)(param_2 + 0x40) == 0) {
      *(undefined4 *)(param_2 + 0x40) = 4;
      uVar2 = (*(code *)_xmlMalloc)((long)*(int *)(param_2 + 0x40) * 8);
      *(undefined8 *)(param_2 + 0x48) = uVar2;
      if (*(long *)(param_2 + 0x48) == 0) {
        FUN_10090b61c(param_1,"adding ranges");
        *(undefined4 *)(param_2 + 0x40) = 0;
        return;
      }
    }
    else if (*(int *)(param_2 + 0x40) <= *(int *)(param_2 + 0x44)) {
      *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) * 2;
      lVar3 = (*(code *)_xmlRealloc)
                        (*(undefined8 *)(param_2 + 0x48),(long)*(int *)(param_2 + 0x40) * 8);
      if (lVar3 == 0) {
        FUN_10090b61c(param_1,"adding ranges");
        *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) / 2;
        return;
      }
      *(long *)(param_2 + 0x48) = lVar3;
    }
    lVar3 = FUN_10090c274(param_1,param_3,param_4,param_5,param_6);
    if (lVar3 != 0) {
      *(undefined8 *)(lVar3 + 0x10) = param_7;
      iVar1 = *(int *)(param_2 + 0x44);
      *(long *)(*(long *)(param_2 + 0x48) + (long)iVar1 * 8) = lVar3;
      *(int *)(param_2 + 0x44) = iVar1 + 1;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = 0x5aa;
    FUN_10090b6dd(param_1,"add range: atom is not ranges");
  }
  return;
}

