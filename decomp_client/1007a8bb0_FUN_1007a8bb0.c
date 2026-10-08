
void FUN_1007a8bb0(long param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int local_3c;
  int local_38;
  int local_34;
  
  iVar1 = -param_2;
  if (0 < param_2) {
    iVar1 = param_2;
  }
  if (iVar1 < 2) {
    iVar1 = -param_3;
    if (0 < param_3) {
      iVar1 = param_3;
    }
    if ((((iVar1 < 2) && (*(long *)(param_1 + 0x40) != 0)) &&
        (*(int *)(*(long *)(param_1 + 0x40) + 4) != 0)) && (*(long *)(param_1 + 0x48) != 0)) {
      uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa8))();
      local_34 = 0;
      local_38 = 0;
      local_3c = 0;
      QGridLayout::getItemPosition
                ((int)*(undefined8 *)(param_1 + 0x30),(int *)(ulong)uVar2,&local_34,&local_38,
                 &local_3c);
LAB_1007a8c53:
      iVar7 = param_3;
      iVar1 = param_2;
      do {
        iVar6 = local_34 + iVar1;
        if (iVar6 < 0) {
          return;
        }
        iVar3 = QGridLayout::rowCount();
        if (iVar3 <= iVar6) {
          return;
        }
        iVar6 = local_38 + iVar7;
        if (iVar6 == 0 || SCARRY4(local_38,iVar7) != iVar6 < 0) {
          return;
        }
        iVar3 = QGridLayout::columnCount();
        if (iVar3 <= iVar6) {
          return;
        }
        local_34 = local_34 + iVar1;
        local_38 = local_38 + iVar7;
        plVar4 = (long *)QGridLayout::itemAtPosition((int)*(undefined8 *)(param_1 + 0x30),local_34);
        if (plVar4 == (long *)0x0) {
          return;
        }
        lVar5 = (**(code **)(*plVar4 + 0x68))(plVar4);
        if (lVar5 == 0) {
          return;
        }
        (**(code **)(*plVar4 + 0x68))(plVar4);
        plVar4 = (long *)QMetaObject::cast((QObject *)&PTR_staticMetaObject_10222c830);
        if (iVar1 == 0 && iVar7 < 0) {
          lVar5 = (**(code **)(*plVar4 + 0x1a0))(plVar4);
          param_2 = -1;
          param_3 = 0;
          if ((*(int *)(lVar5 + 0x28) == 4) ||
             (lVar5 = (**(code **)(*plVar4 + 0x1a0))(plVar4), *(int *)(lVar5 + 0x28) == 5))
          goto LAB_1007a8c53;
        }
        if (0 < iVar1 && iVar7 == 0) {
          lVar5 = (**(code **)(*plVar4 + 0x1a0))(plVar4);
          param_2 = 0;
          param_3 = 1;
          if ((*(int *)(lVar5 + 0x28) == 4) ||
             (lVar5 = (**(code **)(*plVar4 + 0x1a0))(plVar4), *(int *)(lVar5 + 0x28) == 5))
          goto LAB_1007a8c53;
        }
        lVar5 = (**(code **)(*plVar4 + 0x1a0))(plVar4);
        if ((*(int *)(lVar5 + 0x28) == 2) ||
           (lVar5 = (**(code **)(*plVar4 + 0x1a0))(plVar4), *(int *)(lVar5 + 0x28) == 7)) {
          FUN_1007a7a20(param_1,plVar4);
          return;
        }
      } while( true );
    }
  }
  return;
}

