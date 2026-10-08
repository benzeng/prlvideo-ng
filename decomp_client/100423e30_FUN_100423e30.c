
void FUN_100423e30(long param_1)

{
  undefined1 uVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar3;
  
  iVar2 = QComboBox::currentIndex();
  if (iVar2 == 0) {
    plVar3 = *(long **)(*(long *)(param_1 + 0x60) + 0x90);
    (**(code **)(*plVar3 + 0x68))(plVar3,0);
    plVar3 = *(long **)(*(long *)(param_1 + 0x60) + 0x50);
    (**(code **)(*plVar3 + 0x68))(plVar3,1);
    plVar3 = *(long **)(*(long *)(param_1 + 0x60) + 0x58);
    (**(code **)(*plVar3 + 0x68))(plVar3,1);
    plVar3 = *(long **)(*(long *)(param_1 + 0x60) + 0x60);
    (**(code **)(*plVar3 + 0x68))(plVar3,1);
    plVar3 = *(long **)(*(long *)(param_1 + 0x60) + 0x68);
    (**(code **)(*plVar3 + 0x68))(plVar3,1);
    plVar3 = *(long **)(*(long *)(param_1 + 0x60) + 0x70);
    (**(code **)(*plVar3 + 0x68))(plVar3,1);
    plVar3 = *(long **)(*(long *)(param_1 + 0x60) + 0x88);
    (**(code **)(*plVar3 + 0x68))(plVar3,1);
    plVar3 = *(long **)(*(long *)(param_1 + 0x60) + 0x78);
    (**(code **)(*plVar3 + 0x68))(plVar3,1);
    plVar3 = *(long **)(*(long *)(param_1 + 0x60) + 0x80);
    (**(code **)(*plVar3 + 0x68))(plVar3,1);
    plVar3 = *(long **)(*(long *)(param_1 + 0x60) + 0xb8);
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar3 + 0x68);
    uVar1 = 1;
  }
  else {
    iVar2 = QComboBox::currentIndex();
    plVar3 = *(long **)(*(long *)(param_1 + 0x60) + 0x50);
    (**(code **)(*plVar3 + 0x68))(plVar3,0);
    plVar3 = *(long **)(*(long *)(param_1 + 0x60) + 0x58);
    (**(code **)(*plVar3 + 0x68))(plVar3,0);
    plVar3 = *(long **)(*(long *)(param_1 + 0x60) + 0x60);
    (**(code **)(*plVar3 + 0x68))(plVar3,0);
    plVar3 = *(long **)(*(long *)(param_1 + 0x60) + 0x68);
    (**(code **)(*plVar3 + 0x68))(plVar3,0);
    plVar3 = *(long **)(*(long *)(param_1 + 0x60) + 0x70);
    (**(code **)(*plVar3 + 0x68))(plVar3,0);
    plVar3 = *(long **)(*(long *)(param_1 + 0x60) + 0x88);
    (**(code **)(*plVar3 + 0x68))(plVar3,0);
    plVar3 = *(long **)(*(long *)(param_1 + 0x60) + 0x78);
    (**(code **)(*plVar3 + 0x68))(plVar3,0);
    plVar3 = *(long **)(*(long *)(param_1 + 0x60) + 0x80);
    (**(code **)(*plVar3 + 0x68))(plVar3,0);
    plVar3 = *(long **)(*(long *)(param_1 + 0x60) + 0xb8);
    (**(code **)(*plVar3 + 0x68))(plVar3,0);
    plVar3 = *(long **)(*(long *)(param_1 + 0x60) + 0x90);
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar3 + 0x68);
    if (iVar2 == 2) {
      uVar1 = FUN_10013ba10(plVar3);
    }
    else {
      uVar1 = 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000100423ffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar3,uVar1);
  return;
}

