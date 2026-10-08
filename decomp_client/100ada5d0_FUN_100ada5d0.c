
void FUN_100ada5d0(long param_1,int param_2,int param_3,uint param_4,uint param_5,undefined4 param_6
                  ,undefined4 param_7,undefined4 param_8,undefined4 param_9,int param_10,
                  int param_11)

{
  long *plVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  double local_78;
  double local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  uint local_40;
  uint local_3c;
  undefined8 local_38;
  
  uVar6 = (ulong)param_4;
  if ((param_3 != 0) &&
     (local_40 = param_4, local_3c = param_5,
     cVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x90))
                       (*(long **)(param_1 + 0x30),param_10,&local_40), cVar3 == '\0')) {
    return;
  }
  if (param_11 == 2) {
    FUN_100ada4f0(param_1,param_10);
  }
  else if (param_11 == 1) {
    FUN_100ada350(param_1,param_10);
  }
  else {
    if (*(int *)(param_1 + 0x58) != 0) {
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
    if (((param_2 == 1) && (param_3 == 0)) &&
       (lVar5 = FUN_100319ca0(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x20)),
       *(char *)(lVar5 + 0x20) == '\0')) {
      plVar1 = *(long **)(param_1 + 0x30);
      pcVar2 = *(code **)(*plVar1 + 0xa0);
      local_38 = QCursor::pos();
      iVar4 = (*pcVar2)(plVar1,&local_38);
      if (iVar4 == 0) {
        uVar6 = (ulong)*(uint *)(param_1 + 0x5c);
        param_5 = *(uint *)(param_1 + 0x60);
      }
    }
    param_4 = (uint)uVar6;
    if ((param_2 == 1) && (param_3 != 0)) {
      *(ulong *)(param_1 + 0x5c) = uVar6 | (ulong)param_5 << 0x20;
    }
  }
  if (((param_2 != 1) || (param_3 != 0)) || (*(int *)(param_1 + 100) != param_10)) {
    local_78 = (double)(int)param_4;
    local_70 = (double)(int)param_5;
    local_60 = 0;
    local_68 = 0;
    local_54 = param_7;
    local_50 = param_8;
    local_4c = param_9;
    local_58 = param_6;
    local_48 = param_2;
    (**(code **)(**(long **)(param_1 + 0x18) + 0xd0))
              (*(long **)(param_1 + 0x18),&local_78,param_3 != 0);
  }
  return;
}

