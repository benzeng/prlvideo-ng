
void FUN_10090da53(long param_1,long param_2,long param_3,long param_4,int param_5,int param_6,
                  int param_7)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  int local_1c;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0x5aa;
    FUN_10090b6dd(param_1,"add state: state is NULL");
  }
  else if (param_4 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0x5aa;
    FUN_10090b6dd(param_1,"add state: target is NULL");
  }
  else if (param_7 == 0) {
    local_1c = *(int *)(param_2 + 0x14);
    do {
      local_1c = local_1c + -1;
      if (local_1c < 0) goto LAB_10090db3f;
      plVar1 = (long *)(*(long *)(param_2 + 0x18) + (long)local_1c * 0x18);
    } while ((((*plVar1 != param_3) || ((int)plVar1[1] != *(int *)(param_4 + 0xc))) ||
             (*(int *)((long)plVar1 + 0xc) != param_5)) || ((int)plVar1[2] != param_6));
  }
  else {
LAB_10090db3f:
    if (*(int *)(param_2 + 0x10) == 0) {
      *(undefined4 *)(param_2 + 0x10) = 8;
      uVar2 = (*(code *)_xmlMalloc)((long)*(int *)(param_2 + 0x10) * 0x18);
      *(undefined8 *)(param_2 + 0x18) = uVar2;
      if (*(long *)(param_2 + 0x18) == 0) {
        FUN_10090b61c(param_1,"adding transition");
        *(undefined4 *)(param_2 + 0x10) = 0;
        return;
      }
    }
    else if (*(int *)(param_2 + 0x10) <= *(int *)(param_2 + 0x14)) {
      *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) * 2;
      lVar3 = (*(code *)_xmlRealloc)
                        (*(undefined8 *)(param_2 + 0x18),(long)*(int *)(param_2 + 0x10) * 0x18);
      if (lVar3 == 0) {
        FUN_10090b61c(param_1,"adding transition");
        *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) / 2;
        return;
      }
      *(long *)(param_2 + 0x18) = lVar3;
    }
    *(long *)(*(long *)(param_2 + 0x18) + (long)*(int *)(param_2 + 0x14) * 0x18) = param_3;
    *(undefined4 *)(*(long *)(param_2 + 0x18) + (long)*(int *)(param_2 + 0x14) * 0x18 + 8) =
         *(undefined4 *)(param_4 + 0xc);
    *(int *)(*(long *)(param_2 + 0x18) + (long)*(int *)(param_2 + 0x14) * 0x18 + 0xc) = param_5;
    *(int *)(*(long *)(param_2 + 0x18) + (long)*(int *)(param_2 + 0x14) * 0x18 + 0x10) = param_6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    FUN_10090d917(param_1,param_4,*(undefined4 *)(param_2 + 0xc));
  }
  return;
}

