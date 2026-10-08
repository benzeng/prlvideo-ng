
int FUN_100d6c3c0(long param_1,undefined4 param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  undefined1 local_39;
  uint local_38;
  undefined4 local_34;
  
  plVar1 = *(long **)(param_1 + 0x10);
  if (plVar1 == (long *)0x0) {
    FUN_100df99c0("","WinRegistry",0,"OA00005.11:");
    iVar2 = 0x8158003;
  }
  else if (*(int *)(*param_4 + 4) == 0) {
    FUN_100df99c0("","WinRegistry",0,"OA00005.12:");
    iVar2 = 0x8158014;
  }
  else {
    local_34 = 0;
    local_38 = 0;
    iVar2 = (**(code **)(*plVar1 + 0x48))(plVar1,param_2,param_3,0,&local_39,1,&local_38,&local_34);
    if ((iVar2 == 0x8000000) || (iVar2 == 0x8158016)) {
      uVar3 = (ulong)local_38;
      iVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 0x38))
                        (*(long **)(param_1 + 0x10),param_2,param_4,local_34);
      if (iVar2 == 0x8000000) {
        pvVar4 = operator_new__(uVar3);
        iVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 0x48))
                          (*(long **)(param_1 + 0x10),param_2,param_3,0,pvVar4,uVar3,&local_38,0);
        if (iVar2 == 0x8000000) {
          iVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 0x50))
                            (*(long **)(param_1 + 0x10),param_2,param_4,local_34,pvVar4,uVar3);
          operator_delete(pvVar4);
          if (iVar2 == 0x8000000) {
            iVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 0x40))
                              (*(long **)(param_1 + 0x10),param_2,param_3);
            if (iVar2 == 0x8000000) {
              (**(code **)(**(long **)(param_1 + 8) + 0x38))(*(long **)(param_1 + 8),1);
              iVar2 = 0x8000000;
            }
          }
        }
        else {
          operator_delete(pvVar4);
        }
      }
    }
  }
  return iVar2;
}

