
undefined8 FUN_1003b8930(undefined4 *param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char *pcVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  
  *param_1 = 0;
  puVar1 = (undefined8 *)(param_1 + 2);
  *(undefined8 *)(param_1 + 2) = param_3;
  *(long *)(param_1 + 4) = param_2;
  plVar6 = (long *)**(long **)(param_2 + 0x120);
  if (plVar6 == (long *)0x0) {
    plVar6 = *(long **)(param_2 + 0xf0);
    while (lVar4 = *plVar6, lVar4 != 0) {
      uVar5 = FUN_1003b8b60(param_1,lVar4);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      plVar6 = *(long **)(lVar4 + 8);
    }
  }
  else {
    do {
      lVar4 = (**(code **)(*plVar6 + 0x20))(plVar6);
      if (lVar4 == 0) {
        lVar4 = (**(code **)(*plVar6 + 0x18))(plVar6);
        if (lVar4 == 0) {
          lVar4 = (**(code **)(*plVar6 + 0x10))(plVar6);
          if (lVar4 != 0) {
            FUN_10038e8e0(*puVar1,
                          "CallBlock[ %d ]: Function=%d InputBB=%d OutputBB=%d ParentBB=%d\n",
                          *(undefined4 *)(lVar4 + 0x20),
                          *(undefined4 *)(*(long *)(lVar4 + 0x40) + 0x20),
                          *(undefined4 *)(*(long *)(lVar4 + 0x28) + 0x20),
                          *(undefined4 *)(*(long *)(lVar4 + 0x30) + 0x20),
                          *(undefined4 *)(*(long *)(lVar4 + 0x38) + 0x20));
          }
        }
        else {
          FUN_10038e8e0(*puVar1,"FuncBlock[ %d ]: FirstBB=%d LastBB=%d ",
                        *(undefined4 *)(lVar4 + 0x20),
                        *(undefined4 *)(*(long *)(lVar4 + 0x30) + 0x20),
                        *(undefined4 *)(*(long *)(lVar4 + 0x28) + 0x20));
          if (*(long *)(lVar4 + 0x38) != 0) {
            FUN_10038e8e0(*puVar1,"Calls(");
            uVar5 = *puVar1;
            pcVar3 = "";
            for (puVar2 = *(undefined8 **)(lVar4 + 0x38); puVar2 != (undefined8 *)0x0;
                puVar2 = (undefined8 *)*puVar2) {
              FUN_10038e8e0(uVar5,"%s%d",pcVar3,*(undefined4 *)(puVar2[1] + 0x20));
              uVar5 = *puVar1;
              pcVar3 = ", ";
            }
            FUN_10038e8e0(uVar5,")",pcVar3);
          }
          FUN_10038e8e0(*puVar1,"\n");
        }
      }
      else {
        FUN_1003b8dc0(param_1,lVar4);
        for (lVar7 = *(long *)(lVar4 + 0x30); (lVar7 != 0 && (*(long *)(lVar7 + 0x38) == lVar4));
            lVar7 = **(long **)(lVar7 + 8)) {
          uVar5 = FUN_1003b8b60(param_1,lVar7);
          if ((int)uVar5 != 0) {
            return uVar5;
          }
        }
      }
      plVar6 = *(long **)plVar6[2];
    } while (plVar6 != (long *)0x0);
  }
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *puVar1 = 0;
  return 0;
}

