
byte FUN_1007021b0(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  bool bVar10;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  lVar1 = *param_1;
  bVar10 = true;
  if (lVar1 != 0) {
    bVar10 = *(long *)(lVar1 + 0x10) == 0;
  }
  lVar9 = *param_2;
  if (lVar9 == 0) {
    if (bVar10 == false) {
      return 0;
    }
  }
  else if (bVar10 != (*(long *)(lVar9 + 0x10) == 0)) {
    return 0;
  }
  if (lVar1 == 0) {
    cVar3 = '\0';
  }
  else if (*(long **)(lVar1 + 0x10) == (long *)0x0) {
    cVar3 = '\0';
  }
  else {
    cVar3 = (**(code **)(**(long **)(lVar1 + 0x10) + 0x10))();
    lVar9 = *param_2;
  }
  if ((lVar9 == 0) || (*(long **)(lVar9 + 0x10) == (long *)0x0)) {
    if (cVar3 != '\0') {
      return 0;
    }
  }
  else {
    cVar4 = (**(code **)(**(long **)(lVar9 + 0x10) + 0x10))();
    if (cVar3 != cVar4) {
      return 0;
    }
  }
  iVar7 = 0;
  if (*param_1 != 0) {
    plVar2 = *(long **)(*param_1 + 0x10);
    iVar7 = 0;
    if ((plVar2 != (long *)0x0) && (iVar7 = (int)plVar2[2], iVar7 == 0)) {
      iVar7 = (**(code **)(*plVar2 + 0x40))(plVar2);
      *(int *)(plVar2 + 2) = iVar7;
    }
  }
  iVar8 = 0;
  if (((*param_2 != 0) && (plVar2 = *(long **)(*param_2 + 0x10), iVar8 = 0, plVar2 != (long *)0x0))
     && (iVar8 = (int)plVar2[2], iVar8 == 0)) {
    iVar8 = (**(code **)(*plVar2 + 0x40))(plVar2);
    *(int *)(plVar2 + 2) = iVar8;
  }
  if (iVar7 != iVar8) {
    return 0;
  }
  iVar8 = -1;
  iVar7 = -1;
  if (*param_1 != 0) {
    plVar2 = *(long **)(*param_1 + 0x10);
    iVar7 = -1;
    if ((plVar2 != (long *)0x0) && (iVar7 = *(int *)((long)plVar2 + 0x14), iVar7 == -1)) {
      iVar7 = (**(code **)(*plVar2 + 0x38))(plVar2);
      *(int *)((long)plVar2 + 0x14) = iVar7;
    }
  }
  if (((*param_2 != 0) && (plVar2 = *(long **)(*param_2 + 0x10), plVar2 != (long *)0x0)) &&
     (iVar8 = *(int *)((long)plVar2 + 0x14), iVar8 == -1)) {
    iVar8 = (**(code **)(*plVar2 + 0x38))(plVar2);
    *(int *)((long)plVar2 + 0x14) = iVar8;
  }
  if (iVar7 != iVar8) {
    return 0;
  }
  if ((*param_1 == 0) || (*(long *)(*param_1 + 0x10) == 0)) {
    local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  }
  else {
    FUN_100701f80(&local_40);
  }
  if ((*param_2 == 0) || (*(long *)(*param_2 + 0x10) == 0)) {
    local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  }
  else {
    FUN_100701f80(&local_48);
  }
  cVar3 = operator==(&local_40,&local_48);
  if (cVar3 == '\0') {
    bVar5 = 0;
  }
  else {
    if (*param_1 == 0) {
      cVar3 = '\0';
    }
    else {
      plVar2 = *(long **)(*param_1 + 0x10);
      if (plVar2 == (long *)0x0) {
        cVar3 = '\0';
      }
      else {
        cVar3 = (**(code **)(*plVar2 + 0x18))();
      }
    }
    if ((*param_2 == 0) || (plVar2 = *(long **)(*param_2 + 0x10), plVar2 == (long *)0x0)) {
      if (cVar3 == '\0') goto LAB_1007023f3;
      bVar5 = 0;
    }
    else {
      cVar4 = (**(code **)(*plVar2 + 0x18))();
      if (cVar3 == cVar4) {
LAB_1007023f3:
        if (*param_1 == 0) {
          cVar3 = '\0';
        }
        else {
          plVar2 = *(long **)(*param_1 + 0x10);
          if (plVar2 == (long *)0x0) {
            cVar3 = '\0';
          }
          else {
            cVar3 = (**(code **)(*plVar2 + 0x20))();
          }
        }
        if ((*param_2 == 0) || (plVar2 = *(long **)(*param_2 + 0x10), plVar2 == (long *)0x0)) {
          if (cVar3 == '\0') goto LAB_10070244d;
          bVar5 = 0;
        }
        else {
          cVar4 = (**(code **)(*plVar2 + 0x20))();
          if (cVar3 == cVar4) {
LAB_10070244d:
            if (*param_1 == 0) {
              bVar5 = 0;
            }
            else {
              plVar2 = *(long **)(*param_1 + 0x10);
              if (plVar2 == (long *)0x0) {
                bVar5 = 0;
              }
              else {
                bVar5 = (**(code **)(*plVar2 + 0x28))();
              }
            }
            if (*param_2 == 0) {
              bVar6 = 0;
            }
            else {
              plVar2 = *(long **)(*param_2 + 0x10);
              if (plVar2 == (long *)0x0) {
                bVar6 = 0;
              }
              else {
                bVar6 = (**(code **)(*plVar2 + 0x28))();
              }
            }
            bVar5 = bVar5 ^ bVar6 ^ 1;
          }
          else {
            bVar5 = 0;
          }
        }
      }
      else {
        bVar5 = 0;
      }
    }
  }
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100702505;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_100702505:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return bVar5;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return bVar5;
}

